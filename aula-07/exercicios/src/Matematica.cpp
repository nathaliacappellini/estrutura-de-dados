#include <iostream>
using namespace std;

/*Criar uma classe matemática que contenham dois atributos da classe A, B inteiros e os seguintes métodos:
Entrada de dados; soma, multiplicação, subtração e divisão (fazer o tratamento da divisão, não dividir por zero)*/

class Matematica
{

private:
    int A;
    int B;

public:
    void entradaDados(int a, int b)
    {
        if (b == 0)
        {
            cout << "Erro: o número 2 não pode ser zero!";
            return;
        }
        this->A = a;
        this->B = b;
    }

    int soma()
    {
        return this->A + this->B;
    }

    int multiplicacao()
    {
        return this->A * this->B;
    }

    int subtracao()
    {
        return this->A - this->B;
    }

    float divisao()
    {
        if (this->B == 0)
        {
            cout << "Erro: Divisão por zero!" << endl;
            return 0.0f;
        }
        return static_cast<float>(this->A) / this->B;
    }
};

int main()
{
    Matematica matematica;
    int a, b;

    cout << " " << endl;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;

    // Passando valores para os atributos da classe
    matematica.entradaDados(a, b);

    // Chamando os métodos
    cout << " " << endl;
    cout << "Operações Matemáticas:" << endl;
    cout << "----------------------" << endl;
    cout << "Soma: " << a << " + " << b << " = " << matematica.soma() << endl;
    cout << "Subtracao: " << a << " - " << b << " = " << matematica.subtracao() << endl;
    cout << "Multiplicacao: " << a << " * " << b << " = " << matematica.multiplicacao() << endl;
    cout << "Divisao: " << a << " / " << b << " = " << matematica.divisao() << endl;

    return 0;
}