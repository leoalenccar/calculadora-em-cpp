#include <iostream>
using namespace std;

void escolherOperacao()
{
    cout << "Qual o tipo de operação?" << endl;
    cout << endl;
    cout << "Digite: " << endl;
    cout << "'1' para soma;" << endl;
    cout << "'2' para subtração;" << endl;
    cout << "'3' para multiplicação;" << endl;
    cout << "'4' para divisão." << endl;
    cout << endl;
}

void mostrar (double x)
{
    cout << "=====================" << endl;
    cout << "    Resultado: " << x << endl;
    cout << "=====================" << endl;
    cout << endl;
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
                cout << "Indefinido" << endl;
                cout << "Digite um valor válido para divisão: ";
                double c;
                cin >> c;
                cout << endl;
                return calcular(4, a, c);
            }
            else
            {
                return divisao(a, b);
            }
    }

    return 0;
}

void resultado ()
{
    double conta = 0;

    double nmr1;
    cout << "Digite um número: ";
    cin >> nmr1;
    cout << endl;

    int operacao;
    escolherOperacao();
    bool sit = true;
    while (sit)
    {
        cin >> operacao;
        cout << endl;
        if (operacao < 1 || operacao > 4)
        {
            cout << "Tipo de operação inválida. Digite novamente: ";
        }
        else
        {
            sit = false;
        }
    }

    double nmr2;
    cout << "Digite outro número: ";
    cin >> nmr2;
    cout << endl;

    conta = calcular(operacao, nmr1, nmr2);

    bool sit2 = true;
    while (sit2)
    {
        mostrar(conta);
        cout << "Continuar a calcular? Digite:" << endl;
        cout << "'0' para encerrar;" << endl;
        cout << "'1' para continuar." << endl;
        cout << endl;

        int continuar;
        cin >> continuar;
        cout << endl;

        if (continuar == 0)
        {
            cout << "Af vey :(" << endl;
            sit2 = false;
        }
        else if (continuar == 1)
        {
            escolherOperacao();
            int op;
            bool valido = true;
            while (valido)
            {
                cin >> op;
                cout << endl;
                if (op < 1 || op > 4)
                    cout << "Tipo de operação inválida. Digite novamente: ";
                else
                    valido = false;
            }

            double nmr;
            cout << "Digite outro número: ";
            cin >> nmr;
            cout << endl;

            conta = calcular(op, conta, nmr);
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