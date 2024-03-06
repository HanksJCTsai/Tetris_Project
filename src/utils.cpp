#include "utils.h"

namespace ut {
    int fps() {
        // Getting now time for FPS for show on UI
        static auto startTime = std::chrono::steady_clock::now();
        auto endTime = startTime;
        // For Calculating Frame count for FPS
        static int frame_count = 0;
        static int fps = 0;
        endTime = std::chrono::steady_clock::now();
        frame_count++;

        if (endTime - startTime > 1s) {
            fps = frame_count++;
            frame_count = 0;
            startTime = endTime;
        }
        return fps;
    }

    std::string utf32_to_utf8(std::u32string str) {
        static std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> convert;
        return convert.to_bytes(str);
    }
}
