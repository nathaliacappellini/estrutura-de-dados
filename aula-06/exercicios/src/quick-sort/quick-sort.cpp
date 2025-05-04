#include <iostream>
using namespace std;

/*Crie um algoritmo de Quick Sort*/

// Função que organiza os elementos em relação ao pivô
int particionar(int lista[], int inicio, int fim)
{
    int pivo = lista[inicio]; // Pivô é o primeiro elemento
    int esquerda = inicio + 1;
    int direita = fim;

    while (true)
    {
        // Encontra elemento maior que o pivô
        while (esquerda <= direita && lista[esquerda] <= pivo)
            esquerda++;

        // Encontra elemento menor que o pivô
        while (lista[direita] >= pivo && direita >= esquerda)
            direita--;

        if (direita < esquerda)
            break;

        // Troca os elementos fora de ordem
        int temp = lista[esquerda];
        lista[esquerda] = lista[direita];
        lista[direita] = temp;
    }

    // Coloca o pivô na posição correta
    int temp = lista[inicio];
    lista[inicio] = lista[direita];
    lista[direita] = temp;

    return direita;
}

// Função principal do QuickSort
void quickSort(int lista[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int posicaoPivo = particionar(lista, inicio, fim);

        // Ordena os elementos antes e depois do pivô
        quickSort(lista, inicio, posicaoPivo - 1);
        quickSort(lista, posicaoPivo + 1, fim);
    }
}

int main()
{
    int numeros[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    quickSort(numeros, 0, tamanho - 1);

    cout << "Lista ordenada: ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}