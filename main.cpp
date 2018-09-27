#include <iostream>
#include <cmath>

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
    double exp = std::exp(std::log(b));
    return std::exp(std::log(a) * exp);
}

double relative_error(double a, double b) {
    return std::abs(a - b) / std::abs(a);
}

template<class T>
T factorial(T x) {
    T res = 1;
    for (int i = 1; i <= x; ++i) {
        res= i * res;
    }
    return res;
}

template<class T>
double dbl_factorial(T x){
    return 0;
}


int main() {

//    int_to_bits(10);
//    int_to_bits(-10);
//    float_to_bits(1.0);
//    float_to_bits(-2.0);

//    double a = 50;
//    double b = 150;
//    double result0 = power(a, b);
//    double result1 = fast_power(a, b);
//    double result2 = fast_fast_power(a, b);
//    double result_real= std::pow(a,b);
//    std::cout <<  relative_error(result0,result_real) << std::endl;
//    std::cout <<  relative_error(result1,result_real) << std::endl;
//    std::cout <<  relative_error(result2,result_real) << std::endl;

    std::cout << factorial(5) << std::endl;

    return 0;
}



