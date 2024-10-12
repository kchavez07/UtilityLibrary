#include "Vector2.h"

int main() {
    Vector2 v1(3.0f, 4.0f);  // Crear un vector con valores iniciales.
    Vector2 v2;  // Crear un vector vacío.

    // Realizar algunas operaciones con los vectores.
    Vector2 v3 = v1 + Vector2(1.0f, 2.0f);  // Sumar dos vectores.
    Vector2 v4 = v1 - Vector2(0.5f, 0.5f);  // Restar dos vectores.
    Vector2 v5 = v1 * 2.0f;  // Multiplicar el vector por un escalar.
    float mag = v1.magnitude();  // Calcular la magnitud del vector.
    Vector2 v6 = v1.normalize();  // Normalizar el vector.
    const float* data = v1.data();  // Obtener los datos del vector.

    // Imprimir los resultados.
    v3.print();
    v4.print();
    v5.print();
    std::cout << "Magnitude of v1: " << mag << std::endl;
    v6.print();
    std::cout << "Data of v1: (" << data[0] << ", " << data[1] << ")" << std::endl;

    return 0;
}
