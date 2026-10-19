//
// Created by Donut on 14.10.2026.
//

#include "complex.h"


Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}

std::string Complex::toString() const {
    return std::to_string(getRe())  + " + " + std::to_string(getIm()) + "i";
}

double Complex::getRe() const {return this->re;}
double Complex::getIm() const {return this->im;}


