#include "gaussian_rational.hpp"
#include <cassert>
#include <iostream>

GaussRat::GaussRat() : real(Rational(0)), imag(Rational(0)) {}

GaussRat::GaussRat(const Rational& real) : real(real), imag(Rational(0)) {}

GaussRat::GaussRat(const Rational& real, const Rational& imag) : real(real), imag(imag) {}

GaussRat::GaussRat(int real) : real(Rational(real)), imag(Rational(0)) {}

GaussRat::GaussRat(int renum, int reden, int imnum, int imden)
    : real(Rational(renum, reden)), imag(Rational(imnum, imden)) {
    // Ensure denominator of imag is not zero
    assert(imden != 0);
}

void GaussRat::print() const {
    real.print();
    if (!imag.equals(Rational(0))) {
        std::cout << (imag.is_positive() ? " + " : " - ");
        imag.print();
        std::cout << 'i';
    }
}

GaussRat GaussRat::plus(const GaussRat& other) const {
    return GaussRat(real.plus(other.real), imag.plus(other.imag));
}

GaussRat GaussRat::minus(const GaussRat& other) const {
    return GaussRat(real.minus(other.real), imag.minus(other.imag));
}

GaussRat GaussRat::times(const GaussRat& other) const {
    // Compute (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
    Rational a = real;
    Rational b = imag;
    Rational c = other.real;
    Rational d = other.imag;

    Rational realPart = a.times(c).minus(b.times(d));
    Rational imagPart = a.times(d).plus(b.times(c));

    return GaussRat(realPart, imagPart);
}

GaussRat GaussRat::divided_by(const GaussRat& other) const {
    // Compute (a + bi) / (c + di) = (a + bi) * (c / (c^2 + d^2) - d / (c^2 + d^2)i)
    Rational a = real;
    Rational b = imag;
    Rational c = other.real;
    Rational d = other.imag;

    // Denominator: c^2 + d^2
    Rational denominator = c.times(c).plus(d.times(d));
    assert(!denominator.is_zero()); // Ensure denominator is not zero

    // Compute real and imaginary parts of the result
    Rational realPart = a.times(c).plus(b.times(d)).divided_by(denominator);
    Rational imagPart = b.times(c).minus(a.times(d)).divided_by(denominator);

    return GaussRat(realPart, imagPart);
}

bool GaussRat::equals(const GaussRat& other) const {
    return real.equals(other.real) && imag.equals(other.imag);
}
