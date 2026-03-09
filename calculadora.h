#ifndef CALCULADORA_H
#define CALCULADORA_H

enum Operacao
{
    SAIR = 0,
    SOMA = 1,
    SUBTRACAO = 2,
    MULTIPLICACAO = 3,
    DIVISAO = 4,
    EXPONENCIACAO = 5,
    RAIZ_QUADRADA = 6

};

class Calculadora
{
public:
    double soma(double a, double b);
    double subt(double a, double b);
    double multiplicacao(double a, double b);
    double divisao(double a, double b);
    double exp(double a, double b);
    double raizQuadrada(double a);
    double calcular(int op, double a, double b);
};

#endif