//
// Created by Charles MALHERBE and Arthur PERRET on 2022/11/22
//

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

class Vecteur {
    private:
        int size;
        int *values;
    public:
        Vecteur(int size);
        ~Vecteur();
        int getValue(int i);
        void setValue(int i, int value);
        void print(void);
};

#endif
