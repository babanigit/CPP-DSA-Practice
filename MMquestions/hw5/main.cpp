#include <iostream>
#include "rational.hpp"
#include "gaussian_rational.hpp"

using namespace std;

void testConstruction();
void testArithmeticOperations();
void testComparison();

int main() {
    // Test Construction
    testConstruction();
    
    // Test Arithmetic Operations
    testArithmeticOperations();
    
    // Test Comparison
    testComparison();

    return 0;
}

void testConstruction() {
    cout << "Testing Construction:" << endl;

    // Test default constructor
    GaussRat z1;
    cout << "Default constructor: ";
    z1.print();
    cout << endl;

    // Rational h;
    // h.print(); // here you cannot use the default contructor of Rational Class

    // Test constructor with one Rational
    Rational r1(2, 3);
    GaussRat z2(r1);
    cout << "Constructor with one Rational (2/3): ";
    z2.print();
    cout << endl;

    // Test constructor with two Rationals
    Rational r2(1, 2);
    GaussRat z3(r1, r2);
    cout << "Constructor with two Rationals (2/3 + 1/2i): ";
    z3.print();
    cout << endl;

    // Test constructor with one int
    GaussRat z4(5);
    cout << "Constructor with one int (5): ";
    z4.print();
    cout << endl;

    // Test constructor with four ints
    GaussRat z5(3, 4, 5, 6);
    cout << "Constructor with four ints (3/4 + 5/6i): ";
    z5.print();
    cout << endl;
}

void testArithmeticOperations() {
    cout << "Testing Arithmetic Operations:" << endl;

    GaussRat z1(Rational(1, 2), Rational(1, 3));
    GaussRat z2(Rational(3, 4), Rational(2, 3));

    // Test addition
    GaussRat sum = z1.plus(z2);
    cout << "Addition: ";
    sum.print();
    cout << endl;

    // Test subtraction
    GaussRat diff = z1.minus(z2);
    cout << "Subtraction: ";
    diff.print();
    cout << endl;

    // Test multiplication
    GaussRat prod = z1.times(z2);
    cout << "Multiplication: ";
    prod.print();
    cout << endl;

    // Test division
    GaussRat quot = z1.divided_by(z2);
    cout << "Division: ";
    quot.print();
    cout << endl;
}

void testComparison() {
    cout << "Testing Comparison:" << endl;

    GaussRat z1(Rational(1, 2), Rational(1, 3));
    GaussRat z2(Rational(1, 2), Rational(1, 3));
    GaussRat z3(Rational(2, 3), Rational(4, 5));

    cout << "Comparison of z1 and z2 (should be true): " << (z1.equals(z2) ? "True" : "False") << endl;
    cout << "Comparison of z1 and z3 (should be false): " << (z1.equals(z3) ? "True" : "False") << endl;
}
