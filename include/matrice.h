//
// Created by Charles MALHERBE and Arthur PERRET on 2022/11/22
//

#ifndef MATRICE_H
#define MATRICE_H

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class Matrice {
public:
    Matrice(int size);
    ~Matrice(void);
    int getSize(void);
    int getValue(int i, int j);
    void setValue(int i, int j, int value);
    bool checkTriangular(void);
    bool checkSquare(void);
    int determinant(void);
    Matrice solver(Vector vector);
    void print(void);
private:
    int size;
    int **value;
};

#endif
