# Patches the recompiled tables for ELF linkage: the generated definitions are plain const
# (internal linkage), while the runtime reads them through extern "C" declarations
# (cpu/x86_context.h). This adds the extern "C" to the top level definitions, then writes the
# copy the build compiles in place of the original.
if(NOT FUNC_MAPPING_IN OR NOT FUNC_MAPPING_OUT)
    message(FATAL_ERROR "patch_mapping.cmake needs FUNC_MAPPING_IN and FUNC_MAPPING_OUT")
endif()
file(READ "${FUNC_MAPPING_IN}" text)
string(REGEX REPLACE "(^|\n)const (uint32_t|X86FuncMapping)" "\\1extern \"C\" const \\2" text "${text}")
file(WRITE "${FUNC_MAPPING_OUT}" "${text}")
