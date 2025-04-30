#include <iostream>
using namespace std;

/*Escreva um método que receba o ano e retorne 1 se for bissexto e 0 se não for.
Um ano é bissexto quando divisível por 4, mas não por 100. Um ano também é bissexto
quando divisível por 400.*/

bool anoBissexto(int ano){
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        return true;
    }
    return false;
}

int main() {
    
    int ano;
    
    cout << "Digite um ano: " << "\n";
    cin >> ano;
    
    cout << anoBissexto(ano) << endl;

    return 0;
}