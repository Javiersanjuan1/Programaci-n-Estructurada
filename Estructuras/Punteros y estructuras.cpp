#include <iostream>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    // Crear un puntero a una estructura Estudiante
    Estudiante* punteroEstudiante = new Estudiante;

    // Inicializar la estructura a través del puntero
    punteroEstudiante->nombre = "Carlos";
    punteroEstudiante->edad = 21;
    punteroEstudiante->promedio = 8.0;

    // Mostrar la información del estudiante a través del puntero
    std::cout << "Nombre: " << punteroEstudiante->nombre << ", Edad: " << punteroEstudiante->edad
              << ", Promedio: " << punteroEstudiante->promedio << std::endl;

    // Liberar la memoria asignada dinámicamente
    delete punteroEstudiante;

    return 0;
}
