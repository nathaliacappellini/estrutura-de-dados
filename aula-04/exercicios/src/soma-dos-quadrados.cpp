#include <iostream>
using namespace std;

/*Calcule a soma dos quadrados de dois números fornecidos pelo usuário.
Trabalhe com chamada de métodos usadas como argumento de outros métodos.

Dica: você vai criar 3 métodos onde duas delas estarão dentro de uma.*/

int quadrado(int numero)
{
    return numero * numero;
}

int somaQuadrados(int numero1, int numero2)
{
    return quadrado(numero1) + quadrado(numero2);
}

int main()
{

    int numero1, numero2;

    cout << "Digite o número 1:" << "\n";
    cin >> numero1;
    cout << "Digite o número 2:" << "\n";
    cin >> numero2;

    cout << "A soma dos quadrados dos números é = " << somaQuadrados(numero1, numero2) << endl;

    return 0;
}