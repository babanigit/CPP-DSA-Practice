#ifndef GAUSSIAN_RATIONAL_HPP
#define GAUSSIAN_RATIONAL_HPP

#include "rational.hpp"

class GaussRat {
public:
    // Default constructor
    GaussRat();

    // Constructor with one Rational argument
    GaussRat(const Rational& real);

    // Constructor with two Rational arguments
    GaussRat(const Rational& real, const Rational& imag);

    // Constructor with one int argument
    GaussRat(int real);

    // Constructor with four int arguments
    GaussRat(int renum, int reden, int imnum, int imden);

    // Member function to print the complex number
    void print() const;

    // Member functions for arithmetic operations
    GaussRat plus(const GaussRat& other) const;
    GaussRat minus(const GaussRat& other) const;
    GaussRat times(const GaussRat& other) const;
    GaussRat divided_by(const GaussRat& other) const;

    // Member function for comparison
    bool equals(const GaussRat& other) const;

private:
    Rational real;
    Rational imag;
};

#endif // GAUSSIAN_RATIONAL_HPP
