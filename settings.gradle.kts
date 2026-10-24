// SCDA Port - Etapa 1 (casca nativa de diagnostico Android)
// Integracao oficial SDL3 3.4.18 (org.libsdl.app.SDLActivity) + NDK/CMake.
pluginManagement {
    repositories {
        google()
        mavenCentral()
        gradlePluginPortal()
    }
}

dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.FAIL_ON_PROJECT_REPOS)
    repositories {
        google()
        mavenCentral()
    }
}

rootProject.name = "scda_port"
include(":app")
