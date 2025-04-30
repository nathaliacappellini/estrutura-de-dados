#include <iostream>
using namespace std;

/*Criar uma matriz de ordem 4 e exibir a soma da diagonal principal.*/

int main()
{

    int matriz[4][4];
    int soma = 0;

    cout << "Digite os elementos da matriz: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                soma += matriz[i][j];
            }
        }
    }

    cout << "Matriz: \n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Soma da diagonal principal da matriz = " << soma << endl;

    return 0;
}