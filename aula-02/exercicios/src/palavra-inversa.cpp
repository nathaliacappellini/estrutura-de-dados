#include <iostream>
using namespace std;

/*Criar um programa que crie um vetor com 10 posições e carregue com uma palavra,
depois imprima o vetor de uma maneira que exiba a palavra ao contrário (ex. casa...asac)*/

int main()
{
    char vetor[10];
    int tamanhoPalavra;

    cout << "Qual o tamanho da palavra? (Máx 10 caracteres)" << endl;
    cin >> tamanhoPalavra;

    cout << "Digite a palavra: " << endl;
    for (int i = 0; i < tamanhoPalavra; i++)
    {
        cin >> vetor[i];
    }

    cout << "Palavra invertida: " << endl;
    for (int i = tamanhoPalavra - 1; i >= 0; i--)
    {
        cout << vetor[i];
    }
    cout << endl;

    return 0;
}
