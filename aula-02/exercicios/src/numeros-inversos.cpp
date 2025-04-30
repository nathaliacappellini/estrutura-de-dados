#include <iostream>
using namespace std;

/*Fazer um programa que leia vários números inteiros e positivos. A leitura se encerra
quando encontrar um número negativo ou quando o vetor ficar completo. Sabe-se que o vetor
possui, no máximo, 10 elementos. Gerar e imprimir um vetor onde cada elemento é o inverso 
do correspondente do vetor original.*/

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numerosInteirosPositivos[10];
    int tamanhoArray = 0;

    cout << "Digite 10 números inteiros positivos: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> numerosInteirosPositivos[i];

        if (numerosInteirosPositivos[i] < 0)
        {
            break;
        }

        tamanhoArray++;
    }

    cout << "\nNúmeros inversos: " << endl;

    for (int i = 0; i < tamanhoArray; i++)
    {
        cout << numerosInteirosPositivos[i] * (-1) << endl;
    }

    return 0;
}