//
// Created by Charles MALHERBE and Arthur PERRET on 2022/11/22
//

#include "include/matrice.h"

int main()
{
    int size;

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

    std::cout << ">> La matrice saisi est : " << std::endl;
    a.print();

    Vecteur b = Vecteur(size);
    std::cout << "Entrer les valeurs du vecteur" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cin >> value;
        b.setValue(i, value);
    }

    std::cout << ">> Le vecteur saisi est : " << std::endl;
    b.print();

    Matrice result = a.solver(b);
    std::cout << ">> La matrice calculé est : " << std::endl;

    result.print();
    return 0;
}