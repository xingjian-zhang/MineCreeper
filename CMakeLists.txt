cmake_minimum_required(VERSION 3.14)
project(MineSweeper)

set(CMAKE_CXX_STANDARD 14)

add_executable(MineSweeper main.cpp Minesweeper.cpp Minesweeper.h Tile.h)