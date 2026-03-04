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

double calcular(int op, double a, double b)
{
    switch (op)
    {
    case 1:
        return soma(a, b);
        break;
    case 2:
        return subt(a, b);
        break;
    case 3:
        return multiplicacao(a, b);
        break;
    case 4:
        if (b == 0)
        {
            cout << "Indefinido" << endl;
            return 0;
        }
        else
        {
            return divisao(a, b);
        }
        break;
    }
}

double resultado ()
{
    double conta = 0;
    while (true)
    {
        double nmr1;
        cout << "Digite um número: ";
        cin >> nmr1;

        int operacao;
        escolherOperacao();
        while (true)
        {
            cin >> operacao;
            if (operacao < 1 || operacao > 4)
            {
                cout << "Tipo de operação inválido";
            }
            else
            {
                break;
            }
        }

        double nmr2;
        cout << "Digite outro número: ";
        cin >> nmr2;

        conta = calcular (operacao, nmr1, nmr2);

        while (true)
        {
            cout << "Continuar a calcular? Digite:" << endl;
            cout << "'0' para encerrar;" << endl;
            cout << "'2' para continuar." << endl;

            int continuar;
            cin >> continuar;

            while (true)
            {
                if (continuar == 0)
                {
                    break;
                }
                else if (continuar == 1)
                {
                    escolherOperacao();
                    int op;
                    cin >> op;

                    double nmr;
                    cout << "Digite outro número: ";
                    cin >> nmr;

                    conta = calcular(op, conta, nmr);
                }
                else
                {
                    cout << "Digíte um número válido";
                }
            }
            
            break;

        }

        break;
    }
    
    return conta;
}

int main()
{

    double resul = resultado();

    cout << "Resultado : " << resul;

    return 0;
}