#include "gaussian_rational.hpp"
#include <cassert>
#include <iostream>

// Default constructor
GaussRat::GaussRat() : real(Rational(0)), imag(Rational(0)) {}

// Constructor with one Rational argument
GaussRat::GaussRat(const Rational& real) : real(real), imag(Rational(0)) {}

// Constructor with two Rational arguments
GaussRat::GaussRat(const Rational& real, const Rational& imag) : real(real), imag(imag) {}

// Constructor with one int argument
GaussRat::GaussRat(int real) : real(Rational(real)), imag(Rational(0)) {}

// Constructor with four int arguments
GaussRat::GaussRat(int renum, int reden, int imnum, int imden) 
    : real(Rational(renum, reden)), imag(Rational(imnum, imden)) {}

// Print function
void GaussRat::print() const {
    real.print();
    if (!imag.equals(Rational(0))) {
        std::cout << (imag.is_positive() ? " + " : " - ");
        imag.print();
        std::cout << 'i';
    }
}

// Arithmetic operations
GaussRat GaussRat::plus(const GaussRat& other) const {
    return GaussRat(real.plus(other.real), imag.plus(other.imag));
}

GaussRat GaussRat::minus(const GaussRat& other) const {
    return GaussRat(real.minus(other.real), imag.minus(other.imag));
}

GaussRat GaussRat::times(const GaussRat& other) const {
    Rational a = real;
    Rational b = imag;
    Rational c = other.real;
    Rational d = other.imag;
    
    Rational realPart = a.times(c).minus(b.times(d));
    Rational imagPart = a.times(d).plus(b.times(c));
    
    return GaussRat(realPart, imagPart);
}

GaussRat GaussRat::divided_by(const GaussRat& other) const {
    Rational a = real;
    Rational b = imag;
    Rational c = other.real;
    Rational d = other.imag;
    
    Rational denominator = c.times(c).plus(d.times(d));
    assert(!denominator.is_zero());
    
    Rational realPart = a.times(c).plus(b.times(d)).divided_by(denominator);
    Rational imagPart = b.times(c).minus(a.times(d)).divided_by(denominator);
    
    return GaussRat(realPart, imagPart);
}

// Comparison function
bool GaussRat::equals(const GaussRat& other) const {
    return real.equals(other.real) && imag.equals(other.imag);
}
