#include "interface.h"
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void Interface::escolherOperacao()
{
    cout << "Qual o tipo de operação?\n";
    cout << "\n";
    cout << "'1' para soma;\n";
    cout << "'2' para subtração;\n";
    cout << "'3' para multiplicação;\n";
    cout << "'4' para divisão;\n";
    cout << "'5' para exponenciação;\n";
    cout << "'6' para raíz quadrada;\n";
    cout << "'0' para encerrar.\n";
    cout << "Digite: ";
}

double Interface::pedirNmr1()
{
    double nmr1;
    cout << "Digite um número: ";
    cin >> nmr1;
    cout << "\n";

    return nmr1;
}

double Interface::pedirOutroNmr()
{
    double nmr;
    cout << "Digite outro número: ";
    cin >> nmr;
    cout << "\n";

    return nmr;
}

double Interface::divInvalida()
{
    int b;
    cout << "Indefinido" << endl;
    cout << "Digite um valor válido para divisão: ";
    cin >> b;
    cout << "\n";
    return b;
}

void Interface::mostrarResultado(double x)
{
    cout << "======================" << endl;
    cout << "    Resultado: " << x << endl;
    cout << "======================" << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout << "\n";
}

void Interface::encerrar()
{
    cout << "Encerrando...";
    cout << "\n";
    this_thread::sleep_for(chrono::seconds(3));
}

int Interface::validarOperacao()
{
    int op;
    while (true)
    {
        cin >> op;
        cout << "\n";
        if (op >= 0 && op <= 6)
        {
            return op;
        }

        cout << "Tipo de operação inválida. Digite novamente: ";
    }
}