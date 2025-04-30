#include <iostream>
#include <cmath>
using namespace std;

/*Crie um programa que solicite ao usuário os lados de um triângulo e informe a sua área.*/

void mensagem()
{
    cout << "\n Selecione o tipo de triângulo: \n";
    cout << "-------------------------------\n";
    cout << "1 - Isósceles\n";
    cout << "2 - Equilátero\n";
    cout << "3 - Retângulo\n";
}

double calculoIsosceles(double base, double lados)
{
    double altura = sqrt(pow(lados, 2) - (pow(base, 2) / 4));
    double area = (base * altura) / 2;
    return area;
}

double calculoEquilatero(double lado)
{
    double area = (sqrt(3) * pow(lado, 2)) / 4;
    return area;
}

double calculoRetangulo(double base, double altura)
{
    double area = (base * altura) / 2;
    return area;
}

int main()
{

    int opcao;
    mensagem();
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        double ladosIguais, base;

        cout << "Dois lados do triângulo isóceles são iguais, digite o tamanho desse lado: \n";
        cin >> ladosIguais;
        cout << "Digite o tamanho da base: \n";
        cin >> base;

        cout << "Resultado = " << calculoIsosceles(base, ladosIguais) << endl;
        break;

    case 2:
        double lado;

        cout << "Digite o tamanho do lado: \n";
        cin >> lado;

        cout << "Resultado = " << calculoEquilatero(lado) << endl;
        break;

    case 3:
        double base2, altura;

        cout << "Digite o tamanho da base: \n";
        cin >> base2;
        cout << "Digite o tamanho da altura: \n";
        cin >> altura;

        cout << "Resultado = " << calculoRetangulo(base2, altura) << endl;
        break;

    default:
        cout << "Escolha uma opção válida!" << endl;
        break;
    }

    return 0;
}