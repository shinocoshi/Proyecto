// UserFunction.cpp
#include "UserFunction.hpp"
#include <cmath>

double UserFunction::evaluate(double x) {
    return pow(x, 3) / (1 + sqrt(x));
}
