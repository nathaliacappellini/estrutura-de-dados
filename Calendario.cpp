// To-do: Arrumar pastas e colocar essa classe na pasta certa.

#include <stdio.h>
#include <iostream>
using namespace std;

class Calendario
{

public:
    int dia, mes, ano;

    Calendario(int ano, int mes, int dia)
    {
        this->ano = ano;
        this->mes = mes;
        this->dia = dia;
    }

    bool anoBissexto(int ano)
    {

        if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
            return true;
        else
            return false;
    }

    int diaSemana(int ano, int mes, int dia)
    {

        int f = ano + dia + 3 * (mes - 1) - 1;

        if (mes < 3)
            ano--;

        else
            f -= int(0.4 * mes + 2.3);

        f += int(ano / 4) - int((ano / 100 + 1) * 0.75);

        f %= 7;

        return f + 1;
    }

    void imprimirCalendario(int ano, int mes)
    {

        cout << "DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n";

        short TamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (anoBissexto(ano) == true)
        {

            TamanhoDoMes[1] = 29;
        }

        for (int j = 1; j < diaSemana(ano, mes, 1); j++)
            cout << '\t';

        for (int dia = 1; dia <= TamanhoDoMes[mes - 1]; dia++)
        {

            if (dia < 10)
                cout << '0' << dia << '\t';

            else
                cout << dia << '\t';

            if (diaSemana(ano, mes, dia) == 7)
                cout << '\n';
        }
    }
};

int main()
{
    Calendario cal(2025, 6, 27);

    cout << endl;
    cout << "O ano " << cal.ano << " e bissexto? (1-sim/0-nao) " << cal.anoBissexto(cal.ano) << endl;
    cout << "O dia " << cal.dia << " e qual dia da semana? " << cal.diaSemana(cal.ano, cal.mes, cal.dia) << endl;
    cout << endl;
    cal.imprimirCalendario(cal.ano, cal.mes);

    return 0;
}