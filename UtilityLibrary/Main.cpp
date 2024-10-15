#include "Prerequisites.h" // Encabezado con los requisitos previos.
#include "vector2.h"        // Incluye la definición y funcionalidades del vector 2D.
#include "vector3.h"        // Incluye la definición y funcionalidades del vector 3D.
#include "vector4.h"        // Incluye la definición y funcionalidades del vector 4D.

/**
 * @brief Prueba las funcionalidades de la clase Vector2.
 *
 * Se crean dos vectores 2D, se realizan operaciones básicas (suma, resta,
 * multiplicación por escalar), y se calcula la magnitud y normalización.
 */
void probarVector2() {
    std::cout << " PRUEBA VECTOR 2 " << std::endl;

    // Crear un vector 2D con valores iniciales y un vector vacío.
    Vector2 v1(3.0f, 4.0f);
    Vector2 v2;

    // Realizar operaciones básicas con los vectores.
    Vector2 v3 = v1 + Vector2(1.0f, 2.0f);  // Suma de vectores.
    Vector2 v4 = v1 - Vector2(0.5f, 0.5f);  // Resta de vectores.
    Vector2 v5 = v1 * 2.0f;                 // Multiplicación por un escalar.

    // Calcular la magnitud del vector.
    float magnitud = v1.magnitude();

    // Normalizar el vector (hacer que tenga magnitud 1).
    Vector2 v6 = v1.normalize();

    // Obtener los datos internos del vector (puntero a sus componentes).
    const float* datos = v1.data();

    // Imprimir los resultados de las operaciones.
    std::cout << "v3: "; v3.print();
    std::cout << "v4: "; v4.print();
    std::cout << "v5: "; v5.print();
    std::cout << "Magnitud de v1: " << magnitud << std::endl;
    std::cout << "v6 (normalizado): "; v6.print();
    std::cout << "Datos de v1: (" << datos[0] << ", " << datos[1] << ")" << std::endl;
}

/**
 * @brief Prueba las funcionalidades de la clase Vector3.
 *
 * Se crean dos vectores 3D, se realizan operaciones básicas (suma, resta,
 * multiplicación por escalar), y se calcula la magnitud y normalización.
 */
void probarVector3() {
    std::cout << "PRUEBA VECTOR 3 " << std::endl;

    // Crear un vector 3D con valores iniciales y un vector vacío.
    Vector3 v1(3.0f, 4.0f, 5.0f);
    Vector3 v2;

    // Realizar operaciones básicas con los vectores.
    Vector3 v3 = v1 + Vector3(1.0f, 2.0f, 3.0f);  // Suma de vectores.
    Vector3 v4 = v1 - Vector3(0.5f, 0.5f, 0.5f);  // Resta de vectores.
    Vector3 v5 = v1 * 2.0f;                       // Multiplicación por un escalar.

    // Calcular la magnitud del vector.
    float magnitud = v1.magnitude();

    // Normalizar el vector (hacer que tenga magnitud 1).
    Vector3 v6 = v1.normalize();

    // Obtener los datos internos del vector (puntero a sus componentes).
    const float* datos = v1.data();

    // Imprimir los resultados de las operaciones.
    std::cout << "v3: "; v3.print();
    std::cout << "v4: "; v4.print();
    std::cout << "v5: "; v5.print();
    std::cout << "Magnitud de v1: " << magnitud << std::endl;
    std::cout << "v6 (normalizado): "; v6.print();
    std::cout << "Datos de v1: (" << datos[0] << ", " << datos[1] << ", " << datos[2] << ")" << std::endl;
}

/**
 * @brief Prueba las funcionalidades de la clase Vector4.
 *
 * Se crean dos vectores 4D, se realizan operaciones básicas (suma, resta,
 * multiplicación por escalar), y se calcula la magnitud y normalización.
 */
void probarVector4() {
    std::cout << "PRUEBA VECTOR 4 " << std::endl;

    // Crear un vector 4D con valores iniciales y un vector vacío.
    Vector4 v1(1.0f, 2.0f, 3.0f, 4.0f);
    Vector4 v2;

    // Realizar operaciones básicas con los vectores.
    Vector4 v3 = v1 + Vector4(1.0f, 1.0f, 1.0f, 1.0f);  // Suma de vectores.
    Vector4 v4 = v1 - Vector4(0.5f, 0.5f, 0.5f, 0.5f);  // Resta de vectores.
    Vector4 v5 = v1 * 2.0f;                             // Multiplicación por un escalar.

    // Calcular la magnitud del vector.
    float magnitud = v1.magnitude();

    // Normalizar el vector (hacer que tenga magnitud 1).
    Vector4 v6 = v1.normalize();

    // Obtener los datos internos del vector (puntero a sus componentes).
    const float* datos = v1.data();

    // Imprimir los resultados de las operaciones.
    std::cout << "v3: "; v3.print();
    std::cout << "v4: "; v4.print();
    std::cout << "v5: "; v5.print();
    std::cout << "Magnitud de v1: " << magnitud << std::endl;
    std::cout << "v6 (normalizado): "; v6.print();
    std::cout << "Datos de v1: (" << datos[0] << ", " << datos[1] << ", " << datos[2] << ", " << datos[3] << ")" << std::endl;
}

/**
 * @brief Función principal del programa.
 *
 * Ejecuta las pruebas de las clases Vector2, Vector3 y Vector4.
 * Cada prueba muestra en consola los resultados de las operaciones realizadas.
 *
 * @return 0 Si la ejecución fue exitosa.
 */
int main() {
    // Ejecutar las pruebas para cada tipo de vector.
    probarVector2();
    std::cout << std::endl;  // Espacio entre pruebas.
    probarVector3();
    std::cout << std::endl;  // Espacio entre pruebas.
    probarVector4();

    return 0;
}
