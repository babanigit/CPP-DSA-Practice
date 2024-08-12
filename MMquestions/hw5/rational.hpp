#ifndef rational_hpp
#define rational_hpp

#include <iostream>   // std::cout
#include <cassert>    // assert
#include <cstdlib>    // std::abs
#include <algorithm>  // std::min

/*
 This is a class for creating instances of rational numbers (also known as fractions).
 A rational number (or fraction) consists of an integer numerator and an integer denominator.
 For this reason, our class has member variables called 'num' and 'den' of type int.

 The default constructor creates 0.
 We can write 0 as 0/1, i.e. with numerator 0 and denominator 1.

 Any integer can be regarded as a fraction with denominator equal to 1.
 There's a constructor based on this idea too.

 Finally, a user can specify a numerator and denominator
 in order to construct a rational of their choice.

 Rationals are always stored in a simplified form:
  - 'den' is strictly positive,
  - 'num' and 'den' have a highest common factor of 1.
*/
class Rational {
public:
    Rational(); // this dont works
    
    Rational(int num);
    Rational(int num, int den);

    void print() const;

    bool equals(const Rational& other) const;

    Rational       plus(const Rational& other) const;
    Rational      minus(const Rational& other) const;
    Rational      times(const Rational& other) const;
    Rational divided_by(const Rational& other) const;

    bool is_zero() const;
    bool is_positive() const;

    double to_double() const;

private:
    int num;
    int den;

    void make_den_pos();
    void simplify();
};

#endif /* rational_hpp */
