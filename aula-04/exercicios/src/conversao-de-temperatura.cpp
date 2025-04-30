#include <iostream>
using namespace std;

/*Desenvolva um programa que tenha dois métodos fahrenheit e celsius, onde você entra
com um valor em fahrenheit e transforma em celsius e vice e versa.

Celsius = (fahrenheit – 32) * 5/9;
Fahrenheit = (Celsius * 9/5) + 32;*/

double paraFahrenheit(double celsius){
    double valorConvetido = (celsius * 9/5) + 32;
    return valorConvetido;
}

double paraCelsius(double fahrenheit){
    double valorConvetido = (fahrenheit - 32) * 5/9;
    return valorConvetido;
}

int main() {
    
    double celsius, fahrenheit;
    
    cout << "Digite a temperatura em celsius para converter para fahrenheit: " << "\n";
    cin >> celsius;
    
    cout << "Temperatura convertida: " << paraFahrenheit(celsius) << "\n";
    
    cout << "Digite a temperatura em fahrenheit para converter para celsius: " << "\n";
    cin >> fahrenheit;
    
    cout << "Temperatura convertida: " << paraCelsius(fahrenheit) << "\n";
    
    return 0;
}