#include <iostream>
using namespace std;

// Crie uma função recursiva que calcule a potência de um número inteiro base elevado a um expoente inteiro.
// Definição: base^expoente = base * base^(expoente - 1), sendo que base^0 = 1.

int potencia(int base, int expoente) {
    if (expoente == 0) return 1;
    return base * potencia(base, expoente - 1);
}

int main() {
    int base = 2, expoente = 4;
    cout << base << "^" << expoente << " = " << potencia(base, expoente) << endl;
    return 0;
}
