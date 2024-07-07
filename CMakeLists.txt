cmake_minimum_required(VERSION 3.15)
project(gbc_emu)

set(CMAKE_CXX_STANDARD 20)

find_package(nlohmann_json REQUIRED)
find_package(spdlog REQUIRED)
set(THIRD_PARTY_LIBS spdlog::spdlog nlohmann_json::nlohmann_json)

link_directories()
add_library(${PROJECT_NAME})
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE cpu/inc/register.h cpu/inc/opcodes.h video/window.h cpu/inc/data_types.h file_handler/cartridge.h video/screen_buffer.h memory/maps/map.h cpu/inc/flags.h memory/blocks/inc/ROM_bank_0.h memory/blocks/inc/ROM_bank_n.h memory/blocks/inc/video_RAM.h memory/blocks/inc/external_RAM.h memory/blocks/inc/working_RAM.h memory/blocks/inc/echo_RAM.h memory/blocks/inc/sprite_info.h memory/blocks/inc/input_output.h memory/blocks/inc/high_RAM.h memory/blocks/inc/memory_block.h memory/addresses/gb_mem_block_sizes.h cpu/src/data_types.cpp memory/maps/gb_map.h memory/maps/gb_map.cpp cpu/inc/CPU.h cpu/src/CPU.cpp file_handler/cartridge.cpp)
target_link_libraries(${PROJECT_NAME} ${THIRD_PARTY_LIBS})
add_subdirectory(tests)
add_subdirectory(apps)

#message($<TARGET_FILE_DIR:${PROJECT_NAME}>)

#install(TARGETS gbc_emu)

