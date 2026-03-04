#include <iostream>
using namespace std;

void escolherOperacao()
{
    cout << "Qual o tipo de operação?" << endl;
    cout << "\n";
    cout << "Digite: " << endl;
    cout << "'1' para soma;" << endl;
    cout << "'2' para subtração;" << endl;
    cout << "'3' para multiplicação;" << endl;
    cout << "'4' para divisão." << endl;
    cout << "\n";
}

void mostrar (double x)
{
    cout << "=====================" << endl;
    cout << "    Resultado: " << x << endl;
    cout << "=====================" << endl;
    cout << "\n";
}

double soma (double a, double b) {return a + b;}

double subt (double a, double b) {return a - b;}

double multiplicacao (double a, double b) {return a * b;}

double divisao (double a, double b) {return a / b;}

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
    }

    return 0;
}

int validaOperacao()
{
    int op;
    while (true)
    {
        cin >> op;
        cout << "\n";
        if (op >= 1 && op <= 4)
        {
            return op;
        }

        cout << "Tipo de operação inválida. Digite novamente: ";
    }
}

void resultado ()
{
    double conta;

    double nmr1;
    cout << "Digite um número: ";
    cin >> nmr1;
    cout << "\n";

    int operacao;
    escolherOperacao();
    int op1 = validaOperacao();

    double nmr2;
    cout << "Digite outro número: ";
    cin >> nmr2;
    cout << "\n";

    conta = calcular(op1, nmr1, nmr2);

    bool sit2 = true;
    while (sit2)
    {
        mostrar(conta);
        cout << "Continuar a calcular? Digite:" << endl;
        cout << "'0' para encerrar;" << endl;
        cout << "'1' para continuar." << endl;
        cout << "\n";

        int continuar;
        cin >> continuar;
        cout << "\n";

        if (continuar == 0)
        {
            cout << "Af vey :(" << endl;
            sit2 = false;
        }
        else if (continuar == 1)
        {
            escolherOperacao();
            int op2 = validaOperacao();

            double nmr;
            cout << "Digite outro número: ";
            cin >> nmr;
            cout << "\n";

            conta = calcular(op2, conta, nmr);
        }
        else
        {
            cout << "Digíte um número válido";
        }
    }
}

int main()
{
    resultado();

    return 0;
}