// SimpsonOneThird.h
#pragma once
#include "Function.hpp"

class SimpsonOneThird {
public:
    double integrate(double a, double b, int n, Function& func);
};
