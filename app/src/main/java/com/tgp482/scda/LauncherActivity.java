// The launcher: the app's front door. Shows the game and its install state,
// imports a disc image through the system picker (SAF, no storage permission),
// runs the install as a foreground service and starts the game Activity when
// the image is in place. Coming back from the game, it says how far the last run
// got when it did not come up.
package com.tgp482.scda;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.DialogInterface;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.StatFs;
import android.os.Environment;
import android.text.method.ScrollingMovementMethod;
import android.util.TypedValue;
import android.view.Gravity;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.ScrollView;
import android.widget.TextView;

import org.json.JSONObject;

import java.io.File;
import java.io.FileInputStream;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

public class LauncherActivity extends Activity {

    private static final int PICK_ISO = 41;

    private TextView mStatus;
    private Button mPlay;
    private Button mSelect;
    private Button mRemove;
    private ProgressDialog mProgress;
    private boolean mFromGame = false;
    private boolean mReported = false;

    private final BroadcastReceiver mInstallFeed = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            String state = intent.getStringExtra(InstallService.EXTRA_STATE);
            long bytes = intent.getLongExtra(InstallService.EXTRA_BYTES, 0);
            long total = intent.getLongExtra(InstallService.EXTRA_TOTAL, 0);
            String message = intent.getStringExtra(InstallService.EXTRA_MESSAGE);
            switch (state != null ? state : "") {
                case "progress":
                    if (mProgress != null) {
                        mProgress.setMax(100);
                        mProgress.setProgress(total > 0 ? (int) (bytes * 100 / total) : 0);
                        String text = message != null ? message : "Copiando";
                        mProgress.setMessage(text + String.format(Locale.US, "  %.2f / %.2f GB", bytes / 1e9,
                                total / 1e9));
                    }
                    break;
                case "done":
                    closeProgress();
                    refresh();
                    break;
                case "canceled":
                    closeProgress();
                    refresh();
                    break;
                case "failed":
                    closeProgress();
                    if (message != null) new AlertDialog.Builder(LauncherActivity.this)
                            .setTitle("Instalação falhou")
                            .setMessage(message)
                            .setPositiveButton("OK", null)
                            .show();
                    refresh();
                    break;
            }
        }
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Window w = getWindow();
        w.addFlags(WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS);
        w.setStatusBarColor(0xFF0E1118);
        w.setNavigationBarColor(0xFF0E1118);
        buildUi();
        deleteOrphanStaging();
        reportLastRunOnce();  // a killed process comes back here before the game Activity does
        refresh();
    }

    @Override
    protected void onResume() {
        super.onResume();
        immersive();
        IntentFilter filter = new IntentFilter(InstallService.BROADCAST);
        if (Build.VERSION.SDK_INT >= 33)
            registerReceiver(mInstallFeed, filter, Context.RECEIVER_NOT_EXPORTED);
        else
            registerReceiver(mInstallFeed, filter);
        if (mFromGame) {
            mFromGame = false;
            if (consumeRelaunch()) {
                play();
                return;
            }
            reportLastRunOnce();
        }
        refresh();
    }

    @Override
    protected void onPause() {
        super.onPause();
        unregisterReceiver(mInstallFeed);
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

    // ---- the install state ----

    private JSONObject marker() {
        File f = new File(new File(getExternalFilesDir(null), "game"), "install.json");
        if (!f.isFile()) return null;
        try (FileInputStream in = new FileInputStream(f)) {
            byte[] all = new byte[(int) f.length()];
            int got = 0;
            while (got < all.length) got += in.read(all, got, all.length - got);
            return new JSONObject(new String(all, StandardCharsets.UTF_8));
        } catch (Exception e) {
            return null;
        }
    }

    private File installedIso(JSONObject marker) {
        try {
            File f = new File(getExternalFilesDir(null), marker.getString("file"));
            if (f.isFile() && f.length() == marker.getLong("size")) return f;
        } catch (Exception e) {
        }
        return null;
    }

    private void refresh() {
        JSONObject marker = marker();
        File iso = marker != null ? installedIso(marker) : null;
        String name = "Splinter Cell: Double Agent";
        if (marker != null) {
            try {
                String markerName = marker.optString("name", "");
                if (!markerName.isEmpty()) name = markerName;
            } catch (Exception e) {
            }
        }
        ((TextView) findViewById(0xC0DE01)).setText(name);
        if (iso != null) {
            mStatus.setText(String.format(Locale.US, "Pronto  •  %.2f GB", iso.length() / 1e9));
            mPlay.setEnabled(true);
            mSelect.setText("REINSTALAR");
            mRemove.setVisibility(View.VISIBLE);
        } else {
            mStatus.setText(marker != null ? "Instalação incompleta — selecione a ISO novamente"
                                           : "Jogo não instalado — selecione a ISO");
            mPlay.setEnabled(false);
            mSelect.setText("SELECIONAR ISO");
            mRemove.setVisibility(View.GONE);
        }
    }

    private boolean consumeRelaunch() {
        File marker = new File(new File(getExternalFilesDir(null), "data"), "relaunch.pending");
        return marker.isFile() && marker.delete();
    }

    private void deleteOrphanStaging() {
        File staging = new File(new File(getExternalFilesDir(null), "game"), ".install");
        File[] left = staging.listFiles();
        if (left == null) return;
        for (File f : left) f.delete();
    }

    // ---- the buttons ----

    private void play() {
        JSONObject marker = marker();
        File iso = marker != null ? installedIso(marker) : null;
        if (iso == null) return;
        Intent game = new Intent(this, ScdaActivity.class);
        game.putExtra("game_iso", iso.getAbsolutePath());
        game.putExtra("game_name", iso.getParentFile() != null ? iso.getParentFile().getName() : "");
        mFromGame = true;
        startActivity(game);
    }

    private void pickIso() {
        if (Build.VERSION.SDK_INT >= 33 &&
                checkSelfPermission("android.permission.POST_NOTIFICATIONS") !=
                        android.content.pm.PackageManager.PERMISSION_GRANTED) {
            requestPermissions(new String[]{"android.permission.POST_NOTIFICATIONS"}, 7);
        }
        Intent picker = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        picker.addCategory(Intent.CATEGORY_OPENABLE);
        picker.setType("*/*");
        String[] mimes = {"application/x-iso9660-image", "application/octet-stream", "application/x-cd-image"};
        picker.putExtra(Intent.EXTRA_MIME_TYPES, mimes);
        startActivityForResult(picker, PICK_ISO);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode != PICK_ISO) return;
        if (resultCode != RESULT_OK || data == null || data.getData() == null) return;
        Uri uri = data.getData();
        long size = 0;
        try (android.content.res.AssetFileDescriptor fd = getContentResolver().openAssetFileDescriptor(uri, "r")) {
            if (fd != null) size = fd.getLength();
        } catch (Exception e) {
            size = 0;
        }
        if (size <= 0) {
            new AlertDialog.Builder(this).setTitle("Selecionar ISO")
                    .setMessage("O arquivo escolhido não pôde ser lido.")
                    .setPositiveButton("OK", null).show();
            return;
        }
        File dest = getExternalFilesDir(null);
        StatFs stat = new StatFs(dest.getPath());
        long free = stat.getAvailableBytes();
        long need = (long) (size * 1.05);
        if (free < need) {
            new AlertDialog.Builder(this).setTitle("Sem espaço")
                    .setMessage(String.format(Locale.US,
                            "Faltam %.1f GB para copiar a ISO (livre: %.1f GB, necessário: %.1f GB).",
                            (need - free) / 1e9, free / 1e9, need / 1e9))
                    .setPositiveButton("OK", null).show();
            return;
        }
        new AlertDialog.Builder(this).setTitle("Instalar o jogo")
                .setMessage(String.format(Locale.US,
                        "A ISO (%.2f GB) será copiada para a pasta do app; o arquivo fica duplicado até o fim da cópia. "
                                + "Não feche o app durante a instalação.", size / 1e9))
                .setPositiveButton("INSTALAR", (d, w) -> startInstall(uri))
                .setNegativeButton("CANCELAR", null).show();
    }

    private void startInstall(Uri uri) {
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        mProgress = new ProgressDialog(this);
        mProgress.setTitle("Instalando");
        mProgress.setMessage("Preparando…");
        mProgress.setMax(100);
        mProgress.setProgressStyle(ProgressDialog.STYLE_HORIZONTAL);
        mProgress.setCancelable(false);
        mProgress.setButton(DialogInterface.BUTTON_NEUTRAL, "CANCELAR", (d, w) -> {
            Intent cancel = new Intent(this, InstallService.class);
            cancel.setAction(InstallService.ACTION_CANCEL);
            startService(cancel);
        });
        mProgress.show();
        Intent install = new Intent(this, InstallService.class);
        install.setAction(InstallService.ACTION_INSTALL);
        install.setData(uri);
        if (Build.VERSION.SDK_INT >= 26) startForegroundService(install);
        else startService(install);
    }

    private void closeProgress() {
        getWindow().clearFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        if (mProgress != null) {
            mProgress.dismiss();
            mProgress = null;
        }
    }

    private void removeGame() {
        new AlertDialog.Builder(this).setTitle("Remover jogo")
                .setMessage("A ISO instalada e o marcador são apagados. Seus saves, o cache de shaders e as opções ficam.")
                .setPositiveButton("REMOVER", (d, w) -> {
                    File game = new File(getExternalFilesDir(null), "game");
                    File[] entries = game.listFiles();
                    if (entries != null)
                        for (File dir : entries) if (dir.isDirectory()) deleteTree(dir);
                    new File(game, "install.json").delete();
                    refresh();
                })
                .setNegativeButton("CANCELAR", null).show();
    }

    private static void deleteTree(File f) {
        File[] all = f.listFiles();
        if (all != null) for (File c : all) deleteTree(c);
        f.delete();
    }

    // ---- the last run, how far it got ----

    private String bootStage() {
        try (FileInputStream in = new FileInputStream(
                new File(new File(getExternalFilesDir(null), "logs"), "boot_stage.txt"))) {
            byte[] all = new byte[256];
            int n = in.read(all);
            if (n <= 0) return "";
            return new String(all, 0, n, StandardCharsets.UTF_8).trim();
        } catch (Exception e) {
            return "";
        }
    }

    private boolean ranClean() {
        return new File(new File(getExternalFilesDir(null), "logs"), "run_clean.txt").isFile();
    }

    private void reportLastRunOnce() {
        if (mReported) return;
        mReported = true;
        reportLastRun();
    }

    private void reportLastRun() {
        String stage = bootStage();
        if (stage.isEmpty()) return;
        if (ranClean()) return;
        if (stage.equals("first_frame_presented")) {
            new AlertDialog.Builder(this).setTitle("Execução anterior")
                    .setMessage("A última execução foi encerrada de forma anormal (sem saída limpa do jogo).")
                    .setPositiveButton("OK", null)
                    .setNeutralButton("VER LOGS", (d, w) -> openLogs())
                    .show();
            return;
        }
        new AlertDialog.Builder(this).setTitle("O jogo não chegou ao primeiro frame")
                .setMessage("Estágio: " + stage + "\n\nCompartilhe o log para diagnóstico.")
                .setPositiveButton("OK", null)
                .setNeutralButton("COMPARTILHAR LOG", (d, w) -> shareLog())
                .show();
    }

    private boolean neverRan() {
        return !new File(new File(getExternalFilesDir(null), "logs"), "boot_stage.txt").isFile();
    }

    private void openLogs() {
        startActivity(new Intent(this, LogsActivity.class));
    }

    private void shareLog() {
        LogsActivity.share(this);
    }

    // ---- the view ----

    private void buildUi() {
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setBackgroundColor(0xFF0E1118);
        root.setPadding(dp(28), dp(24), dp(28), dp(24));

        TextView title = new TextView(this);
        title.setId(0xC0DE01);
        title.setText("Splinter Cell: Double Agent");
        title.setTextColor(0xFFECF0F4);
        title.setTypeface(Typeface.DEFAULT_BOLD);
        title.setTextSize(TypedValue.COMPLEX_UNIT_SP, 26);
        root.addView(title, new LinearLayout.LayoutParams(-1, -2));

        TextView subtitle = new TextView(this);
        subtitle.setText("Port nativo — sem emulação");
        subtitle.setTextColor(0xFF7E8899);
        subtitle.setTextSize(TypedValue.COMPLEX_UNIT_SP, 14);
        root.addView(subtitle, new LinearLayout.LayoutParams(-1, -2, 1f));

        mStatus = new TextView(this);
        mStatus.setTextColor(0xFF9FB6C8);
        mStatus.setTextSize(TypedValue.COMPLEX_UNIT_SP, 16);
        mStatus.setPadding(0, dp(14), 0, dp(14));
        root.addView(mStatus, new LinearLayout.LayoutParams(-1, -2));

        mPlay = button("JOGAR", 0xFF2E7D32, 0xFFECF0F4, v -> play());
        mSelect = button("SELECIONAR ISO", 0xFF232A38, 0xFFECF0F4, v -> pickIso());
        Button options = button("OPÇÕES", 0xFF232A38, 0xFFECF0F4, v ->
                startActivity(new Intent(this, OptionsActivity.class)));
        Button logs = button("LOGS", 0xFF232A38, 0xFFECF0F4, v -> openLogs());
        mRemove = button("REMOVER JOGO", 0xFF3A2326, 0xFFF2B8B8, v -> removeGame());

        root.addView(mPlay, params(72));
        root.addView(mSelect, params(56));
        root.addView(options, params(56));
        root.addView(logs, params(56));
        root.addView(mRemove, params(56));

        ScrollView scroll = new ScrollView(this);
        scroll.setFillViewport(true);
        scroll.addView(root);
        setContentView(scroll);
    }

    private int dp(int v) {
        return (int) TypedValue.applyDimension(TypedValue.COMPLEX_UNIT_DIP, v,
                getResources().getDisplayMetrics());
    }

    private LinearLayout.LayoutParams params(int heightDp) {
        LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(-1, dp(heightDp));
        p.topMargin = dp(10);
        return p;
    }

    private Button button(String text, int background, int textColor, View.OnClickListener onClick) {
        Button b = new Button(this);
        b.setText(text);
        b.setTextColor(textColor);
        b.setTextSize(TypedValue.COMPLEX_UNIT_SP, 17);
        b.setTypeface(Typeface.DEFAULT_BOLD);
        b.setAllCaps(false);
        b.setPadding(dp(20), 0, dp(20), 0);
        b.setMinHeight(dp(52));
        GradientDrawable shape = new GradientDrawable();
        shape.setCornerRadius(dp(22));
        shape.setColor(background);
        b.setBackground(shape);
        b.setOnClickListener(onClick);
        return b;
    }
}
