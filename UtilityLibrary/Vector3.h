#pragma once 
#include "Prerequisites.h"  // Incluye las dependencias necesarias.

/**
 * @brief Clase que representa un vector en 3 dimensiones (3D).
 *
 * La clase Vector3 permite realizar operaciones básicas de álgebra vectorial
 * en tres dimensiones, como suma, resta, multiplicación por un escalar,
 * cálculo de la magnitud, normalización y acceso a los datos internos.
 */
class Vector3 {
public:
    float x, y, z;  // Componentes del vector en los ejes X, Y y Z.

    /**
     * @brief Constructor por defecto.
     *
     * Inicializa las componentes del vector en (0, 0, 0).
     */
    Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

    /**
     * @brief Constructor parametrizado.
     *
     * Inicializa las componentes del vector con los valores proporcionados.
     *
     * @param x Valor para la componente X.
     * @param y Valor para la componente Y.
     * @param z Valor para la componente Z.
     */
    Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

    /**
     * @brief Sobrecarga del operador + (suma de vectores).
     *
     * Permite sumar dos vectores y devuelve un nuevo vector con la suma de
     * las componentes correspondientes.
     *
     * @param other El vector a sumar.
     * @return Vector3 El vector resultante de la suma.
     */
    Vector3 operator+(const Vector3& other) const {
        return Vector3(x + other.x, y + other.y, z + other.z);
    }

    /**
     * @brief Sobrecarga del operador - (resta de vectores).
     *
     * Permite restar dos vectores y devuelve un nuevo vector con la resta de
     * las componentes correspondientes.
     *
     * @param other El vector a restar.
     * @return Vector3 El vector resultante de la resta.
     */
    Vector3 operator-(const Vector3& other) const {
        return Vector3(x - other.x, y - other.y, z - other.z);
    }

    /**
     * @brief Sobrecarga del operador * (multiplicación por un escalar).
     *
     * Multiplica el vector por un escalar y devuelve un nuevo vector con
     * las componentes escaladas.
     *
     * @param scalar El escalar por el cual se multiplicará el vector.
     * @return Vector3 El vector resultante de la multiplicación.
     */
    Vector3 operator*(float scalar) const {
        return Vector3(x * scalar, y * scalar, z * scalar);
    }

    /**
     * @brief Calcula la magnitud del vector.
     *
     * La magnitud es la longitud del vector y se calcula como la raíz cuadrada
     * de la suma de los cuadrados de sus componentes: √(x² + y² + z²).
     *
     * @return float La magnitud del vector.
     */
    float magnitude() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    /**
     * @brief Normaliza el vector.
     *
     * Devuelve un nuevo vector en la misma dirección pero con magnitud 1.
     * Si la magnitud es 0, devuelve un vector nulo (0, 0, 0).
     *
     * @return Vector3 El vector normalizado.
     */
    Vector3 normalize() const {
        float mag = magnitude();
        if (mag == 0.0f) {
            return Vector3(0.0f, 0.0f, 0.0f);  // Si la magnitud es 0, devuelve un vector nulo.
        }
        return *this * (1.0f / mag);  // Escala el vector a magnitud 1.
    }

    /**
     * @brief Accede a los datos del vector.
     *
     * Devuelve un puntero a las componentes del vector (x, y, z).
     *
     * @return const float* Puntero a las componentes del vector.
     */
    const float* data() const {
        return &x;
    }

    /**
     * @brief Imprime las componentes del vector en la consola.
     *
     * Muestra las componentes en el formato "(x, y, z)".
     */
    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};
