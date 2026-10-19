#include <iostream>

#include "complex.h"
#include "comp_calculator.h"

int main() {

    const Complex complex_1 = Complex(12.6, -3.2);
    const Complex complex_2 = Complex(-4.0, 1.3);

    std::cout << "Number 1: " << complex_1.toString() << std::endl;
    std::cout << "Number 2: " << complex_2.toString() << std::endl;
    std::cout << "Addition result: " << Comp_Calculator::add(complex_1, complex_2).toString() << std::endl;
    std::cout << "Substraction result: " << Comp_Calculator::subtract(complex_1, complex_2).toString() << std::endl;
    std::cout << "Multiplication result: " << Comp_Calculator::multiply(complex_1, complex_2).toString() << std::endl;
    std::cout << "Division result: " << Comp_Calculator::divide(complex_1, complex_2).toString() << std::endl;
    //std::cout << "Division by 0: " << Comp_Calculator::divide(complex_1, Complex(0,0)).toString() << std::endl;
    return 0;
}
