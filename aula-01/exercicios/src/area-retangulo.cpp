#include <iostream>
using namespace std;

/*Crie um programa que solicite ao usuário os lados de um retângulo e informe a sua área.*/

int main()
{

    double base, altura;

    cout << "Digite a base: " << endl;
    cin >> base;
    cout << "\nDigite a altura: " << endl;
    cin >> altura;

    double resultado = base * altura;

    cout << "Resultado = " << resultado << endl;

    return 0;
}