cmake_minimum_required(VERSION 3.22)
project(tetris)

#for c++ version 11.4.0
set(CXX_STANDARD 20)

aux_source_directory(. src)
add_executable(tetris ${src})
