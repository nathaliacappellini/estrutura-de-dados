#include <iostream>
using namespace std;

/*Ler os elementos de uma matriz de ordem 6 e imprima o produto
dos elementos que estão abaixo da diagonal principal. */

int main()
{

    int matriz[6][6];
    long long int produto = 1;

    cout << "Digite os elementos da matriz: \n";

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i > j)
            {
                produto *= matriz[i][j];
            }
        }
    }

    cout << "\n Matriz: \n";

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n Produto de todos os elementos abaixo da diagonal principal = " << produto << endl;

    return 0;
}