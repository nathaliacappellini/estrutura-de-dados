#include <iostream>
using namespace std;

/*Desenvolver um programa onde você entre via teclado com dois valores e após a digitação o
usuário escolha um seletor de opção (menu) com as seguintes opções:

- Multiplicação;
- Adição;
- Divisão;
- Subtração;
- Fim do processo;

Obs. Criar um método para cada opção e dentro do case chamar as funções respectivamente.*/

int multiplicação(int num1, int num2){
    return num1 * num2;
}

int adicao(int num1, int num2){
    return num1 + num2;
}

int subtracao(int num1, int num2){
    return num1 - num2;
}

int divisao(int num1, int num2){
    return num1 / num2;
}

int main() {
    
    int opcao;
    int num1, num2;
    
    cout << "Escolha uma opção: 1.Multiplicação | 2.Adição | 3.Subtração | 4.Divisão | 5.Fim do Processo" << "\n";
    cin >> opcao;
    
    switch(opcao){
        case 1:
            cout << "Entre com dois números: " << "\n";
            cin >> num1 >> num2;
            cout << "Multiplicação: " << multiplicação(num1, num2);
            break;
        case 2:
            cout << "Entre com dois números: " << "\n";
            cin >> num1 >> num2;
            cout << "Adição: " << adicao(num1, num2);
            break;
        case 3:
            cout << "Entre com dois números: " << "\n";
            cin >> num1 >> num2;
            cout << "Subtração: " << subtracao(num1, num2);
            break;
        case 4:
            cout << "Entre com dois números: " << "\n";
            cin >> num1 >> num2;
            cout << "Divisão: " << divisao(num1, num2);
            break;
        case 5:
            cout << "Fim!" << "\n";
            break;
    }

    return 0;
}