//
// Created by Donut on 14.10.2026.
//

#include "complex.h"

#include <format>


Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}

std::string Complex::toString() const {
    if (this->im < 0.0) {return std::format("{:.2f} - {:.2f}i", this->re, this->im * -1);}
    return std::format("{:.2f} + {:.2f}i", this->re, this->im);
}

double Complex::getRe() const {return this->re;}
double Complex::getIm() const {return this->im;}


