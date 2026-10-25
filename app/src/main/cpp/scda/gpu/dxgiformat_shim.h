// DXGI_FORMAT shim: the values the runtime's host side names are the DXGI standard ones, which
// platform/dxgishim.h defines. Including this header forwards there, so the vertex format
// conversion and the Vulkan pipeline's format table always agree on the same numbers.
#pragma once
#include "../platform/dxgishim.h"
