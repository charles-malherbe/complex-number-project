//
// Created by Charles MALHERBE and Arthur PERRET on 2022/11/22
//

#include "../include/vecteur.h"

Vecteur::Vecteur(int size) {
    this->size = size;
    this->values = new int[size];
}

Vecteur::~Vecteur() {
    delete[] this->values;
}

int Vecteur::getValue(int i) {
    return this->values[i];
}

void Vecteur::setValue(int i, int value) {
    this->values[i] = value;
}

void Vecteur::print() {
    for (int i = 0; i < this->size; i++) {
        std::cout << this->values[i] << " ";
    }
    std::cout << std::endl;
}
