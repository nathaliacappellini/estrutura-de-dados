#include <iostream>
using namespace std;

// Implemente uma função recursiva que calcule o fatorial de um número inteiro n.
// O fatorial de n é definido como: n! = n * (n-1)! e fatorial(0) = 1.

int fatorial(int n) {
    if (n == 0) return 1;
    return n * fatorial(n - 1);
}

int main() {
    int n = 5;
    cout << "Fatorial de " << n << " = " << fatorial(n) << endl;
    return 0;
}
