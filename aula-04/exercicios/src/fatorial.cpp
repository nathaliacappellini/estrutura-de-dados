#include <iostream>
using namespace std;

/*Gere um método que trabalhe com fatorial, lembrando o fatorial
é ele vezes a quantidade dele mesmo. Ex. fat 5 = 5*4*3*2*1.*/

int fatorial(int numero)
{
    if (numero == 0 || numero == 1)
    {
        return 1;
    }
    return numero * fatorial(numero - 1);
}

int main()
{
    int numero;

    cout << "Digite um número: " << endl;
    cin >> numero;

    cout << fatorial(numero) << endl;

    return 0;
}