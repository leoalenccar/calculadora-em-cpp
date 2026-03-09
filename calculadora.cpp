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
    case SOMA:
        return soma(a, b);

    case SUBTRACAO:
        return subt(a, b);

    case MULTIPLICACAO:
        return multiplicacao(a, b);

    case DIVISAO:
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

    case EXPONENCIACAO:
        return exp(a, b);

    case RAIZ_QUADRADA:
        return raizQuadrada(a);
    }

    return 0;
}