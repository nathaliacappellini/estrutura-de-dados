#include <iostream>
using namespace std;

/*Escreva um programa que solicite ao usuário um valor inteiro e informe se esse número é par ou ímpar.*/

int main()
{

    int numeroInteiro;
    string sair;

    do
    {
        cout << "Digite um número inteiro para saber se é par ou ímpar: \n";
        cin >> numeroInteiro;

        if (numeroInteiro % 2 == 0)
        {
            cout << "O número é par! \n";
        }
        else
        {
            cout << "O número é ímpar! \n";
        }

        cout << "Continuar? S/N \n";
        cin >> sair;
    } while (sair != "N");

    return 0;
}
