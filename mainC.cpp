//
// Created by Pizarman on 14/12/2023.
//
#include <stdio.h>
#include <cstring>

#define MAX_MATERIAS 10
#define MAX_LENGTH_MATERIA 50

// estructura Estudiante
struct Estudiante {
    char nombre[20];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][MAX_LENGTH_MATERIA];
    int numMaterias;
};

// funcion  mostrarEstudinte
void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

// Función para mostrar las materias en las que está inscrito el estudiante
void mostrarMaterias(const struct Estudiante* estudiante) {
    printf("Materias de %s:\n", estudiante->nombre);
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        printf("- %s\n", estudiante->materias[i]);
    }
}

// Función para agregar una materia al estudiante
void agregarMateria(struct Estudiante* estudiante, const char* nuevaMateria) {
    if (estudiante->numMaterias < MAX_MATERIAS) {
        strcpy(estudiante->materias[estudiante->numMaterias], nuevaMateria);
        estudiante->numMaterias++;
    } else {
        printf("No se pueden agregar más materias, límite alcanzado.\n");
    }
}

// Función para eliminar una materia del estudiante
void eliminarMateria(struct Estudiante* estudiante, const char* materiaEliminar) {
    int found = 0;
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        if (strcmp(estudiante->materias[i], materiaEliminar) == 0) {
            found = 1;
            for (int j = i; j < estudiante->numMaterias - 1; ++j) {
                strcpy(estudiante->materias[j], estudiante->materias[j + 1]);
            }
            estudiante->numMaterias--;
            break;
        }
    }
    if (!found) {
        printf("La materia %s no está en la lista.\n", materiaEliminar);
    }
}

int main() {

    struct Estudiante est1 = {"Juan", 20, 5.5, {"Fisica"}};

    mostrarEstudiante(est1);

    // Mostrar materias iniciales
    mostrarMaterias(&est1);

    // Agregar una materia
    agregarMateria(&est1, "Historia");
    printf("\nDespues de agregar Historia:\n");
    mostrarMaterias(&est1);

    // Eliminar una materia
    eliminarMateria(&est1, "Mates");
    printf("\nDespues de eliminar Mates:\n");
    mostrarMaterias(&est1);
}



