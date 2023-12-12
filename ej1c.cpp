#include <iostream>
#include <cstring> // Para la función strcpy

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    // Creación de una instancia de la estructura Estudiante con new
    Estudiante *estudiante1 = new Estudiante;

    // Asignación de valores a los miembros de la estructura
    std::strcpy(estudiante1->nombre, "Ana Garcia");
    estudiante1->edad = 22;
    estudiante1->promedio = 90.0;

    // Acceso a los valores de la estructura
    std::cout << "\nInformacion del estudiante:\n";
    std::cout << "Nombre: " << estudiante1->nombre << "\n";
    std::cout << "Edad: " << estudiante1->edad << "\n";
    std::cout << "Promedio: " << estudiante1->promedio << "\n";

    // Liberar la memoria asignada con new
    delete estudiante1;

    return 0;
}
