#include <iostream>
using namespace std;

/*Criar um vetor com 8 elementos e ordená-los.*/

int main() {
    int numeros[8] = {10, 5, 3, 8, 6, 1, 9, 2};
    
    cout << "Vetor antes da ordenação: ";
    for (int i = 0; i < 8; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 8 - 1; ++i) {
        for (int j = 0; j < 8 - i - 1; ++j) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    cout << "Vetor após a ordenação: ";
    for (int i = 0; i < 8; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
