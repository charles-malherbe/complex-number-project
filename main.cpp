//
// Created by Charles MALHERBE and Arthur PERRET on 2022/11/22
//

#include "Matrice.h"

int main()
{
    int size;

    cout << "Entrer la taille de la matrice" << endl;
    cin >> size;
    Matrice a = Matrice(size);
    cout << "Entrer les valeurs de la matrice" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> v;
            a.set(i, j, v);
        }
    }
    a.print();
}