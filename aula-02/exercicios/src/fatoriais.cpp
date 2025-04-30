#include <iostream>
using namespace std;

/*Ler um vetor V de 10 elementos e obter um vetor W cujos componentes
são os fatoriais dos respectivos componentes de V.*/

int calcularFatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * calcularFatorial(n - 1);
}

int main()
{
    int V[10];
    long W[10];

    cout << "Digite os números oara preencher o vetor: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> V[i];
    }

    cout << "Vetor preenchido: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << V[i] << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        W[i] = calcularFatorial(V[i]);
    }

    cout << "Vetor com os fatoriais: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << W[i] << endl;
    }

    return 0;
}
