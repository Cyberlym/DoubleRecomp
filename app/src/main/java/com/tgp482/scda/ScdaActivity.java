// ScdaActivity - the one Java class of the project.
//
// The SDL3 integration uses org.libsdl.app's SDLActivity: it loads the libraries below and calls
// SDL_main() (from SDL3/SDL_main.h in main.cpp) through dlopen+dlsym.
//
// This class also brings the user's disc image in: the Android file picker hands a content:// URI the
// runtime cannot open directly, so importIso copies it into the app's game folder as a stream, with the
// progress on a file the shell reads and a cancel flag it sets.

package com.tgp482.scda;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

import android.content.ContentResolver;
import android.net.Uri;
import android.os.ParcelFileDescriptor;

import org.libsdl.app.SDLActivity;

public class ScdaActivity extends SDLActivity {
    @Override
    protected String[] getLibraries() {
        return new String[] {
            "SDL3",       // libSDL3.so (built from third_party/SDL)
            "scda_port"   // libscda_port.so (app/src/main/cpp)
        };
    }

    // Copies the picked disc image into destDir, streaming, never the whole ISO in memory.
    // Returns null on success, a message on failure. Progress lands in destDir/import.progress as
    // "copied total", and a non-empty destDir/import.cancel stops the copy at the next chunk.
    public static String importIso(String contentUri, String destDir) {
        try {
            ContentResolver resolver = mSingleton.getContentResolver();
            Uri uri = Uri.parse(contentUri);
            ParcelFileDescriptor pfd = resolver.openFileDescriptor(uri, "r");
            if (pfd == null) return "the file could not be opened";
            long total = pfd.getStatSize();
            InputStream in = resolver.openInputStream(uri);
            if (in == null) {
                pfd.close();
                return "the file could not be opened";
            }
            File dir = new File(destDir);
            if (!dir.exists()) dir.mkdirs();
            File out = new File(dir, "importing.iso");
            File progress = new File(dir, "import.progress");
            File cancel = new File(dir, "import.cancel");
            cancel.delete();

            OutputStream fout = new FileOutputStream(out);
            byte[] buffer = new byte[4 << 20];  // 4 MiB a chunk
            long copied = 0;
            String error = null;
            try {
                int n;
                while ((n = in.read(buffer)) > 0) {
                    fout.write(buffer, 0, n);
                    copied += n;
                    if (copied % (64 << 20) < (4 << 20)) {  // about every 64 MiB
                        try (FileWriter2 w = new FileWriter2(progress)) {
                            w.write(copied + " " + total);
                        }
                        if (cancel.exists()) {
                            error = "cancelled";
                            break;
                        }
                    }
                }
            } catch (Exception e) {
                error = "the copy failed: " + e.getMessage();
            }
            fout.flush();
            fout.close();
            in.close();
            pfd.close();
            progress.delete();

            if (error != null) {
                out.delete();
                return error;
            }
            if (copied < 4 << 20) {
                out.delete();
                return "the file is too small to be a disc image";
            }
            // a whole copy: it becomes the game folder's image, named for the run that brought it
            File finalIso = new File(dir, "game.iso");
            if (finalIso.exists()) finalIso.delete();
            if (!out.renameTo(finalIso)) {
                return "the image could not be moved into place";
            }
            return null;
        } catch (Exception e) {
            return "the import failed: " + e.getMessage();
        }
    }

    // a tiny writer so the progress file stays one line
    private static final class FileWriter2 implements AutoCloseable {
        private final java.io.Writer w;
        FileWriter2(File f) throws Exception {
            w = new java.io.OutputStreamWriter(new FileOutputStream(f, false), "UTF-8");
        }
        void write(String s) throws Exception { w.write(s); }
        @Override public void close() throws Exception { w.close(); }
    }
}
