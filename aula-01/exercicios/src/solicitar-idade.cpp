#include <iostream>
using namespace std;

/*Escreva um programa que solicite ao usuário a idade de uma pessoa e informe se essa pessoa é
criança (0 a 11 anos), adolescente (12 a 17 anos), adulta (18 a 49 anos) ou idosa (a partir de 50 anos).*/

int main() {
    int idade;
    
    cout << "Digite a idade da pessoa: ";
    cin >> idade;
    
    if (idade < 0) {
        cout << "Idade inválida!" << endl;
    } else if (idade <= 11) {
        cout << "Essa pessoa é uma criança." << endl;
    } else if (idade <= 17) {
        cout << "Essa pessoa é um adolescente." << endl;
    } else if (idade <= 49) {
        cout << "Essa pessoa é um adulto." << endl;
    } else {
        cout << "Essa pessoa é um idoso." << endl;
    }
    
    return 0;
}