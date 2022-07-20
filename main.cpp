#include "glad.h"
#include "glfw3.h"

#include <iostream>
#include <optional>
#include "src/Bases.h"

int main() {

    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // On utilise la version 3.3 de OpenGL
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // On utilise les fonctions modernes

    GLFWwindow* fenetre = createWindow(800, 800, "OpenGL"); // On créer la fenêtre

    glfwMakeContextCurrent(fenetre); // On met la fentre

    gladLoadGL(); // On prépare GLAD pour les configs de la fenêtre
    glViewport(0,0, 800, 800); // On met le viewport

    addColor(0.0f, 0.148f, 0.255f, fenetre); // On met une couleur de fond, on clean et on ramène le buffer.

    while (!glfwWindowShouldClose(fenetre)) { // Tant que la fenêtre est ouverte.
        glfwPollEvents();
    }

    glfwDestroyWindow(fenetre);
    glfwTerminate();
    return 0;
}
