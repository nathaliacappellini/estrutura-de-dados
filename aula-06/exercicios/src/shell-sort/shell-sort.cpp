#include <iostream>
using namespace std;

/*Criar um algoritmo de Shell Sort*/

void shellSort(int arr[], int tamanho) {
    for (int gap = tamanho / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < tamanho; ++i) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2, 1, 9, 6};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    shellSort(arr, tamanho);

    cout << "Array ordenado: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}