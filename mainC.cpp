//
// Created by Pizarman on 14/12/2023.
//
#include <stdio.h>

// estructura Estudiante
struct Estudiante {
    char *nombre;
    int edad;
    float promedio;
};

// funcion  mostrarEstudinte
void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

int main() {

    struct Estudiante est1 = {"Juan", 20, 5.5};

    mostrarEstudiante(est1);
}



