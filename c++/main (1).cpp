#include <iostream>
#include <cmath>

class Vector {
private:
    double x;
    double y;

public:
    Vector(double xVal, double yVal) : x(xVal), y(yVal) {}

    // Operator długości wektora
    double operator~() const {
        return std::sqrt(x * x + y * y);
    }

    // Operator iloczynu wektora i liczby skalarnej
    Vector operator*(double scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    // Operator iloczynu skalarnego z innym wektorem
    double operator*(const Vector& other) const {
        return x * other.x + y * other.y;
    }

    // Metoda pobierająca wartość x
    double getX() const {
        return x;
    }

    // Metoda pobierająca wartość y
    double getY() const {
        return y;
    }
};

int main() {
    // Przykładowe użycie
    Vector v1(3.0, 4.0);
    Vector v2(2.0, 1.0);

    // Obliczanie długości wektora
    double length = ~v1;
    std::cout << "Długość wektora v1: " << length << std::endl;

    // Obliczanie iloczynu wektora i liczby skalarnej
    double scalar = 2.5;
    Vector scaledVector = v1 * scalar;
    std::cout << "Iloczyn wektora v1 i liczby skalarnej " << scalar << ": (" << scaledVector.getX() << ", " << scaledVector.getY() << ")" << std::endl;

    // Obliczanie iloczynu skalarnego z innym wektorem
    double dotProduct = v1 * v2;
    std::cout << "Iloczyn skalarny v1 i v2: " << dotProduct << std::endl;

    return 0;
}
