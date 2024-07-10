#include <iostream>
#include <string>
#include <cmath> // for sqrt function
using namespace std;

int main() {
    cout << "I am here to help you solve quadratic equations." << endl;
    cout << "For me to be able to help you, you must format your equations in a specific way. In particular, writing-1s, 1s, and 0s is necessary." << endl;
    cout << "Here are examples of how to format your equations so that I understand..." << endl;
    cout << "1*x^2+0*x-1=0" << endl;
    cout << "1*x^2-1*x+0=0" << endl;
    cout << "1*x^2+1*x-6=0" << endl;
    cout << "1*x^2+2*x+1=0" << endl;
    cout << "-0.5*x^2-0.125*x+0.1875=0" << endl;
    cout << "0.1234*x^2+5.67*x+8.9=0" << endl;
    cout << "Now type your equation." << endl;

    string equation;
    getline(cin, equation);

    // Find positions of key characters
    size_t pos_x2 = equation.find("*x^2");
    size_t pos_x = equation.find("*x", pos_x2 + 3); // search after "*x^2"
    size_t pos_eq = equation.find("=", pos_x + 2); // search after "*x"

    // Extract substrings for coefficients a, b, c
    double a = stod(equation.substr(0, pos_x2)); // from start to "*x^2"
    double b = stod(equation.substr(pos_x2 + 3, pos_x - pos_x2 - 3)); // from "*x^2" to "*x"
    double c = stod(equation.substr(pos_x + 2, pos_eq - pos_x - 2)); // from "*x" to "="

    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;

    if (a == 0) {
        cout << "This is not a quadratic equation because the number in front of *x^2 is 0." << endl;
    } else if (discriminant < 0) {
        cout << "This quadratic equation does not have real roots." << endl;
    } else {
        // Calculate roots
        double root1 = (-b - sqrt(discriminant)) / (2 * a);
        double root2 = (-b + sqrt(discriminant)) / (2 * a);

        // Output roots
        cout << "(-b - the square root of the discriminant) / 2a is " << root1 << endl;
        cout << "(-b + the square root of the discriminant) / 2a is " << root2 << endl;
    }

    return 0;
}
