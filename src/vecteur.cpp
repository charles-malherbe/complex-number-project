//
// Created by Charles MALHERBE and Arthur PERRET on 2022/11/22
//

#include "../include/vecteur.h"

/**
 * @brief Construct a new Vecteur object
 *
 * @param size
 */
Vecteur::Vecteur(int size) {
    this->size = size;
    this->values = new int[size];
}

/**
 * @brief Destroy the Vecteur object
 *
 */
Vecteur::~Vecteur() {
}

/**
 * @brief Get the value of the object
 *
 * @return int
 */
int Vecteur::getValue(int i) {
    return this->values[i];
}

/**
 * @brief Set the value of the object
 *
 * @param i
 * @param value
 */
void Vecteur::setValue(int i, int value) {
    this->values[i] = value;
}

/**
 * @brief Print the matrix
 *
 */
void Vecteur::print() {
    for (int i = 0; i < this->size; i++) {
        std::cout << this->values[i] << " ";
    }
    std::cout << std::endl;
}
