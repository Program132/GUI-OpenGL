cmake_minimum_required(VERSION 3.22)
project(OpenGL)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/import/glad/include/glad)
include_directories(${PROJECT_SOURCE_DIR}/import/glfw/include/GLFW)

link_directories(${PROJECT_SOURCE_DIR}/import/glfw/lib)

add_executable(OpenGL main.cpp
        ${PROJECT_SOURCE_DIR}/import/glad/src/glad.c
        src/Bases.h)

target_link_libraries(OpenGL glfw3 opengl32)