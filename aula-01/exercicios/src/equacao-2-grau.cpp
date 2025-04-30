#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

/*Crie um programa que solicite ao usuário os três coeficientes de uma equação do segundo grau
e informe os valores de x’ e x’’.*/

int main()
{
    // Setando para português
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Criando variáveis
    double coeficiente1, coeficiente2, coeficiente3;

    // Pedindo para o usuário inserir os coeficientes da equação
    cout << "Insira os três coeficientes da equação para calcular: " << endl;
    cin >> coeficiente1 >> coeficiente2 >> coeficiente3;

    // Calculando o delta
    double delta = pow(coeficiente2, 2) - (4 * coeficiente1 * coeficiente3);

    // Verificando se há raízes reais
    if (delta < 0)
    {
        cout << "A equação não possui raízes reais." << endl;
    }
    else
    {
        double x1 = (-coeficiente2 + sqrt(delta)) / (2 * coeficiente1);
        double x2 = (-coeficiente2 - sqrt(delta)) / (2 * coeficiente1);

        // Printando os resultados
        cout << "x' = " << x1 << endl;
        cout << "x'' = " << x2 << endl;
    }
    return 0;
}
