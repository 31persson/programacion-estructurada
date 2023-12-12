#include <iostream>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// Función para imprimir una estructura Estudiante por valor
void imprimirEstudiantePorValor(Estudiante estudiante) {
    std::cout << "Informacion del estudiante:\n";
    std::cout << "Nombre: " << estudiante.nombre << "\n";
    std::cout << "Edad: " << estudiante.edad << "\n";
    std::cout << "Promedio: " << estudiante.promedio << "\n";
}

int main() {
    // Creación de una instancia de la estructura Estudiante
    Estudiante estudiante1;
    estudiante1.nombre = "Juan Perez";
    estudiante1.edad = 20;
    estudiante1.promedio = 85.5;

    // Llamada a la función para imprimir la estructura por valor
    imprimirEstudiantePorValor(estudiante1);

    return 0;
}
