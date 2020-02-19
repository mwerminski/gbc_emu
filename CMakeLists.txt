cmake_minimum_required(VERSION 3.15)
project(gbc_emu)

set(CMAKE_CXX_STANDARD 20)

add_executable(gbc_emu main.cpp memory/video_RAM.h memory/RAM.h cpu/register.h cpu/opcodes.h video/window.h)