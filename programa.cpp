#include "programa.h"
#include "calculadora.h"
#include "interface.h"

void Programa::executar()
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