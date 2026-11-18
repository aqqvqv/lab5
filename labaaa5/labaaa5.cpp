
#include <iostream>
#include "rational.h"

int main() {
    Rational a(2, 3), b(5, 6);
    std::cout << "Static library RationalLib\n"
              << "a = " << a.toString() << "; b = " << b.toString() << '\n'
              << "a+b = " << a.add(b).toString() << '\n'
              << "a-b = " << a.sub(b).toString() << '\n'
              << "a*b = " << a.mul(b).toString() << '\n'
              << "a/b = " << a.div(b).toString() << '\n'
              << std::boolalpha << "a < b: " << a.less(b) << '\n';
    try { a.div(Rational(0)); }
    catch (const std::exception& e) {
        std::cout << "Rejected: " << e.what() << '\n';
    }
}