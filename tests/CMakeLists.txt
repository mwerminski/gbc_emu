cmake_minimum_required(VERSION 3.20)

find_package(GTest REQUIRED)
enable_testing()

add_executable(${PROJECT_NAME}_test_read_rom_file read_rom_file.cpp)
target_link_libraries(${PROJECT_NAME}_test_read_rom_file GTest::gtest GTest::gtest_main ${PROJECT_NAME})

gtest_add_tests(TARGET ${PROJECT_NAME}_test_read_rom_file)