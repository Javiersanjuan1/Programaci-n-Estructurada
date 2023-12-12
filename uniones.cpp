#include <iostream>
#include <string>

union MiUnion {
    int entero;
    float flotante;
    std::string* cadena;  // Usar un puntero para la cadena
};

int main() {
    MiUnion miVariable;

    miVariable.entero = 42;
    std::cout << "Valor entero: " << miVariable.entero << std::endl;

    miVariable.flotante = 3.14f;
    std::cout << "Valor flotante: " << miVariable.flotante << std::endl;

    // Asignar una cadena de caracteres usando un punte
    miVariable.cadena = new std::string("Hola, mundo!");
    std::cout << "Valor cadena: " << *(miVariable.cadena) << std::endl;

    // Liberar la m
    delete miVariable.cadena;

    return 0;
}
