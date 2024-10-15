#pragma once  // Evita que el archivo se incluya varias veces durante la compilación.
#include "Prerequisites.h"  // Incluye dependencias necesarias, como iostream.

/**
 * @brief Clase que representa un vector en 4 dimensiones (4D).
 *
 * La clase Vector4 permite realizar operaciones comunes de álgebra vectorial
 * en cuatro dimensiones, útiles en computación gráfica para manejar coordenadas
 * homogéneas y transformaciones 3D. Las operaciones incluyen suma, resta,
 * multiplicación por escalar, cálculo de magnitud, normalización y acceso
 * directo a los datos.
 */
class Vector4 {
public:
    float x, y, z, w;  // Componentes del vector en los ejes X, Y, Z y W.

    /**
     * @brief Constructor por defecto.
     *
     * Inicializa las componentes del vector en (0, 0, 0, 0).
     */
    Vector4() : x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}

    /**
     * @brief Constructor parametrizado.
     *
     * Inicializa las componentes del vector con los valores proporcionados.
     *
     * @param x Valor para la componente X.
     * @param y Valor para la componente Y.
     * @param z Valor para la componente Z.
     * @param w Valor para la componente W.
     */
    Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

    /**
     * @brief Sobrecarga del operador + (suma de vectores).
     *
     * Suma las componentes de dos vectores y devuelve un nuevo vector
     * con los resultados.
     *
     * @param other El vector a sumar.
     * @return Vector4 El vector resultante de la suma.
     */
    Vector4 operator+(const Vector4& other) const {
        return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
    }

    /**
     * @brief Sobrecarga del operador - (resta de vectores).
     *
     * Resta las componentes de dos vectores y devuelve un nuevo vector
     * con los resultados.
     *
     * @param other El vector a restar.
     * @return Vector4 El vector resultante de la resta.
     */
    Vector4 operator-(const Vector4& other) const {
        return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
    }

    /**
     * @brief Sobrecarga del operador * (multiplicación por un escalar).
     *
     * Multiplica cada componente del vector por un escalar y devuelve
     * un nuevo vector con los resultados.
     *
     * @param scalar El escalar por el cual se multiplicará el vector.
     * @return Vector4 El vector resultante de la multiplicación.
     */
    Vector4 operator*(float scalar) const {
        return Vector4(x * scalar, y * scalar, z * scalar, w * scalar);
    }

    /**
     * @brief Calcula la magnitud del vector.
     *
     * La magnitud es la longitud del vector y se calcula como la raíz
     * cuadrada de la suma de los cuadrados de sus componentes:
     * ?(x² + y² + z² + w²).
     *
     * @return float La magnitud del vector.
     */
    float magnitude() const {
        return std::sqrt(x * x + y * y + z * z + w * w);
    }

    /**
     * @brief Normaliza el vector.
     *
     * Devuelve un nuevo vector en la misma dirección, pero con magnitud 1.
     * Si la magnitud del vector es 0, devuelve un vector nulo (0, 0, 0, 0).
     *
     * @return Vector4 El vector normalizado.
     */
    Vector4 normalize() const {
        float mag = magnitude();
        if (mag == 0.0f) {
            return Vector4(0.0f, 0.0f, 0.0f, 0.0f);  // Devuelve un vector nulo si la magnitud es 0.
        }
        return *this * (1.0f / mag);  // Escala el vector para tener magnitud 1.
    }

    /**
     * @brief Accede a los datos del vector.
     *
     * Devuelve un puntero a las componentes del vector (x, y, z, w).
     *
     * @return const float* Puntero a las componentes del vector.
     */
    const float* data() const {
        return &x;
    }

    /**
     * @brief Imprime las componentes del vector en la consola.
     *
     * Muestra las componentes del vector en el formato "(x, y, z, w)".
     */
    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ", " << w << ")" << std::endl;
    }
};
