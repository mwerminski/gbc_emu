cmake_minimum_required(VERSION 3.15)
project(gbc_emu)

set(CMAKE_CXX_STANDARD 20)

add_executable(gbc_emu main.cpp cpu/inc/register.h cpu/inc/opcodes.h video/window.h cpu/inc/data_types.h cpu/inc/instruction.h file_handler/cartridge.h file_handler/cartridge_types/inc/rom_only.h file_handler/cartridge_types/inc/mbc_one.h file_handler/cartridge_types/inc/mbc_two.h file_handler/cartridge_types/inc/mbc_three.h file_handler/cartridge_types/inc/mbc_five.h video/screen_buffer.h memory/maps/map.h cpu/inc/flags.h memory/blocks/inc/ROM_bank_0.h memory/blocks/inc/ROM_bank_n.h memory/blocks/inc/video_RAM.h memory/blocks/inc/external_RAM.h memory/blocks/inc/working_RAM.h memory/blocks/inc/echo_RAM.h memory/blocks/inc/sprite_info.h memory/blocks/inc/input_output.h memory/blocks/inc/high_RAM.h memory/blocks/inc/memory_block.h memory/addresses/gb_mem_block_sizes.h cpu/src/data_types.cpp memory/maps/gb_map.h memory/maps/gb_map.cpp)