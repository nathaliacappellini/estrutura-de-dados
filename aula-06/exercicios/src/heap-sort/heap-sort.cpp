#include <iostream>
using namespace std;

/*Crie um algoritmo de Heap Sort*/

void ajustarHeap(int vetor[], int tam, int raiz) {
    int maior = raiz;
    int esq = 2 * raiz + 1;
    int dir = 2 * raiz + 2;

    if (esq < tam && vetor[esq] > vetor[maior])
        maior = esq;

    if (dir < tam && vetor[dir] > vetor[maior])
        maior = dir;

    if (maior != raiz) {
        swap(vetor[raiz], vetor[maior]);
        ajustarHeap(vetor, tam, maior);
    }
}

void heapSort(int vetor[], int tam) {
    // Constrói o heap máximo
    for (int i = tam/2 - 1; i >= 0; i--)
        ajustarHeap(vetor, tam, i);

    // Extrai elementos do heap
    for (int i = tam-1; i > 0; i--) {
        swap(vetor[0], vetor[i]);
        ajustarHeap(vetor, i, 0);
    }
}

int main() {
    int dados[] = {12, 11, 13, 5, 6, 7};
    int tamanho = sizeof(dados)/sizeof(dados[0]);

    heapSort(dados, tamanho);

    cout << "Vetor ordenado:";
    for (int i = 0; i < tamanho; i++)
        cout << " " << dados[i];
    
    return 0;
}