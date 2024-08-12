#include "rational.hpp"


Rational::Rational() : num(0), den(1) {
    std::cout << "You just called the default constructor for Rational." << std::endl;

    std::cout << " - If you intended to use it, do something else.     " << std::endl;
    std::cout << "   Remember that I broke it.                         " << std::endl;

    std::cout << " - If you did not intend to use it, make sure to     " << std::endl;
    std::cout << "   use a member initializer list when appropriate.   " << std::endl;

    assert(false);
}

Rational::Rational(int n)        : num(n), den(1) {}

Rational::Rational(int n, int d) : num(n), den(d) {
    assert(den != 0);
    make_den_pos();
    simplify();
}


void Rational::print() const {
    std::cout << num;

    if (den != 1) {
        std::cout << '/' << den;
    }
}


/*
 This definition's correctness relies on the fact that
 we store rational numbers in their simplifed form.
*/
bool Rational::equals(const Rational& other) const {
    return (num == other.num) && (den == other.den);
}


Rational Rational::plus(const Rational& other) const {
    return Rational(num * other.den + other.num * den, den * other.den);
}
Rational Rational::minus(const Rational& other) const {
    return Rational(num * other.den - other.num * den, den * other.den);
}
Rational Rational::times(const Rational& other) const {
    return Rational(num * other.num, den * other.den);
}
Rational Rational::divided_by(const Rational& other) const {
    assert(!other.is_zero());
    return Rational(num * other.den, den * other.num);
}


bool Rational::is_zero()     const { return num == 0; }
bool Rational::is_positive() const { return num  > 0; }

double Rational::to_double() const {
    return static_cast<double>(num) / static_cast<double>(den);
}


/**
This member function makes sure that
the denominator of a rational number is positive,
a convenient choice.
*/
void Rational::make_den_pos() {
    if (den < 0) {
        num *= -1;
        den *= -1;
    }
}

/**
This member function simplifies a rational number.
It does so by computing the highest common factor
of the numerator and denominator and dividing
the numerator and denominator by it.

To compute the highest common factor,
the Euclidean algorithm is used.
Do not worry if you don't know
the Euclidean algorithm.
*/
void Rational::simplify() {
    int a = std::abs(num);
    int b = std::abs(den);

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    num /= a;
    den /= a;
}

/*
void Rational::simplify() {
    for (int d = std::min(std::abs(num), std::abs(den)); d > 1; --d) {
        if (num % d == 0 && den % d == 0) {
            num /= d;
            den /= d;

            break;
        }
    }
}
*/
