#pragma once

#include "glad.h"
#include "glfw3.h"
#include <iostream>
#include <string>
#include <optional>

int noWindow(GLFWwindow *window) {
    if (!window) {
        std::cout << "Echec !" << std::endl;
        glfwTerminate();
        return -1;
    }
}

GLFWwindow * createWindow(int width, int height, const char *name) {
    GLFWwindow* window = glfwCreateWindow(width, height, name, NULL, NULL);
    noWindow(window);
    return window;
}

void addColor(float red, float green, float blue,GLFWwindow* window) {
    glClearColor(red, green, blue, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
}