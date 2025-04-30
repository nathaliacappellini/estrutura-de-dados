#include <iostream>
using namespace std;

/*Escreva um programa que solicite ao usuário um ano qualquer e informe se esse ano é bissexto.
Um ano é considerado bissexto se ele for divisível por quatro, mas não por 100. Ou então se ele 
for divisível por 400.*/

int main() {
    int ano;
    
    cout << "Digite um ano: ";
    cin >> ano;
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano " << ano << " é bissexto." << endl;
    } else {
        cout << "O ano " << ano << " não é bissexto." << endl;
    }
    
    return 0;
}