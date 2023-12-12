#include <iostream>
#include <string>

// Definición de la unión Datos
union Datos {
    int entero;
    float flotante;
    std::string cadena;
};

int main() {
    // Creación de una variable de la unión Datos
    Datos miUnion;

    // Asignación de diferentes tipos de valores
    miUnion.entero = 42;
    std::cout << "Valor entero: " << miUnion.entero << "\n";

    miUnion.flotante = 3.14f;
    std::cout << "Valor flotante: " << miUnion.flotante << "\n";

    miUnion.cadena = "Hola, mundo!";
    std::cout << "Valor de cadena: " << miUnion.cadena << "\n";

    return 0;
}
