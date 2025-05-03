#include <iostream>
using namespace std;

/*Criar um algoritmo de bubble sort*/

void bubbleSort(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        bool trocou = false;
        for (int j = 0; j < tamanho - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Troca manual
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = true;
            }
        }
        if (!trocou) break; // Otimização
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, tamanho);

    cout << "Array ordenado: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}