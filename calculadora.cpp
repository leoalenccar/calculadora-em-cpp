#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
using namespace std;

class Calculadora
{
public:
    double soma(double a, double b) { return a + b; }

    double subt(double a, double b) { return a - b; }

    double multiplicacao(double a, double b) { return a * b; }

    double divisao(double a, double b) { return a / b; }

    double exp(double a, double b) { return pow(a, b); }

    double raizQuadrada(double a) { return sqrt(a); }

    double calcular(int op, double a, double b)
    {
        switch (op)
        {
        case 1:
            return soma(a, b);

        case 2:
            return subt(a, b);

        case 3:
            return multiplicacao(a, b);

        case 4:
            if (b == 0)
            {
                while (b == 0)
                {
                    cout << "Indefinido" << endl;
                    cout << "Digite um valor válido para divisão: ";
                    cin >> b;
                    cout << "\n";
                }
                return divisao(a, b);
            }
            else
            {
                return divisao(a, b);
            }

        case 5:
            return exp(a, b);
        
        case 6:
            return raizQuadrada(a);

        }

        return 0;
    }
};

class Interface
{
public:
    void escolherOperacao()
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


    double pedirNmr1()
    {
        double nmr1;
        cout << "Digite um número: ";
        cin >> nmr1;
        cout << "\n";

        return nmr1;
    }

    double pedirOutroNmr()
    {
        double nmr;
        cout << "Digite outro número: ";
        cin >> nmr;
        cout << "\n";

        return nmr;
    }


    void mostrarResultado(double x)
    {
        cout << "======================" << endl;
        cout << "    Resultado: " << x << endl;
        cout << "======================" << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << "\n";
    }

    void encerrar()
    {
        cout << "Encerrando...";
        this_thread::sleep_for(chrono::seconds(3));
        cout << "\n";

    }


    int validarOperacao()
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
};

class Programa
{
public:
    void resultado()
    {
        Calculadora calc;
        Interface ui;

        double conta;
        int quantOpe = 0;

        while (true)
        {
            ui.escolherOperacao();
            int operacao = ui.validarOperacao();

            if (operacao == 0)
            {
                ui.encerrar();
                break;
            }
            else if (operacao == 6)
            {
                if (quantOpe == 0)
                {
                    double nmr1 = ui.pedirNmr1();
                    conta = calc.calcular(operacao, nmr1, 0);
                    quantOpe++;

                    ui.mostrarResultado(conta);
                }
                else
                {
                    conta = calc.calcular(operacao, conta, 0);
                    quantOpe++;

                    ui.mostrarResultado(conta);
                }
            }
            else
            {
                if (quantOpe == 0)
                {
                    double nmr1 = ui.pedirNmr1();
                    double nmr2 = ui.pedirOutroNmr();

                    conta = calc.calcular(operacao, nmr1, nmr2);

                    quantOpe++;

                    ui.mostrarResultado(conta);
                }
                else
                {
                    double nmr2 = ui.pedirOutroNmr();

                    conta = calc.calcular(operacao, conta, nmr2);

                    quantOpe++;

                    ui.mostrarResultado(conta);
                }
            }
        }
    }
};

int main()
{
    Programa programa;

    programa.resultado();

    return 0;
}