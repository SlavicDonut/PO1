//
// Created by Donut on 14.10.2026.
//

#ifndef ZAD_1_1_COMPLEX_H
#define ZAD_1_1_COMPLEX_H
#include <string>

class Complex {
    public:
    Complex(double re, double im);
    [[nodiscard]] std::string toString() const;
    [[nodiscard]] double getRe() const;
    [[nodiscard]] double getIm() const;

    private:
    double re;
    double im;
};

#endif //ZAD_1_1_COMPLEX_H
