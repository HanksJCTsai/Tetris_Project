// #ifndef __UTILS_HEAD__
// #define __UTILS_HEAD__

// #endif

#pragma once
#include "define.h"

namespace ut {
    int fps();
    std::string utf32_to_utf8(std::u32string str);
    inline int blocktwocol(int b) { return (2 * b) - 1; };
} // namespace ut