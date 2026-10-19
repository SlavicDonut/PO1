//
// Created by Donut on 14.10.2026.
//

#include "comp_calculator.h"

#include <stdexcept>

Complex Comp_Calculator::add(Complex a, Complex b) {
    return {
        a.getRe() + b.getRe(),
        a.getIm() + b.getIm()
    };
}

Complex Comp_Calculator::subtract(Complex a, Complex b) {
    return {
        a.getRe() - b.getRe(),
        a.getIm() - b.getIm()
    };
}

Complex Comp_Calculator::multiply(Complex a, Complex b) {
    return {
        a.getRe() * b.getRe() - a.getIm() * b.getIm(),
        a.getRe() * b.getIm() + a.getIm() * b.getRe()
    };
}

Complex Comp_Calculator::divide(Complex a, Complex b) {
    if (b.getRe() == 0 && b.getIm() == 0) {throw std::runtime_error("Error: division by zero");}
    return {
        (a.getRe() * b.getRe() + a.getIm() * b.getIm()) / (b.getRe() * b.getRe() + b.getIm() * b.getIm()),
        (a.getIm() * b.getRe() - a.getRe() * b.getIm()) / (b.getRe() * b.getRe() + b.getIm() * b.getIm())
    };
}
