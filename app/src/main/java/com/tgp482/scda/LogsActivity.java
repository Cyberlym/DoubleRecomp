// The logs screen: the newest runtime log (logs/scda_NNN.log) with the boot
// stage beside it, the latest 2000 lines on screen, and export to public Downloads.
package com.tgp482.scda;

import android.app.Activity;
import android.content.ContentValues;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Typeface;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.provider.MediaStore;
import android.text.method.ScrollingMovementMethod;
import android.util.TypedValue;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.TextView;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.OutputStream;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Locale;
import java.text.SimpleDateFormat;
import java.util.Date;

public class LogsActivity extends Activity {

    private static final int TAIL = 2000;
    private static final int WRITE_STORAGE_REQUEST = 42;
    private String mTail = "";
    private Button mExport;
    private TextView mExportStatus;
    private boolean mExportPending;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Window w = getWindow();
        w.addFlags(WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS);
        w.setStatusBarColor(0xFF0E1118);
        w.setNavigationBarColor(0xFF0E1118);
        buildUi();
        immersive();
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) immersive();
    }

    private void immersive() {
        getWindow().getDecorView().setSystemUiVisibility(
                View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY | View.SYSTEM_UI_FLAG_FULLSCREEN
                        | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                        | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION);
    }

    private File newestLog() {
        File dir = logsDir();
        File[] all = dir.listFiles();
        if (all == null) return null;
        File best = null;
        for (File f : all) {
            if (!f.isFile() || !f.getName().endsWith(".log")) continue;
            if (best == null || f.getName().compareTo(best.getName()) > 0) best = f;
        }
        return best;
    }

    private File logsDir() { return new File(getExternalFilesDir(null), "logs"); }

    private String diagnosticFiles() {
        File dir = logsDir();
        File vs = new File(dir, "blit_vs.spv");
        File fs = new File(dir, "blit_fs.spv");
        return String.format("Diagnóstico: blit_vs.spv %s, blit_fs.spv %s",
                vs.isFile() ? (vs.length() + " bytes") : "não gerado",
                fs.isFile() ? (fs.length() + " bytes") : "não gerado");
    }

    private static String tailOf(File log, int lines) {
        if (log == null) return "";
        List<String> all = new ArrayList<>();
        try (FileInputStream in = new FileInputStream(log)) {
            byte[] bytes = new byte[(int) Math.min(log.length(), 8 << 20)];
            int got = 0;
            while (got < bytes.length) got += in.read(bytes, got, bytes.length - got);
            for (String line : new String(bytes, StandardCharsets.UTF_8).split("\n")) {
                if (!line.isEmpty()) all.add(line);
            }
        } catch (Exception e) {
            return "(o log não pôde ser lido)";
        }
        StringBuilder text = new StringBuilder();
        int from = Math.max(0, all.size() - lines);
        for (int i = from; i < all.size(); i++) text.append(all.get(i)).append('\n');
        return text.toString();
    }

    private String stageLine() {
        try (FileInputStream in = new FileInputStream(
                new File(new File(getExternalFilesDir(null), "logs"), "boot_stage.txt"))) {
            byte[] all = new byte[256];
            int n = in.read(all);
            if (n > 0) return "Último estágio do boot: " + new String(all, 0, n, StandardCharsets.UTF_8).trim();
        } catch (Exception e) {
        }
        return "Nenhum boot registrado ainda.";
    }

    private void buildUi() {
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setBackgroundColor(0xFF0E1118);
        root.setPadding(dp(24), dp(20), dp(24), dp(20));

        TextView title = new TextView(this);
        title.setText("Logs");
        title.setTextColor(0xFFECF0F4);
        title.setTypeface(Typeface.DEFAULT_BOLD);
        title.setTextSize(TypedValue.COMPLEX_UNIT_SP, 22);
        root.addView(title, new LinearLayout.LayoutParams(-1, -2));

        TextView stage = new TextView(this);
        stage.setText(stageLine());
        stage.setTextColor(0xFF9FB6C8);
        stage.setTextSize(TypedValue.COMPLEX_UNIT_SP, 13);
        stage.setPadding(0, dp(6), 0, dp(6));
        root.addView(stage, new LinearLayout.LayoutParams(-1, -2));

        TextView diagnostics = new TextView(this);
        diagnostics.setText(diagnosticFiles());
        diagnostics.setTextColor(0xFF9FB6C8);
        diagnostics.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        diagnostics.setPadding(0, 0, 0, dp(6));
        root.addView(diagnostics, new LinearLayout.LayoutParams(-1, -2));

        TextView log = new TextView(this);
        log.setTypeface(Typeface.MONOSPACE);
        log.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11);
        log.setTextColor(0xFFB9C4D0);
        mTail = tailOf(newestLog(), TAIL);
        log.setText(mTail.isEmpty() ? "Sem log ainda — rode o jogo uma vez." : mTail);
        ScrollView scroll = new ScrollView(this);
        scroll.setFillViewport(true);
        scroll.addView(log);
        root.addView(scroll, new LinearLayout.LayoutParams(-1, 0, 1f));

        Button share = new Button(this);
        share.setText("COMPARTILHAR LOG");
        share.setTextColor(0xFFECF0F4);
        share.setAllCaps(false);
        share.setTextSize(TypedValue.COMPLEX_UNIT_SP, 15);
        android.graphics.drawable.GradientDrawable shape = new android.graphics.drawable.GradientDrawable();
        shape.setCornerRadius(dp(22));
        shape.setColor(0xFF232A38);
        share.setBackground(shape);
        share.setOnClickListener(v -> share(this));
        LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(-1, dp(52));
        p.topMargin = dp(12);
        root.addView(share, p);

        mExport = new Button(this);
        mExport.setText("EXPORTAR LOG COMPLETA");
        mExport.setTextColor(0xFFECF0F4);
        mExport.setAllCaps(false);
        mExport.setTextSize(TypedValue.COMPLEX_UNIT_SP, 15);
        mExport.setBackground(shape);
        mExport.setOnClickListener(v -> exportLog());
        LinearLayout.LayoutParams ep = new LinearLayout.LayoutParams(-1, dp(52));
        ep.topMargin = dp(8);
        root.addView(mExport, ep);

        mExportStatus = new TextView(this);
        mExportStatus.setTextColor(0xFF9FB6C8);
        mExportStatus.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        mExportStatus.setPadding(0, dp(6), 0, 0);
        root.addView(mExportStatus, new LinearLayout.LayoutParams(-1, -2));

        setContentView(root);
    }

    private void exportLog() {
        if (Build.VERSION.SDK_INT <= 28
                && checkSelfPermission("android.permission.WRITE_EXTERNAL_STORAGE")
                        != PackageManager.PERMISSION_GRANTED) {
            mExportPending = true;
            requestPermissions(new String[] {"android.permission.WRITE_EXTERNAL_STORAGE"}, WRITE_STORAGE_REQUEST);
            return;
        }
        File log = newestLog();
        if (log == null || !log.isFile()) {
            mExportStatus.setText("Nenhum log completo disponível ainda.");
            return;
        }
        mExport.setEnabled(false);
        mExportStatus.setText("Exportando o log completo...");
        new Thread(() -> {
            String result = exportLogFile(log);
            runOnUiThread(() -> {
                mExport.setEnabled(true);
                mExportStatus.setText(result);
            });
        }, "scda-log-export").start();
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] results) {
        super.onRequestPermissionsResult(requestCode, permissions, results);
        if (requestCode != WRITE_STORAGE_REQUEST || !mExportPending) return;
        mExportPending = false;
        if (results.length > 0 && results[0] == PackageManager.PERMISSION_GRANTED) exportLog();
        else mExportStatus.setText("Permissão recusada; o log não foi exportado.");
    }

    private String exportLogFile(File source) {
        String name = "scda_log_" + new SimpleDateFormat("yyyyMMdd_HHmmss", Locale.US).format(new Date()) + ".log";
        Uri pending = null;
        try {
            OutputStream out;
            if (Build.VERSION.SDK_INT >= 29) {
                ContentValues values = new ContentValues();
                values.put(MediaStore.Downloads.DISPLAY_NAME, name);
                values.put(MediaStore.Downloads.MIME_TYPE, "text/plain");
                values.put(MediaStore.Downloads.RELATIVE_PATH,
                        Environment.DIRECTORY_DOWNLOADS + "/SCDA Port");
                values.put(MediaStore.Downloads.IS_PENDING, 1);
                pending = getContentResolver().insert(MediaStore.Downloads.EXTERNAL_CONTENT_URI, values);
                if (pending == null) return "Não foi possível criar o arquivo em Download/SCDA Port.";
                out = getContentResolver().openOutputStream(pending);
                if (out == null) throw new Exception("arquivo de destino indisponível");
            } else {
                File dir = new File(Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS),
                        "SCDA Port");
                if (!dir.exists() && !dir.mkdirs()) throw new Exception("não foi possível criar Download/SCDA Port");
                out = new FileOutputStream(new File(dir, name));
            }

            try (FileInputStream in = new FileInputStream(source); OutputStream stream = out) {
                byte[] buffer = new byte[64 << 10];
                int n;
                while ((n = in.read(buffer)) != -1) stream.write(buffer, 0, n);
                stream.flush();
            }
            if (pending != null) {
                ContentValues ready = new ContentValues();
                ready.put(MediaStore.Downloads.IS_PENDING, 0);
                getContentResolver().update(pending, ready, null, null);
            }
            return "Log completo salvo em Download/SCDA Port/" + name;
        } catch (Exception e) {
            if (pending != null) getContentResolver().delete(pending, null, null);
            return "Falha ao exportar o log: " + e.getMessage();
        }
    }

    // also used by the launcher's fail dialog
    static void share(Activity from) {
        Intent send = new Intent(Intent.ACTION_SEND);
        send.setType("text/plain");
        send.putExtra(Intent.EXTRA_SUBJECT, "SCDA Port log");
        send.putExtra(Intent.EXTRA_TEXT, tailForSharing(from));
        from.startActivity(Intent.createChooser(send, "Compartilhar log"));
    }

    private static File newestLogIn(File dir) {
        File best = null;
        File[] all = dir.listFiles();
        if (all != null)
            for (File f : all) {
                if (!f.isFile() || !f.getName().endsWith(".log")) continue;
                if (best == null || f.getName().compareTo(best.getName()) > 0) best = f;
            }
        return best;
    }

    private static String stageIn(File dir) {
        try (FileInputStream in = new FileInputStream(new File(dir, "boot_stage.txt"))) {
            byte[] all = new byte[256];
            int n = in.read(all);
            if (n > 0) return new String(all, 0, n, StandardCharsets.UTF_8).trim();
        } catch (Exception e) {
        }
        return "(nenhum)";
    }

    private static String tailForSharing(Activity from) {
        File dir = new File(from.getExternalFilesDir(null), "logs");
        String tail = tailOf(newestLogIn(dir), TAIL);
        return "Estágio do boot: " + stageIn(dir) + "\n\n" + (tail.isEmpty() ? "(sem log)" : tail);
    }

    private int dp(int v) {
        return (int) TypedValue.applyDimension(TypedValue.COMPLEX_UNIT_DIP, v,
                getResources().getDisplayMetrics());
    }
}
