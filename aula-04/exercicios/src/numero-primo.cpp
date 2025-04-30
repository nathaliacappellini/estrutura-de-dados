#include <iostream>
using namespace std;

/*Um número primo é qualquer inteiro divisível por si próprio e por 1. Escreva um método que receba um inteiro
positivo e, se este número for primo retorne 1, caso contrário retorne 0.*/

bool numeroPrimo(int numero){
    if (numero >= 1){
        int cont = 0;
        
        for(int i = 1; i <= numero; i++){
            if(numero % i == 0){
                cont ++;
            }
        }
        
        if (cont == 2){ // Se contar 2 é primo, se contar mais que 2 não é primo
            return true;
        }
    }
    return false;
}

int main() {
    int numero;
    
    cout << "Digite um número: " << "\n";
    cin >> numero;
    
    cout << numeroPrimo(numero) << "\n";

    return 0;
}