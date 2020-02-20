cmake_minimum_required(VERSION 3.15)
project(gbc_emu)

set(CMAKE_CXX_STANDARD 20)

add_executable(gbc_emu main.cpp memory/video_RAM.h memory/RAM.h cpu/register.h cpu/opcodes.h video/window.h cpu/data_types.h cpu/instruction.h file_handler/cartridge.h file_handler/cartridge_types/rom_only.h file_handler/cartridge_types/mbc_one.h file_handler/cartridge_types/mbc_two.h file_handler/cartridge_types/mbc_three.h file_handler/cartridge_types/mbc_five.h video/screen_buffer.h memory/ROM.h memory/map.h cpu/flag.h)