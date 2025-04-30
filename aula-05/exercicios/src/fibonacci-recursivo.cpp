#include <iostream>
using namespace std;

// Implemente uma função recursiva que calcule o n-ésimo termo da sequência de Fibonacci.
// A sequência é definida por: F(0) = 0, F(1) = 1, e F(n) = F(n-1) + F(n-2) para n > 1.

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 7;
    cout << "Fibonacci de " << n << " = " << fibonacci(n) << endl;
    return 0;
}
