//
// Created by Pizarman on 14/12/2023.
//
#include <iostream>

// Creamos la estructura estudiante
struct Estudiante {
    char *nombre;
    int edad;
    float promedio;
};

// Creamos la clase mostrarEstudiante
void mostrarEstudiante(struct Estudiante estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

int main() {

    struct Estudiante est1 = {"Diego", 19, 7.5};

    mostrarEstudiante(est1);

    return 0;
}
