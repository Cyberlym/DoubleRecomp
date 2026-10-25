plugins {
    id("com.android.application")
}

android {
    // Namespace dos componentes Java da SDL3 (org.libsdl.app); as telas do app
    // (launcher, instalador, opcoes, logs) ficam em com.tgp482.scda.
    namespace = "org.libsdl.app"
    compileSdk = 35
    ndkVersion = "26.1.10909125"

    defaultConfig {
        applicationId = "com.tgp482.scda_port"
        minSdk = 24
        targetSdk = 35
        versionCode = 5
        versionName = "0.2.3"

        // Apenas ARM64.
        ndk {
            abiFilters += listOf("arm64-v8a")
        }

        externalNativeBuild {
            cmake {
                arguments += listOf(
                    "-DANDROID_STL=c++_static",
                    // O runtime compila em Release (-O2, sem -g) tambem no assembleDebug.
                    "-DCMAKE_BUILD_TYPE=Release",
                    // SDL3 compartilhada (libSDL3.so) empacotada junto do APK.
                    "-DSDL_SHARED=ON",
                    "-DSDL_STATIC=OFF",
                    // Sem APKs/jar de testes da SDL.
                    "-DSDL_ANDROID_JAR=OFF",
                    "-DSDL_TESTS=OFF",
                    "-DSDL_TEST_LIBRARY=OFF",
                    "-DSDL_EXAMPLES=OFF",
                    "-DSDL_DISABLE_INSTALL=ON",
                )
            }
        }
    }

    externalNativeBuild {
        cmake {
            path = file("src/main/cpp/CMakeLists.txt")
            version = "3.28.3"
        }
    }

    buildTypes {
        debug {
            // A .so sai de CMAKE_BUILD_TYPE=Release: nada de symtab de debug no pacote.
            isJniDebuggable = false
        }
        release {
            isMinifyEnabled = false
        }
    }

    // Keystore de debug do proprio projeto (credenciais padrao de debug Android).
    signingConfigs {
        getByName("debug") {
            storeFile = rootProject.file("debug.keystore")
            storePassword = "android"
            keyAlias = "androiddebugkey"
            keyPassword = "android"
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }

    // Gera artefatos com o nome scda_port (scda_port-debug.apk).
    base {
        archivesName = "scda_port"
    }

    lint {
        abortOnError = false
    }

    // Auditoria de conteudo: nada do jogo e nada de desenvolvimento entra no APK.
    packaging {
        resources {
            excludes += listOf(
                "**/*.xbe", "**/*.xex", "**/*.iso", "**/*.xiso",
                "**/*.cpp", "**/*.h", "**/*.hpp", "**/*.o", "**/*.a", "**/*.log",
                "**/*.keystore", "**/*.jks",
                "generated/**", "vendor/**", "third_party/**", "tools/**",
                "build/**", "dist/**", "META-INF/AL2.0", "META-INF/LGPL2.1",
            )
        }
        jniLibs {
            // AGP ja faz strip (llvm-strip) de cada .so no empacotamento.
            useLegacyPackaging = false
            // orfaos da cadeia shaderc (targets SHARED que o CMake de terceiros sempre define):
            // nada linka contra eles, o shaderc vai estatico dentro do libscda_port.so
            excludes += listOf(
                "**/libshaderc_shared.so",
                "**/libSPIRV-Tools-shared.so",
                "**/libglslang.so",
            )
        }
    }
}
