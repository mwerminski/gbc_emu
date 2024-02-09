cmake_minimum_required(VERSION 3.20)

add_executable(${PROJECT_NAME}_APP app.cpp)
target_link_libraries(${PROJECT_NAME}_APP ${PROJECT_NAME}::${PROJECT_NAME})