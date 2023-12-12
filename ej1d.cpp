#include <iostream>
#include <cstring> // Para la función strcpy

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    // Creación de un puntero a la estructura Estudiante
    Estudiante *pEstudiante = new Estudiante;

    // Inicialización de la estructura a través del puntero
    std::strcpy(pEstudiante->nombre, "Juan Perez");
    pEstudiante->edad = 20;
    pEstudiante->promedio = 85.5;

    // Acceso a los valores de la estructura a través del puntero
    std::cout << "\nInformacion del estudiante:\n";
    std::cout << "Nombre: " << pEstudiante->nombre << "\n";
    std::cout << "Edad: " << pEstudiante->edad << "\n";
    std::cout << "Promedio: " << pEstudiante->promedio << "\n";

    // Liberar la memoria asignada con new
    delete pEstudiante;

    return 0;
}
