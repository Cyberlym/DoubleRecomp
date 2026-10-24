// The game installer: copies the disc image the user picked (SAF Uri) into the
// app's own files, in 2 MB blocks with a streaming SHA-256, then validates it
// reads the way the runtime's own disc reader does (the XDVDFS volume descriptor
// at sector 32 of the game partition, default.xbe in the root, the title id)
// and only then moves it to game/<Title>/<Title>.iso and writes install.json.
// A foreground service: Android keeps the copy alive; the notification shows
// the progress; the cancel button deletes the staging file.
package com.tgp482.scda;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.Service;
import android.content.Intent;
import android.os.Build;
import android.os.IBinder;

import org.json.JSONObject;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.MessageDigest;
import java.util.Locale;

public class InstallService extends Service {

    public static final String ACTION_INSTALL = "com.tgp482.scda.action.INSTALL";
    public static final String ACTION_CANCEL = "com.tgp482.scda.action.CANCEL";
    public static final String EXTRA_URI = "uri";
    public static final String BROADCAST = "com.tgp482.scda.INSTALL_EVENT";
    public static final String EXTRA_STATE = "state";  // progress | done | failed | canceled
    public static final String EXTRA_BYTES = "bytes";
    public static final String EXTRA_TOTAL = "total";
    public static final String EXTRA_MESSAGE = "message";

    private static final String CHANNEL_ID = "install";
    private static final int NOTIF_ID = 1;
    private static final int BLOCK = 2 * 1024 * 1024;
    private static final long SECTOR = 2048;
    // the partitions a whole-disc dump carries its game data behind (an xiso starts at 0)
    private static final long[] PARTITIONS = {0, 0x18300000L, 0x0FD90000L, 0x02080000L};
    private static final byte[] XDVDFS_MAGIC = "MICROSOFT*XBOX*MEDIA".getBytes();
    // the title this build was recompiled from, from the reference image's certificate
    private static final int EXPECTED_TITLE_ID = 0x5553005E;

    private volatile boolean mCancel = false;
    private Thread mThread = null;

    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override
    public void onCreate() {
        super.onCreate();
        NotificationManager nm = getSystemService(NotificationManager.class);
        if (Build.VERSION.SDK_INT >= 26) {
            NotificationChannel ch = new NotificationChannel(CHANNEL_ID, "Instalação do jogo",
                    NotificationManager.IMPORTANCE_LOW);
            ch.setDescription("Progresso da cópia da ISO");
            nm.createNotificationChannel(ch);
        }
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        String action = intent != null ? intent.getAction() : null;
        if (ACTION_CANCEL.equals(action)) {
            mCancel = true;
            return START_NOT_STICKY;
        }
        if (!ACTION_INSTALL.equals(action) || intent == null || intent.getData() == null) {
            stopSelf();
            return START_NOT_STICKY;
        }
        final android.net.Uri uri = intent.getData();
        if (mThread != null && mThread.isAlive()) return START_NOT_STICKY;  // one install at a time
        startForeground(NOTIF_ID, buildProgress(0, 1, "Preparando…"));
        mThread = new Thread(() -> install(uri), "iso-install");
        mThread.start();
        return START_NOT_STICKY;
    }

