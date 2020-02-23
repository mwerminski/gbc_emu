cmake_minimum_required(VERSION 3.15)
project(gbc_emu)

set(CMAKE_CXX_STANDARD 20)

add_executable(gbc_emu main.cpp cpu/register.h cpu/opcodes.h video/window.h cpu/data_types.h cpu/instruction.h file_handler/cartridge.h file_handler/cartridge_types/rom_only.h file_handler/cartridge_types/mbc_one.h file_handler/cartridge_types/mbc_two.h file_handler/cartridge_types/mbc_three.h file_handler/cartridge_types/mbc_five.h video/screen_buffer.h memory/map.h cpu/flags.h memory/blocks/ROM_bank_0.h memory/blocks/ROM_bank_n.h memory/blocks/video_RAM.h memory/blocks/external_RAM.h memory/blocks/working_RAM.h memory/blocks/echo_RAM.h memory/blocks/sprite_info.h memory/blocks/input_output.h memory/blocks/high_RAM.h memory/blocks/memory_block.h memory/addresses/gb_mem_block_sizes.h)