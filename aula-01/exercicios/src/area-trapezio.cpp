#include <iostream>
#include <cmath>
using namespace std;

/*Crie um programa que solicite ao usuário os lados de um trapézio e informe a sua área.*/

int main()
{

    double lado, baseMaior, baseMenor;

    cout << "Digite o lado: \n"; 
    cin >> lado;
    cout << "Digite a base maior: \n"; 
    cin >> baseMaior;
    cout << "Digite base menor: \n"; 
    cin >> baseMenor;

    double altura = sqrt(pow(lado, 2) - (pow((baseMaior - baseMenor), 2)) / 4);
    double area = ((baseMaior + baseMenor) * altura) / 2;

    cout << "Área = " << area;

    return 0;
}
