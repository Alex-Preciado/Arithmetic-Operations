#include "arithmetic.h"

//using namespace std;

double Arithmetic::operator()( const double v1, const double v2 ) const
{
    return v1 * v2;
}

double Arithmetic::add(const double v1, const double v2) const {return v1+v2;}
double Arithmetic::substract(const double v1, const double v2) const {return v1-v2;}
double Arithmetic::multiply(const double v1, const double v2) const {return v1*v2;}
double Arithmetic::divide(const double v1, const double v2) const {return v1/v2;}