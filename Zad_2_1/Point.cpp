//
// Created by Donut on 27.10.2026.
//

#include "Point.h"
#include <format>

double Point::getX() const {
    return x;
}

void Point::setX(double x) {
    this->x = x;
}

double Point::getY() const {
    return y;
}

std::string Point::toString() const {
    return std::format("({:.2f}, {:.2f})", x, y);
}

void Point::setY(double y) {
    this->y = y;
}
