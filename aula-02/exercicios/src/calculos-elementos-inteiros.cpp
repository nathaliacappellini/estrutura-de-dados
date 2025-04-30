#include <iostream>
using namespace std;

/*Criar um programa que leia dados de um vetor de 12 elementos inteiros. Imprima
o maior e menor sem ordenar, o percentual de números pares e a média dos elementos do vetor.*/

int main()
{
    int elementos[12];
    int maiorElemento = 0;
    int menorElemento = 10000000;
    double soma = 0;
    double numerosPares = 0;

    // Entrada de valores
    cout << "Digite 12 números inteiros: " << endl;
    for (int i = 0; i < 12; i++)
    {
        cin >> elementos[i];
    }

    // Maior e Menor elemento
    for (int i = 0; i < 12; i++)
    {
        if (elementos[i] > maiorElemento)
        {
            maiorElemento = elementos[i];
        }
        else if (elementos[i] < menorElemento)
        {
            menorElemento = elementos[i];
        }
    }

    // Quantidade de números pares e cálculo de percentual
    for (int i = 0; i < 12; i++)
    {
        if (elementos[i] % 2 == 0)
        {
            numerosPares++;
        }
    }

    double percentualNumerosPares = (numerosPares / 12) * 100; // Calculo do percentual

    // Soma e média dos elementos do vetor
    for (int i = 0; i < 12; i++)
    {
        soma += elementos[i];
    }

    double media = soma / 12; // Média

    // Mostrar resultados
    cout << "Maior elemento = " << maiorElemento << endl;
    cout << "Menor elemento = " << menorElemento << endl;
    cout << "Percentual de números pares = " << percentualNumerosPares << "%" << endl;
    cout << "Média aritmética = " << media << endl;

    return 0;
}
