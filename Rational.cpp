//
// Created by rei on 18.10.2017.
//

#include "Rational.h"
#include <iostream>

template<typename T> Rational<T>::Rational(T numenator, T denominator){
    if ((int)numenator == 0 || (int)denominator == 0){
        std::cout<<" Zero exception "<<std::endl;
    }
    else if (numenator < denominator){
        this->numenator = numenator;
        this->denominator = denominator;
        calc();
    } else{
        std::cout<<"Bad numbers cuz 1st > 2nd. Would like to swap values[Y/N]?"<<std::endl;
        char tmp;
        std::cin>>tmp;
        if (tmp=='Y' || tmp=='y'){
            std::swap(numenator, denominator);
            this->numenator = numenator;
            this->denominator = denominator;
            calc();
        } else if (tmp=='N' || tmp=='n'){
            std::cout<<"ISNT RATIONAL"<<std::endl;
        }
    }
}

template<typename T> void Rational<T>::calc(){
    T tmp = gcd(numenator, denominator);
    numenator /= tmp;
    denominator /= tmp;
}

template<typename T> T gcd(T a, T b){
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

template <typename T> void Rational<T>::printVal() {
    std::cout << "Value: " << numenator << "\\" << denominator << std::endl;
}
