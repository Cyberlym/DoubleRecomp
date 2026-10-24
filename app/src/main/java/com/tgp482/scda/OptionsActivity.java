// The options screen: only settings the Android runtime really consumes, read
// from and written to the scda.toml the runtime loads at boot (app/settings.cpp).
// Anything the Android build does not implement (MSAA, SMAO, SMAA, HDR, tone
// mapping, shader model, ambient occlusion, monitor/resolution) stays out on
// purpose. Everything applies on the next game start.
package com.tgp482.scda;

import android.app.Activity;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.util.TypedValue;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.CompoundButton;
import android.widget.LinearLayout;
import android.widget.SeekBar;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Switch;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class OptionsActivity extends Activity {

    // one entry per setting the Android runtime consumes; the toml key, its label
    private static final String KEY_RENDER = "render_percent";
    private static final String KEY_FPS_CAP = "fps_cap";
    private static final String KEY_VSYNC = "vsync";
    private static final String KEY_ANISO = "anisotropic_filtering";
    private static final String KEY_SHADOW = "shadow_resolution";
    private static final String KEY_FOV = "fov";
    private static final String KEY_BRIGHT = "brightness";
    private static final String KEY_CONTRAST = "contrast";
    private static final String KEY_FMV = "fmv_scale";
    private static final String KEY_SKIP_INTROS = "skip_intros";
    private static final String KEY_FPS_COUNTER = "fps_counter";
    private static final String KEY_PAUSE_FOCUS = "pause_on_focus_loss";
    private static final String KEY_LANGUAGE = "language";
    private static final String KEY_AUDIO = "audio_output";

    private File mToml;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Window w = getWindow();
        w.addFlags(WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS);
        w.setStatusBarColor(0xFF0E1118);
        w.setNavigationBarColor(0xFF0E1118);
        mToml = new File(getExternalFilesDir(null), "scda.toml");
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

    // ---- toml, the lines the runtime parses (app/settings.cpp) ----

    private final Map<String, String> mValues = new LinkedHashMap<>();

    private void load() {
        mValues.clear();
        mValues.put(KEY_RENDER, "100");
        mValues.put(KEY_FPS_CAP, "60");
        mValues.put(KEY_VSYNC, "true");
        mValues.put(KEY_ANISO, "0");
        mValues.put(KEY_SHADOW, "512");
        mValues.put(KEY_FOV, "75");
        mValues.put(KEY_BRIGHT, "50");
        mValues.put(KEY_CONTRAST, "50");
        mValues.put(KEY_FMV, "0");
        mValues.put(KEY_SKIP_INTROS, "false");
        mValues.put(KEY_FPS_COUNTER, "false");
        mValues.put(KEY_PAUSE_FOCUS, "true");
        mValues.put(KEY_LANGUAGE, "\"auto\"");
        mValues.put(KEY_AUDIO, "0");
        if (!mToml.isFile()) return;
        try (FileInputStream in = new FileInputStream(mToml)) {
            byte[] all = new byte[(int) mToml.length()];
            int got = 0;
            while (got < all.length) got += in.read(all, got, all.length - got);
            String[] lines = new String(all, StandardCharsets.UTF_8).split("\n");
            for (String line : lines) {
                String t = line.trim();
                if (t.startsWith("[")) break;  // the sub-tables are not ours
                int eq = t.indexOf('=');
                if (eq <= 0) continue;
                String key = t.substring(0, eq).trim();
                String value = t.substring(eq + 1).trim();
                if (mValues.containsKey(key)) mValues.put(key, value);
            }
        } catch (Exception e) {
        }
    }

    // the root keys keep their lines (or gain one before the first sub-table); everything else stays
    private void save() {
        List<String> out = new ArrayList<>();
        List<String> tail = new ArrayList<>();
        boolean inTable = false;
        if (mToml.isFile()) {
            try (FileInputStream in = new FileInputStream(mToml)) {
                byte[] all = new byte[(int) mToml.length()];
                int got = 0;
                while (got < all.length) got += in.read(all, got, all.length - got);
                for (String line : new String(all, StandardCharsets.UTF_8).split("\n", -1)) {
                    if (line.trim().startsWith("[")) inTable = true;
                    String t = line.trim();
                    boolean ours = false;
                    if (!inTable && t.contains("=")) {
                        String key = t.substring(0, t.indexOf('=')).trim();
                        if (mValues.containsKey(key)) {
                            out.add(key + " = " + mValues.get(key));
                            ours = true;
                        }
                    }
                    if (!ours) (inTable ? tail : out).add(line);
                }
            } catch (Exception e) {
            }
        }
        if (out.isEmpty() || !out.get(out.size() - 1).isEmpty()) out.add("");
        for (Map.Entry<String, String> e : mValues.entrySet()) {
            boolean found = false;
            for (String line : out)
                if (line.trim().startsWith(e.getKey() + " ") || line.trim().startsWith(e.getKey() + "=")) found = true;
            if (!found) out.add(out.size() - 1, e.getKey() + " = " + e.getValue());
        }
        try (FileOutputStream f = new FileOutputStream(mToml)) {
            StringBuilder text = new StringBuilder();
            for (String line : out) text.append(line).append('\n');
            for (String line : tail) text.append(line).append('\n');
            f.write(text.toString().getBytes(StandardCharsets.UTF_8));
        } catch (Exception e) {
        }
    }

    // ---- the view ----

    private int dp(int v) {
        return (int) TypedValue.applyDimension(TypedValue.COMPLEX_UNIT_DIP, v, getResources().getDisplayMetrics());
    }

    private LinearLayout row(String label, String hint) {
        LinearLayout l = new LinearLayout(this);
        l.setOrientation(LinearLayout.VERTICAL);
        TextView t = new TextView(this);
        t.setText(label);
        t.setTextColor(0xFFECF0F4);
        t.setTextSize(TypedValue.COMPLEX_UNIT_SP, 16);
        l.addView(t, new LinearLayout.LayoutParams(-1, -2));
        if (hint != null) {
            TextView h = new TextView(this);
            h.setText(hint);
            h.setTextColor(0xFF7E8899);
            h.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
            l.addView(h, new LinearLayout.LayoutParams(-1, -2));
        }
        return l;
    }

    private LinearLayout card(LinearLayout root) {
        LinearLayout card = new LinearLayout(this);
        card.setOrientation(LinearLayout.VERTICAL);
        card.setPadding(dp(18), dp(14), dp(18), dp(14));
        GradientDrawable shape = new GradientDrawable();
        shape.setCornerRadius(dp(18));
        shape.setColor(0xFF171C26);
        card.setBackground(shape);
        root.addView(card, new LinearLayout.LayoutParams(-1, -2, 1f));
        return card;
    }

    private void buildUi() {
        load();
        ScrollView scroll = new ScrollView(this);
        scroll.setFillViewport(true);
        scroll.setBackgroundColor(0xFF0E1118);
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setPadding(dp(24), dp(20), dp(24), dp(24));
        scroll.addView(root);
        setContentView(scroll);

        TextView title = new TextView(this);
        title.setText("Opções");
        title.setTextColor(0xFFECF0F4);
        title.setTypeface(Typeface.DEFAULT_BOLD);
        title.setTextSize(TypedValue.COMPLEX_UNIT_SP, 24);
        root.addView(title, new LinearLayout.LayoutParams(-1, -2));
        TextView note = new TextView(this);
        note.setText("Aplicado na próxima partida. Gravado em scda.toml, como o runtime lê.");
        note.setTextColor(0xFF7E8899);
        note.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        note.setPadding(0, dp(4), 0, dp(12));
        root.addView(note, new LinearLayout.LayoutParams(-1, -2));

        // graphics
        LinearLayout card = card(root);
        slider(card, "Escala de resolução", KEY_RENDER, 20, 200, 5, "%");
        listRow(card, "Limite de FPS", KEY_FPS_CAP, new String[][]{{"30", "30"}, {"60", "60"}, {"75", "75"},
                {"90", "90"}, {"120", "120"}, {"144", "144"}, {"165", "165"}, {"240", "240"}, {"360", "360"},
                {"1", "TAXA DA TELA"}, {"0", "SEM LIMITE"}},
                "O jogo original roda a 30 FPS; acima disso a física pode variar.");
        toggle(card, "VSync", KEY_VSYNC);
        listRow(card, "Filtro anisotrópico", KEY_ANISO, new String[][]{{"0", "PADRÃO"}, {"2", "2x"},
                {"4", "4x"}, {"8", "8x"}, {"16", "16x"}}, null);
        listRow(card, "Resolução de sombras", KEY_SHADOW, new String[][]{{"0", "AUTO"}, {"512", "512 (PADRÃO)"},
                {"1024", "1024"}, {"2048", "2048"}, {"4096", "4096"}, {"8192", "8192"}}, null);

        // picture
        card = card(root);
        slider(card, "Campo de visão", KEY_FOV, 45, 140, 1, "°");
        slider(card, "Brilho", KEY_BRIGHT, 0, 100, 1, "");
        slider(card, "Contraste", KEY_CONTRAST, 0, 100, 1, "");
        listRow(card, "Escala dos vídeos", KEY_FMV, new String[][]{{"0", "PREENCHER"}, {"1", "4:3"}}, null);

        // general
        card = card(root);
        toggle(card, "Pular introduções", KEY_SKIP_INTROS);
        toggle(card, "Contador de FPS", KEY_FPS_COUNTER);
        toggle(card, "Pausar ao perder foco", KEY_PAUSE_FOCUS);
        listRow(card, "Idioma", KEY_LANGUAGE, new String[][]{{"\"auto\"", "AUTOMÁTICO"}, {"\"int\"", "INGLÊS"},
                {"\"fra\"", "FRANCÊS"}, {"\"deu\"", "ALEMÃO"}, {"\"ita\"", "ITALIANO"}, {"\"esp\"", "ESPANHOL"}},
                "Aplicado no próximo boot.");
        listRow(card, "Saída de áudio", KEY_AUDIO, new String[][]{{"0", "AUTOMÁTICO"}, {"1", "ESTÉREO"},
                {"2", "SURROUND 5.1"}, {"3", "MONO"}}, null);

        Button defaults = new Button(this);
        defaults.setText("RESTAURAR PADRÕES");
        defaults.setTextColor(0xFFF2B8B8);
        defaults.setAllCaps(false);
        GradientDrawable shape = new GradientDrawable();
        shape.setCornerRadius(dp(22));
        shape.setColor(0xFF3A2326);
        defaults.setBackground(shape);
        defaults.setOnClickListener(v -> {
            load();
            save();
            buildUi();
        });
        LinearLayout.LayoutParams p = new LinearLayout.LayoutParams(-1, dp(54));
        p.topMargin = dp(16);
        root.addView(defaults, p);
    }

    private void toggle(LinearLayout parent, String label, String key) {
        LinearLayout l = row(label, null);
        Switch sw = new Switch(this);
        sw.setChecked(mValues.get(key).equals("true"));
        sw.setOnCheckedChangeListener((CompoundButton b, boolean on) -> {
            mValues.put(key, on ? "true" : "false");
            save();
        });
        LinearLayout line = new LinearLayout(this);
        line.setOrientation(LinearLayout.HORIZONTAL);
        line.setGravity(android.view.Gravity.CENTER_VERTICAL);
        line.addView(l, new LinearLayout.LayoutParams(0, -2, 1f));
        line.addView(sw, new LinearLayout.LayoutParams(-2, -2));
        parent.addView(line, new LinearLayout.LayoutParams(-1, -2));
    }

    private void slider(LinearLayout parent, String label, String key, int min, int max, int step,
                        String suffix) {
        LinearLayout l = row(label, null);
        TextView value = new TextView(this);
        value.setTextColor(0xFF9FB6C8);
        value.setTextSize(TypedValue.COMPLEX_UNIT_SP, 14);
        SeekBar seek = new SeekBar(this);
        int current = Integer.parseInt(mValues.get(key));
        seek.setMax((max - min) / step);
        seek.setProgress((current - min) / step);
        value.setText(current + suffix);
        seek.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar s, int v, boolean fromUser) {
                int val = min + v * step;
                value.setText(val + suffix);
                mValues.put(key, String.valueOf(val));
            }

            @Override
            public void onStartTrackingTouch(SeekBar s) {
            }

            @Override
            public void onStopTrackingTouch(SeekBar s) {
                save();
            }
        });
        LinearLayout line = new LinearLayout(this);
        line.setOrientation(LinearLayout.HORIZONTAL);
        line.setGravity(android.view.Gravity.CENTER_VERTICAL);
        line.addView(l, new LinearLayout.LayoutParams(0, -2, 1f));
        line.addView(value, new LinearLayout.LayoutParams(-2, -2));
        parent.addView(line, new LinearLayout.LayoutParams(-1, -2));
        parent.addView(seek, new LinearLayout.LayoutParams(-1, -2));
    }

    private void listRow(LinearLayout parent, String label, String key, String[][] choices, String hint) {
        LinearLayout l = row(label, hint);
        String current = mValues.get(key);
        int at = 0;
        for (int i = 0; i < choices.length; i++)
            if (choices[i][0].equals(current)) at = i;
        Button value = new Button(this);
        value.setText(choices[at][1]);
        value.setTextColor(0xFFECF0F4);
        value.setTextSize(TypedValue.COMPLEX_UNIT_SP, 14);
        value.setAllCaps(false);
        value.setPadding(dp(14), 0, dp(14), 0);
        GradientDrawable shape = new GradientDrawable();
        shape.setCornerRadius(dp(16));
        shape.setColor(0xFF232A38);
        value.setBackground(shape);
        final int[] index = {at};
        value.setOnClickListener(v -> {
            index[0] = (index[0] + 1) % choices.length;
            mValues.put(key, choices[index[0]][0]);
            value.setText(choices[index[0]][1]);
            save();
        });
        LinearLayout line = new LinearLayout(this);
        line.setOrientation(LinearLayout.HORIZONTAL);
        line.setGravity(android.view.Gravity.CENTER_VERTICAL);
        line.addView(l, new LinearLayout.LayoutParams(0, -2, 1f));
        line.addView(value, new LinearLayout.LayoutParams(-2, -2));
        parent.addView(line, new LinearLayout.LayoutParams(-1, -2));
    }
}
