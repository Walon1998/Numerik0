#include <iostream>
#include <cmath>
#include <climits>
#include <cfloat>
#include "Vec.h"

void int_to_bits(int x) {
    int firstbit = 1 << 31;

    for (int i = 0; i < 32; i++) {
        int currentbit = x & firstbit;
        std::cout << (bool) currentbit;
        x = x << 1;
    }
    std::cout << "\n";
}

void float_to_bits(float x) {
    int flo = *(int *) &x;
    int firstbit = 1 << 31;

    for (int i = 0; i < 32; i++) {
        int currentbit = flo & firstbit;
        std::cout << (bool) currentbit;
        flo = flo << 1;
    }
    std::cout << "\n";


}

double power(double a, int b) {
    double x = 1;
    for (int i = 0; i < b; i++) {
        x = x * a;
    }
    return x;
}

double fast_power(double a, int b) {
    if (b == 1) {
        return a;
    } else if (b % 2 == 0) {
        a = a * a;
        b = b / 2;
        return fast_power(a, b);

    } else {
        return a * fast_power(a, b - 1);

    }
}

double fast_fast_power(double a, double b) {
    return std::exp(std::log(a) * b);
}

double relative_error(double a, double b) {
    return std::abs(a - b) / std::abs(a);
}

template<class T>
T factorial(T x) {
    T res = 1;
    for (int i = 1; i <= x; ++i) {
        res = i * res;
    }
    return res;
}


template<class T>
double dbl_factorial(T x) {
    int a = std::round(x);

    return (double) factorial(a);
}


int main() {

//    Vec a;
//    for (double i = 0; i < 16; ++i) {
//        a.push_back(i);
//    }


//    int_to_bits(10);
//    int_to_bits(-10);
//    float_to_bits(1.0);
//    float_to_bits(-2.0);

//    double a = 2;
//    double b = 2;
//    double result0 = power(a, b);
//    double result1 = fast_power(a, b);
//    double result2 = fast_fast_power(a, b);
//    double result_real= std::pow(a,b);
//    std::cout <<  relative_error(result0,result_real) << std::endl;
//    std::cout <<  relative_error(result1,result_real) << std::endl;
//    std::cout <<  relative_error(result2,result_real) << std::endl;

//   std::cout << factorial((int)16) << std::endl;
//   std::cout << factorial((long)17) << std::endl;
//   std::cout << factorial((double)170) << std::endl;
//   std::cout << DBL_MAX << std::endl;
//    std::cout << LONG_MAX << std::endl;
//    std::cout << INT_MAX << std::endl;
//    std::cout << dbl_factorial(5.7) << std::endl;

    return 0;
}



