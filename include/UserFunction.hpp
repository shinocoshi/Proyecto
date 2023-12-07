// UserFunction.hpp
#pragma once
#include "Function.hpp"

class UserFunction : public Function {
public:
    double evaluate(double x) override;
};
