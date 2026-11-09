#include <iostream>

#include "complex.h"
#include "comp_calculator.h"

int main() {

    const Complex complex_1 = Complex(12.6, -3.2);
    const Complex complex_2 = Complex(-4.0, 1.3);

    std::cout << "Number1: " << complex_1.toString() << std::endl;
    std::cout << "Number2: " << complex_2.toString() << std::endl;
    std::cout << "Number1 + Number2; " << Comp_Calculator::add(complex_1, complex_2).toString() << std::endl;
    std::cout << "Number1 - Number2: " << Comp_Calculator::subtract(complex_1, complex_2).toString() << std::endl;
    std::cout << "Number1 * Number2: " << Comp_Calculator::multiply(complex_1, complex_2).toString() << std::endl;
    std::cout << "Number1 / Number2: " << Comp_Calculator::divide(complex_1, complex_2).toString() << std::endl;
    std::cout << "Number1 / 0: " << Comp_Calculator::divide(complex_1, Complex(0,0)).toString() << std::endl;
    return 0;
}
