// InputOutput.cpp
#include "InputOutput.hpp"
#include <iostream>
#include <iomanip>

void InputOutput::getInput(double& a, double& b, int& n) {
    std::cout << "Ingrese el limite inferior 'a': ";
    std::cin >> a;
    std::cout << "Ingrese el limite superior 'b': ";
    std::cin >> b;
    std::cout << "Ingrese el numero de subintervalos 'n': ";
    std::cin >> n;
}

void InputOutput::displayResult(double result) {
    std::cout << "El resultado de la integral definida es: " << std::fixed << std::setprecision(20) << result << std::endl;
}

void InputOutput::displayErrorMessage() {
    std::cout << "El numero de subintervalos debe ser par para el metodo de Simpson 1/3." << std::endl;
}
