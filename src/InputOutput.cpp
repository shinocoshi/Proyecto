#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


class InputOutput {
public:
    void getInput(double& a, double& b, int& n) {
        cout << "Ingrese el limite inferior 'a': ";
        cin >> a;
        cout << "Ingrese el limite superior 'b': ";
        cin >> b;
        cout << "Ingrese el numero de subintervalos 'n': ";
        cin >> n;
    }

    void displayResult(double result) {
        cout << "El resultado de la integral definida es: " << fixed << setprecision(20) << result << endl;
    }

    void displayErrorMessage() {
        cout << "El numero de subintervalos debe ser par para el metodo de Simpson 1/3." << endl;
    }
};