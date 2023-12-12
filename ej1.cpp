#include <iostream>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    // Declaración de una variable de tipo Estudiante
    Estudiante estudiante1;

    // Asignación de valores a la estructura
    std::cout << "Ingrese el nombre del estudiante: ";
    std::getline(std::cin, estudiante1.nombre);

    std::cout << "Ingrese la edad del estudiante: ";
    std::cin >> estudiante1.edad;

    std::cout << "Ingrese el promedio del estudiante: ";
    std::cin >> estudiante1.promedio;

    // Acceso a los valores de la estructura
    std::cout << "\nInformacion del estudiante:\n";
    std::cout << "Nombre: " << estudiante1.nombre << "\n";
    std::cout << "Edad: " << estudiante1.edad << "\n";
    std::cout << "Promedio: " << estudiante1.promedio << "\n";

    return 0;
}
