//
// Created by Donut on 27.10.2026.
//

#ifndef ZAD_2_1_VECTOR_H
#define ZAD_2_1_VECTOR_H

#include "Point.h"



class Vector {
public:
    [[nodiscard]] Vector();

    [[nodiscard]] Vector(const Point startPoint, const Point endPoint);

    ~Vector();

    [[nodiscard]] Point getStartPoint() const;

    [[nodiscard]] Point getEndPoint() const;

    [[nodiscard]] double getDX() const;

    [[nodiscard]] double getDY() const;

    [[nodiscard]] std::string toString() const;


    void addVector(const Vector &vector);

    void subtractVector(const Vector &vector);

    void setStartPoint(Point startPoint);

    void setEndPoint(Point endPoint);

    double operator * (const Vector& secondVector) const;

    Vector operator + (const Vector& secondVector) const;

    Vector operator - (const Vector& secondVector) const;

    static int getVectorCount();

private:
    inline static int vectorCount = 0;
    Point startPoint;
    Point endPoint;

};
#endif //ZAD_2_1_VECTOR_H
