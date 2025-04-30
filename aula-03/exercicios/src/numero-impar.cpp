#include <iostream>
using namespace std;

/*Criar uma matriz de ordem 5 e imprima: toda a matriz e depois os números que se encontram
em posições cuja a linha mais a coluna formam um número ímpar. */

int main()
{

    int matriz[5][5];

    cout << "Digite os elementos da matriz: \n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matriz[i][j];
        }
    }

    cout << "\n Matriz: \n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n Números nas posições cujo linha + coluna seja ímpar: \n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) % 2 != 0)
            {
                cout << matriz[i][j] << " ";
            }
        }
    }

    return 0;
}