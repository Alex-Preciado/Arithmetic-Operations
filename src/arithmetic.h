//! \file arithmetic.cpp
//!
//! \author Alex Preciado, Someone Else
///
//! \brief This is the implementation file for the Arithmetic Class
///
//! This file containts the implementation for the addition, substraction,
/// multiplication and division functions of the Arithmetic class.


/// \brief My class
///
/// Longer description of this class
/// in multiple lines.
///
/// \bug The overload function "operator" and the multiplication functions
/// performe the exact same process
///
/// \todo We have to modify the implemntation of the overload function "operator"
///
/// \todo (Alex) You have to do this too...



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