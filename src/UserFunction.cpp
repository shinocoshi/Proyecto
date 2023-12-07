#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class UserFunction : public Function {
public:
    double evaluate(double x) override {
        return pow(x, 3) / (1 + sqrt(x));
    }
};