    private void install(android.net.Uri uri) {
        File stagingDir = new File(new File(getExternalFilesDir(null), "game"), ".install");
        if (!stagingDir.exists()) stagingDir.mkdirs();
        File tmp = new File(stagingDir, "iso.tmp");
        tmp.delete();  // no orphan from a previous run

        long total = 0;
        try (android.content.res.AssetFileDescriptor fd = getContentResolver().openAssetFileDescriptor(uri, "r")) {
            if (fd != null) total = fd.getLength();
        } catch (Exception e) {
            total = 0;
        }
        if (total <= 0) {
            try (InputStream probe = getContentResolver().openInputStream(uri)) {
                if (probe == null) fail("Não foi possível abrir o arquivo selecionado.");
                else while (probe.skip(1 << 20) > 0) total += 1 << 20;
            } catch (Exception e) {
                fail("Não foi possível abrir o arquivo selecionado: " + e.getMessage());
                return;
            }
        }
        // room check on the app's own storage, 5% on top for the copy's own overhead
        long free = new File(getExternalFilesDir(null).getAbsolutePath()).getFreeSpace();
        long need = (long) (total * 1.05);
        if (free < need) {
            fail(String.format(Locale.US, "Espaço insuficiente: faltam %.1f GB de %.1f GB.",
                    (need - free) / 1e9, need / 1e9));
            return;
        }

        MessageDigest sha;
        try {
            sha = MessageDigest.getInstance("SHA-256");
        } catch (Exception e) {
            fail("SHA-256 indisponível");
            return;
        }

        long done = 0;
        byte[] block = new byte[BLOCK];
        notifyProgress(0, total, "Copiando ISO…");
        try (InputStream in = getContentResolver().openInputStream(uri);
             OutputStream out = new FileOutputStream(tmp)) {
            if (in == null) {
                fail("Não foi possível abrir o arquivo selecionado.");
                return;
            }
            int read;
            long lastNote = System.currentTimeMillis();
            while (!mCancel && (read = in.read(block)) > 0) {
                out.write(block, 0, read);
                sha.update(block, 0, read);
                done += read;
                if (System.currentTimeMillis() - lastNote > 250) {
                    lastNote = System.currentTimeMillis();
                    notifyProgress(done, total, "Copiando ISO…");
                    broadcast("progress", done, total, null);
                }
            }
        } catch (Exception e) {
            tmp.delete();
            fail("Falha na cópia: " + e.getMessage());
            return;
        }
        if (mCancel) {
            tmp.delete();
            broadcast("canceled", 0, 0, "Cópia cancelada");
            stopSelf();
            return;
        }
        if (done != total) {
            tmp.delete();
            fail(String.format(Locale.US, "A cópia parou em %d de %d bytes.", done, total));
            return;
        }

        notifyProgress(total, total, "Validando…");
        broadcast("progress", total, total, "Validando…");
        IsoInfo iso;
        try {
            iso = validate(tmp);
        } catch (Exception e) {
            tmp.delete();
            fail("ISO inválida: " + e.getMessage());
            return;
        }

        // the folder carries the game's own name from its certificate
        String folder = safeName(iso.title);
        File gameDir = new File(getExternalFilesDir(null), "game");
        File destDir = new File(gameDir, folder);
        if (!destDir.exists()) destDir.mkdirs();
        File dest = new File(destDir, folder + ".iso");
        if (dest.exists()) dest.delete();  // a reinstall replaces the image, never the saves
        if (!tmp.renameTo(dest) && !moveByCopy(tmp, dest)) {
            tmp.delete();
            fail("Não foi possível mover a ISO para a pasta do jogo.");
            return;
        }

        String hash = hex(sha.digest());
        try {
            JSONObject marker = new JSONObject();
            marker.put("name", iso.title);
            marker.put("file", "game/" + folder + "/" + dest.getName());
            marker.put("size", total);
            marker.put("sha256", hash);
            marker.put("partition", iso.partition);
            marker.put("title_id", String.format("%08X", EXPECTED_TITLE_ID));
            marker.put("xbe_sha1", "91290baf93c2f6ae735a3106c48734665c826d84");
            marker.put("date", System.currentTimeMillis());
            try (FileOutputStream f = new FileOutputStream(new File(gameDir, "install.json"))) {
                f.write(marker.toString(2).getBytes("UTF-8"));
            }
        } catch (Exception e) {
            dest.delete();
            fail("Falha ao gravar o marcador de instalação: " + e.getMessage());
            return;
        }

        Notification n = doneNotification(String.format(Locale.US,
                "Jogo instalado: %s (%.2f GB)", iso.title, total / 1e9));
        getSystemService(NotificationManager.class).notify(NOTIF_ID, n);
        broadcast("done", total, total, iso.title);
        stopSelf();
    }

