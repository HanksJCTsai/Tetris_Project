#include "game.h"
#include "define.h"

namespace gm {
    bool running;
    int row, col;

    void quit() { running = false; }
    void init() {
        running = true;
        row = 2;
        col = 15;
    }

    void rotate() { row--; }
    void right() { col++; }
    void left() { col--; }
    void down() { row++;}
} // namespace gm
