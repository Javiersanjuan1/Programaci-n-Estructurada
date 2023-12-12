#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    Estudiante* estudiante2 = static_cast<Estudiante*>(malloc(sizeof(Estudiante)));

    if (estudiante2 != nullptr) {
        estudiante2->nombre = "Maria";
        estudiante2->edad = 22;
        estudiante2->promedio = 9.0;

        std::cout << "Nombre: " << estudiante2->nombre << ", Edad: " << estudiante2->edad << ", Promedio: " << estudiante2->promedio << std::endl;

        free(estudiante2);
    } else {
        std::cerr << "Error: Fallo en la asignación de memoria con malloc.\n";
    }

    return 0;
}
