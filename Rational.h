//
// Created by rei on 18.10.2017.
//

#ifndef LAB5_RATIONAL_H
#define LAB5_RATIONAL_H

template<typename T>
class Rational {
private:
    T numenator;
    T denominator;

public:
    T getNumenator() const {
        return numenator;
    }

    void setNumenator(T numenator) {
        Rational::numenator = numenator;
    }

    T getDenominator() const {
        return denominator;
    }

    void setDenominator(T denominator) {
        Rational::denominator = denominator;
    }

    virtual ~Rational() {}

    Rational(T numenator, T denominator);

    void calc();

    void printVal();
};

#endif //LAB5_RATIONAL_H
