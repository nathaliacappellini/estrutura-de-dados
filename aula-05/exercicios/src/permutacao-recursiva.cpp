#include <iostream>
using namespace std;

// Implemente uma função que calcule o número de permutações possíveis de n elementos distintos.
// Dica: utilize a função recursiva de fatorial, pois P(n) = n!

int fatorial(int n) {
    if (n == 0) return 1;
    return n * fatorial(n - 1);
}

int permutacao(int n) {
    return fatorial(n);
}

int main() {
    int n = 6;
    cout << "Número de permutações de " << n << " elementos: " << permutacao(n) << endl;
    return 0;
}
