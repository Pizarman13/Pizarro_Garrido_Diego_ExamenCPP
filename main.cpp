//
// Created by Pizarman on 14/12/2023.
//
#include <iostream>
#include <vector>
#include <algorithm>

// Creamos la estructura estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
};

// Creamos la clase mostrarEstudiante
void mostrarEstudiante(struct Estudiante estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

// Agregar Materia
void agregarMateria(Estudiante& estudiante, const std::string& nuevaMateria) {
    estudiante.materias.push_back(nuevaMateria);
}

// Mostrar materias
void mostrarMaterias(const Estudiante& estudiante) {
    std::cout << "Materias de " << estudiante.nombre << ":" << std::endl;
    for (const auto& materia : estudiante.materias) {
        std::cout << "- " << materia << std::endl;
    }
}

// Eliminar materia
void eliminarMateria(Estudiante& estudiante, const std::string& materiaEliminar) {
    auto it = std::find(estudiante.materias.begin(), estudiante.materias.end(), materiaEliminar);
    if (it != estudiante.materias.end()) {
        estudiante.materias.erase(it);
        std::cout << "Materia \"" << materiaEliminar << "\" eliminada para " << estudiante.nombre << std::endl;
    } else {
        std::cout << "La materia \"" << materiaEliminar << "\" no está en la lista de " << estudiante.nombre << std::endl;
    }
}

int main() {

    struct Estudiante est1 = {"Diego", 19, 7.5, {"Matematicas"}};

    mostrarMaterias(est1);

    // Agregar una materia
    agregarMateria(est1, "Historia");
    agregarMateria(est1, "Fisica");
    std::cout << "\nDespues de agregar Historia y Fisica:\n";
    mostrarMaterias(est1);

    // Eliminar una materia
    eliminarMateria(est1, "Fisica");
    std::cout << "\nDespues de eliminar Física:\n";
    mostrarMaterias(est1);

    mostrarEstudiante(est1);

    return 0;
}
