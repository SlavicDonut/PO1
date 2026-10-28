//
// Created by Donut on 27.10.2026.
//

#include "Vector.h"

#include <iostream>
#include <ostream>

Vector::Vector() {
    vectorCount++;
}

Vector::Vector(const Point startPoint, const Point endPoint): startPoint(startPoint), endPoint(endPoint) {
    vectorCount++;
}

Vector::~Vector() {
    std::cout << "Zadanie wykonane" << std::endl;
}

//getters
Point Vector::getStartPoint() const {
    return startPoint;
}

Point Vector::getEndPoint() const {
    return endPoint;
}

double Vector::getDX() const {
    return this->endPoint.getX() - this->startPoint.getX();
}

double Vector::getDY() const {
    return this->getEndPoint().getY() - this->startPoint.getY();
}

std::string Vector::toString() const {
    return this->getStartPoint().toString() + " -> " + this->getEndPoint().toString();
}

void Vector::addVector(const Vector &vector) {
    double XOffset = vector.getDX();
    double YOffset = vector.getDY();

    this->endPoint.setX(this->endPoint.getX() + XOffset);
    this->endPoint.setY(this->endPoint.getY() + YOffset);
}

void Vector::subtractVector(const Vector &vector) {
    double XOffset = vector.getDX();
    double YOffset = vector.getDY();

    this->endPoint.setX(this->endPoint.getX() - XOffset);
    this->endPoint.setY(this->endPoint.getY() - YOffset);
}

//setters
void Vector::setStartPoint(Point startPoint) {
    this->startPoint = startPoint;
}

void Vector::setEndPoint(Point endPoint) {
    this->endPoint = endPoint;
}

double Vector::operator * (const Vector &secondVector) const {
    double dx1 = this->getDX();
    double dy1 = this->getDY();

    double dx2 = secondVector.getDX();
    double dy2 = secondVector.getDY();

    return dx1 * dx2 + dy1 * dy2;
}

Vector Vector::operator + (const Vector &secondVector) const {
    Point newStartPoint = Point(this->getStartPoint().getX(),
                                this->getStartPoint().getY());

    Point newEndPoint = Point(this->getEndPoint().getX() + secondVector.getDX(),
                              this->getEndPoint().getY() + secondVector.getDY());

    return Vector(newStartPoint, newEndPoint);
}

Vector Vector::operator - (const Vector &secondVector) const {
    Point newStartPoint = Point(this->getStartPoint().getX(),
                                this->getStartPoint().getY());

    Point newEndPoint = Point(this->getEndPoint().getX() - secondVector.getDX(),
                              this->getEndPoint().getY() - secondVector.getDY());

    return Vector(newStartPoint, newEndPoint);
}

int Vector::getVectorCount() {
    return vectorCount;
}
