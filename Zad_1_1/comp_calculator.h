//
// Created by Donut on 14.10.2026.
//

#ifndef ZAD_1_1_COMP_CALCULATOR_H
#define ZAD_1_1_COMP_CALCULATOR_H
#include "complex.h"

class Comp_Calculator {
public:
    static Complex add(Complex a, Complex b);
    static Complex subtract(Complex a, Complex b);
    static Complex multiply(Complex a, Complex b);
    static Complex divide(Complex a, Complex b);
};

#endif //ZAD_1_1_COMP_CALCULATOR_H
