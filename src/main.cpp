#include "arithmetic.h"
//#include <iostream>


int main ()
{
    const double v1 = 3.3;
    const double v2 = 2.0;
    
    Arithmetic m;

    std::cout << v1 << " * " << v2 << " = " << m(v1,v2) << std::endl;
    std::cout << v1 << " + " << v2 << " = " << m.add(v1,v2) << std::endl;
    std::cout << v1 << " + " << v2 << " = " << m.substract(v1,v2) << std::endl;
    std::cout << v1 << " + " << v2 << " = " << m.multiply(v1,v2) << std::endl;
    std::cout << v1 << " + " << v2 << " = " << m.divide(v1,v2) << std::endl;

}