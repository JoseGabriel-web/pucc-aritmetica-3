
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void imprimirVector(const vector<int> &arreglo)
{
    for (int i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
}

int main()
{

    while (true)
    {

        int d;
        cout << "Ingrese un numero: ";
        cin >> d;

        vector<int> numerosPares;
        vector<int> numerosImpares;

        for (int i = 0; i < d; i++)
        {
            if (i % 2 == 0)
            {
                numerosPares.push_back(i);
            }
            else
            {
                numerosImpares.push_back(i);
            }
        }

        cout << "Los números pares ingresados son: ";
        imprimirVector(numerosPares);
        cout << "Los números impares ingresados son: ";
        imprimirVector(numerosImpares);
        string repetir;
        cout << "Desea repetir? si o no ";
        cin >> repetir;

        if (repetir == string("no"))
        {
            return 0;
        }
    }
}