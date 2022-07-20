cmake_minimum_required(VERSION 3.22)
project(OpenGL)

set(CMAKE_CXX_STANDARD 20)
add_library(glad include/glad/glad.h src/glad.c)
target_include_directories(glad PUBLIC include/)

add_executable(OpenGL main.cpp)