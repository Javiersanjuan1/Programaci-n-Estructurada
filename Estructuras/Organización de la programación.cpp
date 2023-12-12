#include <iostream>
#include <vector>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

void mostrarEstudiante(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad
              << ", Promedio: " << estudiante.promedio << std::endl;
}

int main() {
    std::vector<Estudiante> listaEstudiantes;

    listaEstudiantes.push_back({"Juan", 20, 8.5});
    listaEstudiantes.push_back({"Maria", 22, 9.0});
    listaEstudiantes.push_back({"Carlos", 21, 8.0});

    std::cout << "Lista de Estudiantes:\n";
    for (const auto& estudiante : listaEstudiantes) {
        mostrarEstudiante(estudiante);
    }

    if (!listaEstudiantes.empty()) {
        listaEstudiantes.erase(listaEstudiantes.begin());
        std::cout << "\nEstudiante eliminado.\n";
    } else {
        std::cout << "\nLa lista de estudiantes está vacía.\n";
    }

    std::cout << "\nLista de Estudiantes después de eliminar:\n";
    for (const auto& estudiante : listaEstudiantes) {
        mostrarEstudiante(estudiante);
    }

    return 0;
}

