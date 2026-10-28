//
// Created by Donut on 27.10.2026.
//

#ifndef ZAD_2_1_POINT_H
#define ZAD_2_1_POINT_H
#include <string>


class Point {
public:
    [[nodiscard]] Point() = default;

    Point(const double x, const double y)
        : x(x), y(y) {}

    [[nodiscard]] double getX() const;

    [[nodiscard]] double getY() const;

    [[nodiscard]] std::string toString() const;

    void setX(double x);

    void setY(double y);

private:
    double x = 0.0;
    double y = 0.0;
};


#endif //ZAD_2_1_POINT_H
