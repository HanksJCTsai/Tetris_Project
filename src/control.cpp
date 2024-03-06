#include "define.h"
#include "control.h"
#include "game.h"

namespace gm {
    char command;

    std::map<char, std::function<void()>> comm_func{
        {KEY_Q, command_quit}, {KEY_W, command_rotate}, {KEY_S, command_down},
        {KEY_A, command_left}, {KEY_D, command_right},
    };

    char getch() {
        char get;
        struct termios old, cur;
        tcgetattr(0, &cur);
        old = cur;
        cfmakeraw(&cur);
        tcsetattr(0, 0, &cur);
        get = getchar();
        tcsetattr(0, 0, &old);
        return get;
    }

    void key_event() {
        while (running) {
            command = getch();
            comm_func[command]();
        }
    }

    void start_listener() {
        std::thread t(key_event);
        t.detach();
    }

    void command_quit() { quit(); }

    void command_rotate() { rotate(); }

    void command_left() { left(); }

    void command_right() { right(); }

    void command_down() { down(); }
} // namespace gm