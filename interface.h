#ifndef INTERFACE_H
#define INTERFACE_H

class Interface
{
public:
    void escolherOperacao();
    double pedirNmr1();
    double pedirOutroNmr();
    double divInvalida();
    void mostrarResultado(double x);
    void encerrar();
    int validarOperacao();
};

#endif