cmake_minimum_required(VERSION 3.20)

find_package(GTest REQUIRED)
add_executable(${PROJECT_NAME}_test_read_rom_file read_rom_file.cpp)
target_link_libraries(${PROJECT_NAME}_test_read_rom_file ${PROJECT_NAME}::${PROJECT_NAME} gtest::gtest)