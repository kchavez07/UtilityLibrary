#ifndef VECTOR2_H
#define VECTOR2_H
#include "Prerequisites.h"

// Clase Vector2 que representa un vector en 2D con coordenadas x e y.
class Vector2 {
public:
    float x, y;  // Coordenadas públicas del vector.

    // Constructor por defecto que inicializa x e y a 0.
    Vector2() : x(0), y(0) {}

    // Constructor parametrizado que inicializa x e y con valores dados.
    Vector2(float x, float y) : x(x), y(y) {}

    // Sobrecarga del operador + para sumar dos vectores.
    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    // Sobrecarga del operador - para restar dos vectores.
    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    // Sobrecarga del operador * para multiplicar el vector por un escalar.
    Vector2 operator*(float scalar) const {
        return Vector2(x * scalar, y * scalar);
    }

    // Método que devuelve la magnitud (longitud) del vector.
    float magnitude() const {
        return std::sqrt(x * x + y * y);
    }

    // Método que devuelve un vector normalizado (magnitud 1).
    Vector2 normalize() const {
        float mag = magnitude();
        if (mag == 0) {
            return Vector2(0, 0);  // Si la magnitud es 0, devolver un vector nulo.
        }
        return Vector2(x / mag, y / mag);
    }

    // Método que devuelve un puntero a los datos del vector (x, y).
    const float* data() const {
        return &x;  // Devuelve la dirección de x, que está contigua a y.
    }

    // Función para imprimir los valores del vector (útil para depuración).
    void print() const {
        std::cout << "Vector2(" << x << ", " << y << ")" << std::endl;
    }
};

#endif  // VECTOR2_H
