#include <iostream>
#include <string>
using namespace std;

/*Crie uma classe chamada Triangulo com variáveis da classe e os métodos que são 2, o primeiro
é para ver se é triângulo e o segundo é para ver que tipo de triângulo é, os três abaixo:

Escaleno – os 3 lados diferentes

Isósceles – 2 lados iguais

Eqüilátero – os 3 lados iguais*/

class Triangulo
{

private:
    int ladoA, ladoB, ladoC;

public:
    void setLados(int a, int b, int c)
    {
        ladoA = a;
        ladoB = b;
        ladoC = c;
    }

    bool ehTriangulo()
    {
        return (ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA);
    }

    string tipoTriangulo()
    {
        if (ladoA == ladoB && ladoB == ladoC)
        {
            return "Equilatero.";
        }
        else if (ladoA == ladoB || ladoB == ladoC || ladoC == ladoA)
        {
            return "Isosceles.";
        }
        return "Escaleno.";
    }
};

int main()
{
    Triangulo triangulo;
    int a, b, c;

    cout << "Digite os lados do triangulo (a, b, c): ";
    cin >> a >> b >> c;

    triangulo.setLados(a, b, c);

    if (triangulo.ehTriangulo())
    {
        cout << "Tipo: " << triangulo.tipoTriangulo() << endl;
    }
    else
    {
        cout << "Nao e um triangulo valido!" << endl;
    }

    return 0;
}