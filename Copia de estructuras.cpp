#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

Estudiante copiarEstudiante(const Estudiante& original) {
    Estudiante copia;
    copia.nombre = original.nombre;
    copia.edad = original.edad;
    copia.promedio = original.promedio;
    return copia;
}

int main() {
    Estudiante estudianteOriginal{"Juan", 20, 8.5};

    Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    std::cout << "Estudiante Original: " << estudianteOriginal.nombre << ", " << estudianteOriginal.edad << ", " << estudianteOriginal.promedio << std::endl;
    std::cout << "Estudiante Copia: " << estudianteCopia.nombre << ", " << estudianteCopia.edad << ", " << estudianteCopia.promedio << std::endl;

    return 0;
}
