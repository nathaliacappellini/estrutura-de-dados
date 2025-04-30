#include <stdio.h>
#include <iostream>
using namespace std;

/*Fazer um programa que digite vários números no vetor de tamanho máximo de 100 elementos,
até digitar o número “0”. Imprimir quantos números iguais ao último número foram lidos. O
limite de números é 100. Sem considerar o “0” como último número.*/

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int elementos[100];
    int tamanhoArray = 0;
    int numerosIguais = 0;

    cout << "Digite os números (Digite 0 para sair): " << endl;

    for (int i = 0; i < 100; i++)
    {
        cin >> elementos[i];
        if (elementos[i] == 0)
        {
            break;
        }
        tamanhoArray++;
    }

    cout << "\nNúmeros iguais ao último que foi digitado: " << endl;

    for (int i = 0; i < tamanhoArray - 1; i++)
    {
        if (elementos[i] == elementos[tamanhoArray - 1])
        {
            numerosIguais++;
        }
    }

    cout << numerosIguais << endl;

    return 0;
}