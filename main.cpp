#include <iostream>
#include "Rational.h"

int main() {
    std::cout << "Enter a, b:" << std::endl;
    int a;
    int b;
    std::cin>>a>>b;

    Rational<int> rational(a, b);
    rational.printVal();

    return 0;
}