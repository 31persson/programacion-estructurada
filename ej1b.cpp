#include <iostream>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    // Creación e instanciación de una variable de tipo Estudiante
    Estudiante estudiante1;

    // Asignación de valores a los miembros de la estructura
    estudiante1.nombre = "Juan Perez";
    estudiante1.edad = 20;
    estudiante1.promedio = 85.5;

    // Acceso a los valores de la estructura
    std::cout << "\nInformacion del estudiante:\n";
    std::cout << "Nombre: " << estudiante1.nombre << "\n";
    std::cout << "Edad: " << estudiante1.edad << "\n";
    std::cout << "Promedio: " << estudiante1.promedio << "\n";

    return 0;
}
