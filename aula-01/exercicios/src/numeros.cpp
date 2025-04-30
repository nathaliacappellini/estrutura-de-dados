#include <iostream>
using namespace std;

/*Escreva um programa que solicite ao usuário quatro números e mostre na tela o maior,
o menor e a média aritmética dos números digitados.*/

int main()
{
    double numeros[4];

    // Entrando com os quatro números
    cout << "Digite quatro números: " << endl;

    for (int i = 0; i < 4; i++)
    {
        cin >> numeros[i];
    }

    // Calculando
    double maior = 0;
    double menor = 10000;

    for (int i = 0; i < 4; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    double media = (maior + menor) / 2;
    cout << "Maior número = " << maior << ", menor número = " << menor << ", média = " << media;

    return 0;
}