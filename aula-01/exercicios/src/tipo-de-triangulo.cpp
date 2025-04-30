#include <iostream>
using namespace std;

/*Crie um programa que solicite ao usuário os três ângulos de um triângulo e 
informe se este é um triângulo equilátero, isósceles ou escaleno.*/

int main() {
    int angulo1, angulo2, angulo3;
    
    cout << "Digite os três ângulos do triângulo: ";
    cin >> angulo1 >> angulo2 >> angulo3;
    
    if (angulo1 + angulo2 + angulo3 != 180) {
        cout << "Os ângulos não formam um triângulo válido." << endl;
    } else if (angulo1 == angulo2 && angulo2 == angulo3) {
        cout << "O triângulo é equilátero." << endl;
    } else if (angulo1 == angulo2 || angulo2 == angulo3 || angulo1 == angulo3) {
        cout << "O triângulo é isósceles." << endl;
    } else {
        cout << "O triângulo é escaleno." << endl;
    }
    
    return 0;
}
