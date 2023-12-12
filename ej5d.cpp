#include <iostream>
#include <vector>
#include <algorithm>

class Estudiante {
public:
    // Constructores
    Estudiante() = default;
    Estudiante(const std::string& nombre, int edad, float promedio)
            : nombre(nombre), edad(edad), promedio(promedio) {}

    // Métodos para obtener información
    void mostrarInformacion() const {
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Edad: " << edad << "\n";
        std::cout << "Promedio: " << promedio << "\n";
    }

    // Setter para cambiar el nombre
    void cambiarNombre(const std::string& nuevoNombre) {
        nombre = nuevoNombre;
    }

private:
    std::string nombre;
    int edad;
    float promedio;
};

class ListaEstudiantes {
public:
    // Método para agregar un estudiante a la lista
    void agregarEstudiante(const Estudiante& estudiante) {
        estudiantes.push_back(estudiante);
    }

    // Método para mostrar información de todos los estudiantes en la lista
    void mostrarTodos() const {
        if (estudiantes.empty()) {
            std::cout << "La lista de estudiantes está vacía.\n";
        } else {
            for (const auto& estudiante : estudiantes) {
                estudiante.mostrarInformacion();
                std::cout << "--------------\n";
            }
        }
    }

    // Método para eliminar un estudiante de la lista por nombre
    void eliminarEstudiantePorNombre(const std::string& nombre) {
        estudiantes.erase(std::remove_if(estudiantes.begin(), estudiantes.end(),
                                         [nombre](const Estudiante& estudiante) {
                                             return estudianteNombreIgual(estudiante, nombre);
                                         }),
                          estudiantes.end());
    }

private:
    std::vector<Estudiante> estudiantes;

    // Función auxiliar para comparar nombres de estudiantes
    static bool estudianteNombreIgual(const Estudiante& estudiante, const std::string& nombre) {
        return estudianteNombreIgual(estudiante, nombre);
    }
};

int main() {
    // Creación de instancias de la clase Estudiante y ListaEstudiantes
    Estudiante estudiante1("Juan Perez", 20, 85.5);
    Estudiante estudiante2("Ana Garcia", 22, 90.0);

    ListaEstudiantes lista;

    // Agregar estudiantes a la lista
    lista.agregarEstudiante(estudiante1);
    lista.agregarEstudiante(estudiante2);

    // Mostrar información de todos los estudiantes
    lista.mostrarTodos();

    // Cambiar el nombre de un estudiante
    estudiante1.cambiarNombre("Carlos Rodriguez");

    // Mostrar información actualizada
    lista.mostrarTodos();

    // Eliminar un estudiante por nombre
    lista.eliminarEstudiantePorNombre("Ana Garcia");

    // Mostrar información después de eliminar un estudiante
    lista.mostrarTodos();

    return 0;
}
