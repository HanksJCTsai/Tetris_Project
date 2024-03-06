cmake_minimum_required(VERSION 3.22)
project(tetris VERSION 1.0 DESCRIPTION "Tetris Project" LANGUAGES CXX)

#for c++ version 11.4.0
set(CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含頭文件目錄
aux_source_directory(include inc)
include_directories(${PROJECT_SOURCE_DIR}/${inc})

# 添加子目錄
add_subdirectory(src)
add_subdirectory(tests)

# aux_source_directory(src src)
# add_executable(tetris ${src})
