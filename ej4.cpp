#include <iostream>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// Crear un alias para la estructura Estudiante utilizando typedef
typedef Estudiante Alumno;

// Función para copiar un estudiante
Alumno copiarEstudiante(const Alumno& original) {
    Alumno copia;
    copia.nombre = original.nombre;
    copia.edad = original.edad;
    copia.promedio = original.promedio;
    return copia;
}

int main() {
    // Creación de una instancia de la estructura Estudiante (usando el alias Alumno)
    Alumno estudianteOriginal;
    estudianteOriginal.nombre = "Juan Perez";
    estudianteOriginal.edad = 20;
    estudianteOriginal.promedio = 85.5;

    // Llamada a la función para copiar el estudiante
    Alumno estudianteCopia = copiarEstudiante(estudianteOriginal);

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
