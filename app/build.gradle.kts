plugins {
    id("com.android.application")
}

android {
    // Namespace dos componentes Java da SDL3 (org.libsdl.app).
    namespace = "org.libsdl.app"
    compileSdk = 35
    ndkVersion = "26.1.10909125"

    defaultConfig {
        applicationId = "com.tgp482.scda_port"
        minSdk = 24
        targetSdk = 35
        versionCode = 1
        versionName = "0.1.0-stage1"

        // Etapa 1: apenas ARM64 (mesmo alvo do port futuro).
        ndk {
            abiFilters += listOf("arm64-v8a")
        }

        externalNativeBuild {
            cmake {
                arguments += listOf(
                    "-DANDROID_STL=c++_static",
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
}
