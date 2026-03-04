#include <iostream>
using namespace std;

void escolherOperacao()
{
    cout << "Qual o tipo de operação?" << endl;
    cout << "Digite: " << endl;
    cout << "'1' para soma;" << endl;
    cout << "'2' para subtração;" << endl;
    cout << "'3' para multiplicação;" << endl;
    cout << "'4' para divisão." << endl;
}

double soma (double a, double b) {return a + b;}

double subt (double a, double b) {return a - b;}

double multiplicacao (double a, double b) {return a * b;}

double divisao (double a, double b) {return a / b;}

void resultado(int operacao, int nmr1, int nmr2)
{
    switch (operacao)
    {
    case 1:
        cout << nmr1 << " + " << nmr2 << " = " << soma(nmr1, nmr2) << endl;
        break;
    case 2:
        cout << nmr1 << " - " << nmr2 << " = " << subt(nmr1, nmr2) << endl;
        break;
    case 3:
        cout << nmr1 << " * " << nmr2 << " = " << multiplicacao(nmr1, nmr2) << endl;
        break;
    case 4:
        if (nmr2 == 0)
        {
            cout << "Indefinido" << endl;
        }
        else
        {
            cout << nmr1 << " / " << nmr2 << " = " << divisao(nmr1, nmr2) << endl;
        }
        break;
    }
}

int main()
{
    double nmr1;
    cout << "Digite um número: ";
    cin >> nmr1;

    int operacao;

    escolherOperacao();

    cin >> operacao;
    if (operacao < 1 || operacao > 4)
    {
        cout << "Tipo de operação inválido";
        return 0;
    }

    double nmr2;
    cout << "Digite outro número: ";
    cin >> nmr2;

    resultado(operacao, nmr1, nmr2);

    return 0;
}