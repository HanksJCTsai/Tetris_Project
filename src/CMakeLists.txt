cmake_minimum_required(VERSION 3.22)

# 指定生成目標
add_library(TETRIS_PROJECT_Libs game.cpp control.cpp draw.cpp terminal.cpp utils.cpp)  # 創建名為MyProjectLib的庫

# 創建執行檔
add_executable(tetris main.cpp)     

# 包含頭文件目錄
include_directories(${PROJECT_SOURCE_DIR}/include)

# 連結庫到執行檔
target_link_libraries(tetris PRIVATE TETRIS_PROJECT_Libs)  