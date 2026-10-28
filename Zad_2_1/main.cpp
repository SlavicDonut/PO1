#include <format>
#include <iostream>

#include "Vector.h"

int main() {
    Vector vector1 = Vector(Point(1, 4), Point(-2, 2));
    Vector vector2 = Vector(Point(-5, -0.5), Point(11, 0));
    Vector vector3;

    std::cout << vector1.getStartPoint().toString() << std::endl;
    std::cout << vector1.getEndPoint().toString() << std::endl;
    std::cout << vector2.getStartPoint().toString() << std::endl;
    std::cout << vector2.getEndPoint().toString() << std::endl;

    std::cout << "Vector1 = " + vector1.toString() << std::endl;
    std::cout << "Vector2 = " + vector2.toString() << std::endl;


    vector3 = vector1 + vector2;

    std::cout << "Vector1 + Vector2 = " + vector3.toString() << std::endl;

    vector3 = vector1 - vector2;

    std::cout << "Vector1 - Vector2 = " + vector3.toString() << std::endl;

    vector3 = vector2 - vector1;

    std::cout << "Vector2 - Vector1 = " + vector3.toString() << std::endl;

    std::cout << std::format("Scalar multiplication: Vector1 * Vector2 = {:.2f}", vector1 * vector2) << std::endl;

    std::cout << std::format("Vector count = {} ", Vector::getVectorCount()) << std::endl;

     return 0;
}
