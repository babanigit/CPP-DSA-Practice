#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    cout << "I am here to help you solve quadratic equations.\n";
    cout << "I am here to help you solve quadratic equations." << endl;
    // cout << "For me to be able to help you, you must format your equations in a specific way. In particular, writing-1s, 1s, and 0s is necessary." << endl;
    // cout << "Here are examples of how to format your equations so that I understand..." << endl;
    // cout << "1*x^2+0*x-1=0" << endl;
    // cout << "1*x^2-1*x+0=0" << endl;
    // cout << "1*x^2+1*x-6=0" << endl;
    // cout << "1*x^2+2*x+1=0" << endl;
    // cout << "-0.5*x^2-0.125*x+0.1875=0" << endl;
    // cout << "0.1234*x^2+5.67*x+8.9=0" << endl;
    cout << "Now type your equation." << endl;

    string equation;
    getline(cin, equation);

    // Coefficient extraction
    size_t pos_a = equation.find("*x^2");
    size_t pos_b = equation.find("*x", pos_a + 1);
    size_t pos_c = equation.find("=", pos_b + 1);

    double a = stod(equation.substr(0, pos_a));
    double b = stod(equation.substr(pos_a + 4, pos_b - (pos_a + 4)));
    double c = stod(equation.substr(pos_b + 2, pos_c - (pos_b - 2)));

    cout << a << b << c << endl;


    // Check if a is zero (not a quadratic equation)
    if (a == 0)
    {
        cout << "The coefficient in front of *x^2 must not be zero for it to be a quadratic equation.\n";
        return 1;
    }

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;
    cout << "the discriminant is : " << discriminant << endl;

    // Check discriminant for real roots
    if (discriminant >= 0)
    {
        double sqrt_discriminant = sqrt(discriminant);
        double root1 = (-b - sqrt_discriminant) / (2 * a);
        double root2 = (-b + sqrt_discriminant) / (2 * a);

        cout << "(-b - the square root of the discriminant) / 2a is " << root1 << endl;
        cout << "(-b + the square root of the discriminant) / 2a is " << root2 << endl;
    }
    else
    {
        cout << "The quadratic equation does not have real roots.\n";
    }

    return 0;
}
