#include <iostream>
#include <string>
using namespace std;

/*Baseado no diagrama de classe abaixo faça a classe em C++:

|                      Conta                       |
|--------------------------------------------------|
| + número: int                                    |
| + saldo: double                                  |
| + limite: double                                 |
| + nome: string                                   |
|--------------------------------------------------|
|~Conta (int, double, double, string)              |
|+ saca (valor: double) bool                       |
|+ deposita (valor: double)                        |
|+ transfere ( destino: Conta, valor: double) bool |*/

class Conta
{

public:
    int numero;
    double saldo, limite;
    string nome;

public:
    Conta(int num, double sal, double lim, string nom)
    {
        this->numero = num;
        this->saldo = sal;
        this->limite = lim;
        this->nome = nom;
    }

    bool saca(double valor)
    {
        if (valor > 0 && (saldo + limite) >= valor)
        {
            saldo -= valor;
            cout << "Saque de R$ " << valor << " realizado!\n";
            cout << "Novo saldo: R$ " << saldo << "\n\n";
            return true;
        }
        else
        {
            cout << "Saque falhou (saldo/limite insuficiente ou valor inválido)!\n\n";
        }
        return false;
    }

    void deposita(double valor)
    {
        if (valor > 0)
        {
            saldo += valor;
            cout << "Deposito de R$ " << valor << " realizado!\n";
            cout << "Novo saldo: R$ " << saldo << "\n\n";
        }
        else
        {
            cout << "Valor invalido para deposito!\n\n";
        }
    }

    bool transfere(Conta &destino, double valor)
    {
        if (saca(valor))
        {
            destino.deposita(valor);
            return true;
        }
        return false;
    }
};

int main()
{
    Conta minhaConta(15485, 1250.4, 250.0, "Nathalia Cappellini");
    Conta contaDestino(45872, 560.0, 250.0, "Genilson Alves");

    // Mensagem inicial
    cout << "Bem-vindo(a), suas informacoes: " << endl;
    cout << "================================" << endl;
    cout << "Titular: " << minhaConta.nome << endl;
    cout << "Numero da conta: " << minhaConta.numero << endl;
    cout << "Saldo: R$ " << minhaConta.saldo << endl;
    cout << "Limite: R$ " << minhaConta.limite << endl;
    cout << " " << endl;

    // Testando fazer um deposito
    minhaConta.deposita(450.0);

    // Testando fazer um saque
    minhaConta.saca(1000.00);

    // Testando transferencia de R$300.0
    bool sucesso = minhaConta.transfere(contaDestino, 300.0);

    if (sucesso)
    {
        cout << "Transferencia realizada com sucesso!\n";
    }
    else
    {
        cout << "Transferencia falhou (saldo/limite insuficiente)!\n";
    }

    cout << "\n=== DEPOIS DA TRANSFERENCIA ===" << endl;
    cout << "Sua conta: " << minhaConta.saldo << endl;
    cout << "Conta de destino: " << contaDestino.saldo << endl;

    return 0;
}