    // ---- the disc, the way the runtime's kernel/disc.cpp reads it ----

    private static class IsoInfo {
        String title;
        long partition;
        long xbeSector;  // in sectors, within the partition
        long xbeSize;
    }

    private IsoInfo validate(File iso) throws Exception {
        try (RandomAccessFile f = new RandomAccessFile(iso, "r")) {
            long partition = -1;
            byte[] volume = new byte[(int) SECTOR];
            for (long base : PARTITIONS) {
                if (base + 32 * SECTOR + SECTOR > iso.length()) continue;
                f.seek(base + 32 * SECTOR);
                if (f.read(volume) != volume.length) continue;
                if (!magic(volume, 0) || !magic(volume, 0x7EC)) continue;
                partition = base;
                break;
            }
            if (partition < 0) throw new Exception("não é uma ISO de Xbox (sem volume XDVDFS)");

            // the root folder's table: sector and size from the volume descriptor
            long rootSector = u32(volume, 0x14) & 0xFFFFFFFFL;
            long rootSize = u32(volume, 0x18) & 0xFFFFFFFFL;
            if (rootSize <= 0 || rootSize > 16 << 20) throw new Exception("tabela raiz ilegível");
            byte[] table = new byte[(int) rootSize];
            f.seek(partition + rootSector * SECTOR);
            if (f.read(table) != table.length) throw new Exception("tabela raiz ilegível");
            long[] xbe = findEntry(table, "default.xbe");
            if (xbe == null) throw new Exception("o jogo não tem default.xbe na raiz");

            byte[] head = new byte[0x2000];
            f.seek(partition + xbe[0] * SECTOR);
            if (f.read(head) < 0x180 || head[0] != 'X' || head[1] != 'B' || head[2] != 'E' || head[3] != 'H')
                throw new Exception("default.xbe ilegível");
            ByteBuffer b = ByteBuffer.wrap(head).order(ByteOrder.LITTLE_ENDIAN);
            long imgBase = u32(head, 0x104) & 0xFFFFFFFFL;
            long cert = u32(head, 0x118) & 0xFFFFFFFFL;
            int off = (int) (cert - imgBase);
            if (off < 0 || off + 0x5C > head.length) throw new Exception("certificado do XBE ilegível");
            long titleId = u32(head, off + 8) & 0xFFFFFFFFL;
            if (titleId != EXPECTED_TITLE_ID)
                throw new Exception(String.format(Locale.US, "jogo diferente do esperado (TitleID %08X)", titleId));

            IsoInfo info = new IsoInfo();
            StringBuilder name = new StringBuilder();
            for (int i = 0; i < 80; i += 2) {
                int c = b.getShort(off + 0xC + i) & 0xFFFF;
                if (c == 0) break;
                name.append((char) c);
            }
            info.title = name.toString().trim();
            if (info.title.isEmpty()) info.title = "SCDA";
            info.partition = partition;
            info.xbeSector = xbe[0];
            info.xbeSize = xbe[1];
            return info;
        }
    }

    private static boolean magic(byte[] at, int off) {
        for (int i = 0; i < XDVDFS_MAGIC.length; i++)
            if (at[off + i] != XDVDFS_MAGIC[i]) return false;
        return true;
    }

    private static int u32(byte[] b, int off) {
        return (b[off] & 0xFF) | (b[off + 1] & 0xFF) << 8 | (b[off + 2] & 0xFF) << 16 | (b[off + 3] & 0xFF) << 24;
    }

