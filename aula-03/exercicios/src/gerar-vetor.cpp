#include <iostream>
using namespace std;

/*Ler valores inteiros para a matriz A[3][5]. Gerar e imprimir o vetor Soma_Linha,
onde cada elemento é a soma dos elementos de uma linha da matriz A. Faça o trecho que
gera a matriz separadamente da entrada e saída. */

int main()
{

    int A[3][5], somaLinha[3];
    int soma = 0;

    cout << "Digite os elementos da matriz: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma += A[i][j];
        }
        somaLinha[i] = soma;
        soma = 0;
    }

    cout << "Matriz: \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Vetor com a soma dos valores das linhas: \n";

    for (int i = 0; i < 3; i++)
    {
        cout << somaLinha[i] << "\t";
    }

    return 0;
}
