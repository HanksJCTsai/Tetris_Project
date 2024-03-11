#pragma once
#include "define.h"

namespace gm
{
    //I-[5,5] JLOSTZ[3,3]
    //Definde Tetromino
    using Tetromino = std::vector<std::vector<int>>;
    extern Tetromino I, J, L, O, S, T, Z;

} // namespace gm