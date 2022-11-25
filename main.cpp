//
// Created by Charles MALHERBE and Arthur PERRET on 2022/11/22
//

#include "include/matrice.h"

int main()
{
    int size;

    std::cout << "Entrer la taille de la matrice" << std::endl;
    std::cin >> size;
    Matrice a = Matrice(size);
    std::cout << "Entrer les valeurs de la matrice" << std::endl;
    int value;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cin >> value;
            a.setValue(i, j, value);
        }
    }
    a.print();
}