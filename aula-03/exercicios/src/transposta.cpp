#include <iostream>
using namespace std;

/*Criar uma matriz 2x3. Gerar e imprimir a transposta dessa matriz.
A matriz transposta é gerada trocando linha por coluna. */

int main()
{

    int matriz[2][3], matrizTransposta[3][2];

    cout << "Digite os elementos da matriz: \n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }

    cout << "\n Matriz: \n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n Matriz transposta: \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrizTransposta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}