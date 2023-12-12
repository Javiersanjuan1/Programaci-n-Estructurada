#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    Estudiante(const std::string& nombre, int edad, float promedio)
            : nombre(nombre), edad(edad), promedio(promedio) {}

    void imprimirEstudiante() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Promedio: " << promedio << std::endl;
    }

private:
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    std::vector<Estudiante> listaEstudiantes;

    listaEstudiantes.push_back(Estudiante("Juan", 20, 8.5));
    listaEstudiantes.push_back(Estudiante("Maria", 22, 9.0));
    listaEstudiantes.push_back(Estudiante("Carlos", 21, 8.0));

    for (const auto& estudiante : listaEstudiantes) {
        estudiante.imprimirEstudiante();
        std::cout << std::endl;
    }

    return 0;
}
