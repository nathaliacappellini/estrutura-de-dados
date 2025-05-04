#include <iostream>
using namespace std;

/*Crie um algoritmo de merge sort*/

void merge(int lista[], int comeco, int meio, int fim)
{
    // Tamanho dos subarrays
    int tam_esq = meio - comeco + 1;
    int tam_dir = fim - meio;

    // Criando arrays temporários
    int esquerda[tam_esq], direita[tam_dir];

    // Copiando dados
    for (int i = 0; i < tam_esq; i++)
        esquerda[i] = lista[comeco + i];
    for (int j = 0; j < tam_dir; j++)
        direita[j] = lista[meio + 1 + j];

    // Merge dos arrays
    int i = 0, j = 0, k = comeco;

    while (i < tam_esq && j < tam_dir)
    {
        if (esquerda[i] <= direita[j])
        {
            lista[k] = esquerda[i];
            i++;
        }
        else
        {
            lista[k] = direita[j];
            j++;
        }
        k++;
    }

    // Elementos restantes
    while (i < tam_esq)
    {
        lista[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < tam_dir)
    {
        lista[k] = direita[j];
        j++;
        k++;
    }
}

void mergeSort(int lista[], int comeco, int fim)
{
    if (comeco < fim)
    {
        int meio = comeco + (fim - comeco) / 2;

        mergeSort(lista, comeco, meio);
        mergeSort(lista, meio + 1, fim);

        merge(lista, comeco, meio, fim);
    }
}

int main()
{
    int dados[] = {38, 27, 43, 3, 9, 82, 10};
    int tamanho = sizeof(dados) / sizeof(dados[0]);

    mergeSort(dados, 0, tamanho - 1);

    cout << "Lista ordenada: ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << dados[i] << " ";
    }

    return 0;
}