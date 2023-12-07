#include "UserFunction.hpp"
#include "SimpsonOneThird.hpp"
#include "InputOutput.hpp"

int main() {
    double a, b;
    int n;

    InputOutput io;
    io.getInput(a, b, n);

    if (n % 2 != 0) {
        io.displayErrorMessage();
        return 1;
    }

    UserFunction userFunc;
    SimpsonOneThird simpson;
    double result = simpson.integrate(a, b, n, userFunc);

    io.displayResult(result);

    return 0;
}
