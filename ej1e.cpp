#include <iostream>
#include <vector>
#include <algorithm> // Para la función std::remove_if

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// Función para imprimir la información de un estudiante
void imprimirEstudiante(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad
              << ", Promedio: " << estudiante.promedio << "\n";
}

int main() {
    // Creación de una lista de estudiantes utilizando std::vector
    std::vector<Estudiante> listaEstudiantes;

    // Menú de la aplicación
    int opcion;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Agregar Estudiante\n";
        std::cout << "2. Ver Estudiantes\n";
        std::cout << "3. Eliminar Estudiante\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                // Agregar Estudiante
                Estudiante nuevoEstudiante;
                std::cout << "Ingrese el nombre del estudiante: ";
                std::cin >> nuevoEstudiante.nombre;
                std::cout << "Ingrese la edad del estudiante: ";
                std::cin >> nuevoEstudiante.edad;
                std::cout << "Ingrese el promedio del estudiante: ";
                std::cin >> nuevoEstudiante.promedio;

                listaEstudiantes.push_back(nuevoEstudiante);
                std::cout << "Estudiante agregado correctamente.\n";
                break;
            }
            case 2: {
                // Ver Estudiantes
                if (listaEstudiantes.empty()) {
                    std::cout << "La lista de estudiantes esta vacia.\n";
                } else {
                    std::cout << "\nLista de Estudiantes:\n";
                    for (const auto& estudiante : listaEstudiantes) {
                        imprimirEstudiante(estudiante);
                    }
                }
                break;
            }
            case 3: {
                // Eliminar Estudiante
                if (listaEstudiantes.empty()) {
                    std::cout << "La lista de estudiantes esta vacia.\n";
                } else {
                    std::string nombreEliminar;
                    std::cout << "Ingrese el nombre del estudiante a eliminar: ";
                    std::cin >> nombreEliminar;

                    auto it = std::remove_if(listaEstudiantes.begin(), listaEstudiantes.end(),
                                             [nombreEliminar](const Estudiante& estudiante) {
                                                 return estudiante.nombre == nombreEliminar;
                                             });

                    if (it != listaEstudiantes.end()) {
                        listaEstudiantes.erase(it, listaEstudiantes.end());
                        std::cout << "Estudiante eliminado correctamente.\n";
                    } else {
                        std::cout << "No se encontro un estudiante con ese nombre.\n";
                    }
                }
                break;
            }
            case 4: {
                // Salir
                std::cout << "Saliendo de la aplicacion.\n";
                break;
            }
            default:
                std::cout << "Opcion no valida. Intentelo de nuevo.\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}

