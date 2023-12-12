#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    Estudiante estudiante1;

    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    // Mostrar la información del estudiante
    std::cout << "Nombre: " << estudiante1.nombre << ", Edad: " << estudiante1.edad << ", Promedio: " << estudiante1.promedio << std::endl;

    return 0;
}
