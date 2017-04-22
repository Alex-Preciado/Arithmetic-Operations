#ifndef ARITHMETIC_H_
#define ARITHMETIC_H_


#include <iostream>

//using namespace std;

class Arithmetic
{
    public:
        double operator()( const double v1, const double v2 ) const;
        double add(const double v1, const double v2) const;
        double substract(const double v1, const double v2) const;
        double multiply(const double v1, const double v2) const;
        double divide(const double v1, const double v2) const;

};


#endif 