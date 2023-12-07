// SimpsonOneThird.cpp
#include "SimpsonOneThird.hpp"

double SimpsonOneThird::integrate(double a, double b, int n, Function& func) {
    double h = (b - a) / n;
    double sum = func.evaluate(a) + func.evaluate(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            sum += 2 * func.evaluate(x);
        } else {
            sum += 4 * func.evaluate(x);
        }
    }

    return (h / 3) * sum;
}
