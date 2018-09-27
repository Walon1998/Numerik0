
#include <iostream>

#ifndef NUMERIK0_VEC_H
#define NUMERIK0_VEC_H


class Vec {
    int capacity;
    int size;
    double *data;

public:

    Vec() {
        this->capacity = 10;
        this->size = 0;
        double *data;
        this->data = new double[10];


    }

    void push_back(double x) {
//        std::cout << "next" << std::endl;

        if (size < capacity) {

            data[size] = x;
            this->size++;

        } else {
            double *newarray;
            newarray = new double[2 * capacity];
            for (int i = 0; i < capacity; ++i) {
                newarray[i] = data[i];
            }
            newarray[capacity] = x;
            delete[] data;
            data = newarray;
            capacity = capacity * 2;

        }

//        for (int j = 0; j < capacity; ++j) {
//
//            std::cout << data[j] << std::endl;
//        }


    }

};


#endif //NUMERIK0_VEC_H
