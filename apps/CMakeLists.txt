cmake_minimum_required(VERSION 3.20)

add_executable(${PROJECT_NAME}_APP app.cpp)
target_link_libraries(${PROJECT_NAME}_APP ${PROJECT_NAME}::${PROJECT_NAME})

add_custom_command(
        TARGET ${PROJECT_NAME}_APP POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_SOURCE_DIR}/cpu/opcodes/opcodes.json
        $<TARGET_FILE_DIR:${PROJECT_NAME}_APP>)
