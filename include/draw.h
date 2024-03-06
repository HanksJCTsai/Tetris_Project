#pragma once
#include "define.h"
#include "terminal.h"
#include "utils.h"
/*
* ui: Layout
* dw: Draw                  gm: Game Logic                  ut: Utils
* tc: Terminal Control
*
*/

namespace dw
{
    void window(int top, int left, int width, int hight, std::string title);
} // namespace dw
