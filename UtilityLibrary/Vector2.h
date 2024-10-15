#pragma once
#include "Prerequisites.h"  // Incluye las dependencias necesarias.

/**
 * @brief Clase que representa un vector 2D.
 *
 * La clase Vector2 permite realizar operaciones básicas de álgebra vectorial
 * en dos dimensiones, como suma, resta, multiplicación por un escalar,
 * cálculo de magnitud, normalización y acceso a sus datos internos.
 */
class Vector2 {
public:
    float x, y;  // Componentes del vector en el eje X y Y.

    /**
     * @brief Constructor por defecto.
     *
     * Inicializa las componentes del vector en (0, 0).
     */
    Vector2() : x(0.0f), y(0.0f) {}

    /**
     * @brief Constructor parametrizado.
     *
     * Inicializa las componentes del vector con los valores proporcionados.
     *
     * @param x Valor para la componente X.
     * @param y Valor para la componente Y.
     */
    Vector2(float x, float y) : x(x), y(y) {}

    /**
     * @brief Sobrecarga del operador + (suma de vectores).
     *
     * Permite sumar dos vectores, devolviendo un nuevo vector con la suma
     * de las componentes correspondientes.
     *
     * @param other El vector a sumar.
     * @return Vector2 Resultado de la suma.
     */
    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    /**
     * @brief Sobrecarga del operador - (resta de vectores).
     *
     * Permite restar dos vectores, devolviendo un nuevo vector con la resta
     * de las componentes correspondientes.
     *
     * @param other El vector a restar.
     * @return Vector2 Resultado de la resta.
     */
    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    /**
     * @brief Sobrecarga del operador * (multiplicación por un escalar).
     *
     * Permite multiplicar el vector por un número escalar, devolviendo
     * un nuevo vector con las componentes multiplicadas por dicho escalar.
     *
     * @param scalar El escalar por el que se multiplicará el vector.
     * @return Vector2 Resultado de la multiplicación.
     */
    Vector2 operator*(float scalar) const {
        return Vector2(x * scalar, y * scalar);
    }

    /**
     * @brief Calcula la magnitud del vector.
     *
     * La magnitud se calcula como la raíz cuadrada de la suma de los
     * cuadrados de sus componentes: √(x² + y²).
     *
     * @return float La magnitud del vector.
     */
    float magnitude() const {
        return std::sqrt(x * x + y * y);
    }

    /**
     * @brief Normaliza el vector.
     *
     * Devuelve un nuevo vector en la misma dirección que el original,
     * pero con magnitud 1. Si la magnitud del vector es 0, devuelve
     * un vector nulo (0, 0).
     *
     * @return Vector2 El vector normalizado.
     */
    Vector2 normalize() const {
        float mag = magnitude();
        if (mag == 0.0f) {
            return Vector2(0.0f, 0.0f);  // Si la magnitud es 0, devuelve un vector nulo.
        }
        return *this * (1.0f / mag);  // Devuelve el vector escalado a magnitud 1.
    }

    /**
     * @brief Accede a los datos del vector.
     *
     * Devuelve un puntero a las componentes del vector (x, y).
     *
     * @return const float* Puntero a las componentes del vector.
     */
    const float* data() const {
        return &x;
    }

    /**
     * @brief Imprime el vector en la consola.
     *
     * Muestra las componentes del vector en formato "(x, y)".
     */
    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};
