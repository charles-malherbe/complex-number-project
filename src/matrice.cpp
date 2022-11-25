//
// Created by Charles MALHERBE and Arthur PERRET on 2022/11/22
//

#include "../include/matrice.h"

/**
 * @brief Construct a new Matrix
 *
 * @param size
 */
Matrice::Matrice(int size) {
    this->size = size;
    this->value = new int*[size];
    for (int i = 0; i < size; i++) {
        this->value[i] = new int[size];
    }
}

/**
 * @brief Destroy the matrix
 *
 */
Matrice::~Matrice(void) {
    for (int i = 0; i < this->size; i++) {
        delete[] this->value[i];
    }
    delete[] this->value;
}

/**
 * @brief Get the size matrix
 *
 * @return int
 */
int Matrice::getSize(void) {
    return this->size;
}

/**
 * @brief Get the Value object
 *
 * @param i
 * @param j
 * @return int
 */
int Matrice::getValue(int i, int j) {
    return this->value[i][j];
}

/**
 * @brief Set the Value object
 *
 * @param i
 * @param j
 * @param value
 */
void Matrice::setValue(int i, int j, int value) {
    this->value[i][j] = value;
}

/**
 * @brief Check if matrix is a triangular
 *
 */
bool Matrice::checkTriangular(void) {
    for (int i = 0; i < this->size; i++) {
        for (int j = 0; j < this->size; j++) {
            if (i > j && this->value[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

/**
 * @brief Check if matrix is a square
 *
 */
bool Matrice::checkSquare(void) {
    if (this->size%2 == 0)
        return true;
    else
        return false;
}

/**
 * @brief Find determinant of a matrix
 *
 */
int Matrice::determinant(void) {
    int result = 0;
    if (this->size == 1) {
        return this->value[0][0];
    } else if (this->size == 2) {
        return this->value[0][0]*this->value[1][1] - this->value[0][1]*this->value[1][0];
    } else {
        for (int i = 0; i < this->size; i++) {
            Matrice subMatrice(this->size-1);
            for (int j = 0; j < this->size-1; j++) {
                for (int k = 0; k < this->size-1; k++) {
                    if (k < i) {
                        subMatrice.setValue(j, k, this->value[j+1][k]);
                    } else {
                        subMatrice.setValue(j, k, this->value[j+1][k+1]);
                    }
                }
            }
            result += pow(-1, i)*this->value[0][i]*subMatrice.determinant();
        }
    }
    return result;
}

/**
 * @brief Solve linear equation
 *
 */
Matrice Matrice::solver(Vecteur v) {
    Matrice result(this->size);
    for (int i = 0; i < this->size; i++) {
        result.setValue(i, 0, v.getValue(i)/this->value[i][i]);
    }
    return result;
}

/**
 * @brief Print the matrix
 *
 */
void Matrice::print(void) {
    for (int i = 0; i < this->size; i++) {
        for (int j = 0; j < this->size; j++) {
            std::cout << this->value[i][j] << " ";
        }
        std::cout << std::endl;
    }
}