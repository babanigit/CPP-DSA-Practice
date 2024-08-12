#include <iostream>
#include "rational.hpp"
#include "gaussian_rational.hpp"

using namespace std;

int main() {
    for (int den_1 = 1; den_1 < 10; ++den_1) {
        for (int num_1 = 1; num_1 < den_1; ++num_1) {
            for (int den_2 = 1; den_2 < 10; ++den_2) {
                for (int num_2 = 1; num_2 < den_2; ++num_2) {
                    const Rational r1(num_1, den_1);
                    const Rational r2(num_2, den_2);

                    r1.print();                cout << " / ";
                    r2.print();                cout << " = ";
                    r1.divided_by(r2).print(); cout <<  endl;
                }
            }
        }
    }

    const GaussRat z;
    z.print(); cout << endl;

    return 0;
}
