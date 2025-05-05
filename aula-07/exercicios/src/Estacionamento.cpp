#include <iostream>
#include <string>
using namespace std;

/*Crie uma classe Estacionamento que tenha como atributos da classe dia, horaEntrada, horaSaida,
e dois métodos o primeiro Solicita os dados para o usuário e o outro método calcule o valor a ser
pago sendo que cada hora equivale a 5 reais.*/

class Estacionamento
{

private:
    int dia;
    int horaEntrada, horaSaida;

public:
    void solicitarDados()
    {
        cout << "Digite o dia: ";
        cin >> dia;
        cout << "Digite o horario de entrada: ";
        cin >> horaEntrada;
        cout << "Digite o horario de saida: ";
        cin >> horaSaida;
    }

    int calcularValor()
    {
        // Verifica se as horas são negativas
        if (horaEntrada < 0 || horaSaida < 0)
        {
            return 0;
        }

        int tempoEstacionado;

        if (horaSaida >= horaEntrada)
        {
            tempoEstacionado = horaSaida - horaEntrada;
        }
        else
        {
            // Trata a virada de dia
            tempoEstacionado = (24 - horaEntrada) + horaSaida;
        }

        int valor = tempoEstacionado * 5;
        return valor;
    }
};

int main()
{
    Estacionamento estac;
    estac.solicitarDados(); // Solicita os dados do cliente
    int valor = estac.calcularValor();

    cout << "Valor a pagar: R$" << valor << endl;

    return 0;
}