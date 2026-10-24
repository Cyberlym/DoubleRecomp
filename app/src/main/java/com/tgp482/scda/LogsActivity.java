// The logs screen: the newest runtime log (logs/scda_NNN.log) with the boot
// stage beside it, the last 200 lines on screen, and the share button that
// hands those lines to any app the user picks (ACTION_SEND, plain text: no
// FileProvider and no storage permission needed).
package com.tgp482.scda;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Typeface;
import android.os.Bundle;
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
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

public class LogsActivity extends Activity {

    private static final int TAIL = 200;
    private String mTail = "";

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
        File dir = new File(getExternalFilesDir(null), "logs");
        File[] all = dir.listFiles();
        if (all == null) return null;
        File best = null;
        for (File f : all) {
            if (!f.isFile() || !f.getName().endsWith(".log")) continue;
            if (best == null || f.getName().compareTo(best.getName()) > 0) best = f;
        }
        return best;
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

        setContentView(root);
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
