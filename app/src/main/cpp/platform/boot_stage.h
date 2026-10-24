#pragma once
// Boot progress marker for the launcher UI: the last stage the runtime reached,
// overwritten as far as the run got, so a crash or hang tells where it stopped.
// Stages in boot order: runtime_init, iso_open, xbe_loaded, vulkan_ready, game_entry,
// input_ready, audio_ready, first_frame_presented. A run that ends on its own
// marks run_clean.txt; a run that never got past a stage keeps the last one.
namespace stage {
void Record(const char* name);  // boot_stage.txt, overwritten
void Begin();                   // a run starts: runtime_init, the clean marker goes
void Clean();                    // the run ended on its own terms
}  // namespace stage