    // the folder table is a binary tree: left and right are entry offsets in 4-byte units
    private static long[] findEntry(byte[] table, String want) {
        int n = table.length;
        byte[] seen = new byte[n / 4 + 1];
        java.util.ArrayDeque<Integer> todo = new java.util.ArrayDeque<>();
        todo.push(0);
        while (!todo.isEmpty()) {
            int at = todo.pop();
            if (at + 0xE > n) continue;
            if (seen[at / 4] != 0) continue;
            seen[at / 4] = 1;
            int left = (table[at] & 0xFF) | (table[at + 1] & 0xFF) << 8;
            int right = (table[at + 2] & 0xFF) | (table[at + 3] & 0xFF) << 8;
            long sector = u32(table, at + 4) & 0xFFFFFFFFL;
            long size = u32(table, at + 8) & 0xFFFFFFFFL;
            int nameLen = table[at + 0xD] & 0xFF;
            boolean folder = (table[at + 0xC] & 0x10) != 0;
            if (!folder && nameLen > 0 && at + 0xE + nameLen <= n) {
                String name = new String(table, at + 0xE, nameLen);
                if (name.equalsIgnoreCase(want)) return new long[]{sector, size};
            }
            if (right > 0) todo.push(right * 4);
            if (left > 0) todo.push(left * 4);
        }
        return null;
    }

    private static String safeName(String s) {
        StringBuilder out = new StringBuilder();
        for (char c : s.toCharArray())
            if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == '-' || c == '_')
                out.append(c);
        return out.length() == 0 ? "SCDA" : out.toString();
    }

    private static String hex(byte[] digest) {
        StringBuilder s = new StringBuilder();
        for (byte d : digest) s.append(String.format("%02x", d));
        return s.toString();
    }

    private static boolean moveByCopy(File src, File dst) {
        try (InputStream in = new FileInputStream(src); OutputStream out = new FileOutputStream(dst)) {
            byte[] b = new byte[1 << 20];
            int r;
            while ((r = in.read(b)) > 0) out.write(b, 0, r);
            src.delete();
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    // ---- the notifications and the launcher feed ----

    private Notification buildProgress(long done, long total, String text) {
        Notification.Builder b = Build.VERSION.SDK_INT >= 26 ? new Notification.Builder(this, CHANNEL_ID)
                                                             : new Notification.Builder(this);
        b.setSmallIcon(android.R.drawable.stat_sys_download)
                .setContentTitle("SCDA Port")
                .setContentText(text)
                .setOngoing(true)
                .setOnlyAlertOnce(true);
        if (total > 0) b.setProgress(100, (int) (done * 100 / total), false);
        return b.build();
    }

    private void notifyProgress(long done, long total, String text) {
        getSystemService(NotificationManager.class).notify(NOTIF_ID, buildProgress(done, total, text));
    }

    private Notification doneNotification(String text) {
        Notification.Builder b = Build.VERSION.SDK_INT >= 26 ? new Notification.Builder(this, CHANNEL_ID)
                                                             : new Notification.Builder(this);
        return b.setSmallIcon(android.R.drawable.stat_sys_download_done)
                .setContentTitle("SCDA Port")
                .setContentText(text)
                .setAutoCancel(true)
                .build();
    }

    private void fail(String message) {
        Notification.Builder b = Build.VERSION.SDK_INT >= 26 ? new Notification.Builder(this, CHANNEL_ID)
                                                             : new Notification.Builder(this);
        b.setSmallIcon(android.R.drawable.stat_notify_error)
                .setContentTitle("SCDA Port")
                .setContentText(message)
                .setAutoCancel(true);
        getSystemService(NotificationManager.class).notify(NOTIF_ID + 1, b.build());
        broadcast("failed", 0, 0, message);
        stopSelf();
    }

    private void broadcast(String state, long bytes, long total, String message) {
        Intent i = new Intent(BROADCAST);
        i.setPackage(getPackageName());
        i.putExtra(EXTRA_STATE, state);
        i.putExtra(EXTRA_BYTES, bytes);
        i.putExtra(EXTRA_TOTAL, total);
        if (message != null) i.putExtra(EXTRA_MESSAGE, message);
        sendBroadcast(i);
    }
}
