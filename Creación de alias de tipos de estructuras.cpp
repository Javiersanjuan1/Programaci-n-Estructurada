#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

typedef Estudiante MiEstudiante;

int main() {
    MiEstudiante estudiante1{"Juan", 20, 8.5};

    std::cout << "Nombre: " << estudiante1.nombre << ", Edad: " << estudiante1.edad << ", Promedio: " << estudiante1.promedio << std::endl;

    return 0;
}
