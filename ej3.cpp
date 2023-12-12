#include <iostream>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// Función para copiar un estudiante
Estudiante copiarEstudiante(const Estudiante& original) {
    Estudiante copia;
    copia.nombre = original.nombre;
    copia.edad = original.edad;
    copia.promedio = original.promedio;
    return copia;
}

int main() {
    // Creación de una instancia de la estructura Estudiante
    Estudiante estudianteOriginal;
    estudianteOriginal.nombre = "Juan Perez";
    estudianteOriginal.edad = 20;
    estudianteOriginal.promedio = 85.5;

    // Llamada a la función para copiar el estudiante
    Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    // Mostrar información del estudiante original
    std::cout << "Informacion del estudiante original:\n";
    std::cout << "Nombre: " << estudianteOriginal.nombre << "\n";
    std::cout << "Edad: " << estudianteOriginal.edad << "\n";
    std::cout << "Promedio: " << estudianteOriginal.promedio << "\n";

    // Mostrar información del estudiante copiado
    std::cout << "\nInformacion del estudiante copiado:\n";
    std::cout << "Nombre: " << estudianteCopia.nombre << "\n";
    std::cout << "Edad: " << estudianteCopia.edad << "\n";
    std::cout << "Promedio: " << estudianteCopia.promedio << "\n";

    return 0;
}
