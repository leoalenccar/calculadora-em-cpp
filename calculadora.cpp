#include "calculadora.h"
#include "interface.h"
#include <cmath>

using namespace std;

Interface ui;

double Calculadora::soma(double a, double b) { return a + b; }

double Calculadora::subt(double a, double b) { return a - b; }

double Calculadora::multiplicacao(double a, double b) { return a * b; }

double Calculadora::divisao(double a, double b) { return a / b; }

double Calculadora::exp(double a, double b) { return pow(a, b); }

double Calculadora::raizQuadrada(double a) { return sqrt(a); }

double Calculadora::calcular(int op, double a, double b)
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
                b = ui.divInvalida();
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