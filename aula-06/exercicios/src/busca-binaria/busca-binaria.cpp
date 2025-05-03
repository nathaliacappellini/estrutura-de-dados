#include <iostream>
using namespace std;

/*Criar um algoritmo de busca binária*/

int buscaBinaria(int arr[], int tamanho, int alvo) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (arr[meio] == alvo) {
            return meio; 
        } else if (arr[meio] < alvo) {
            esquerda = meio + 1; // Busca na metade superior
        } else {
            direita = meio - 1; // Busca na metade inferior
        }
    }
    return -1; // Elemento não encontrado
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo = 7;

    int resultado = buscaBinaria(arr, tamanho, alvo);

    if (resultado != -1) {
        cout << "Elemento encontrado no indice: " << resultado << endl;
    } else {
        cout << "Elemento nao encontrado." << endl;
    }
    return 0;
}