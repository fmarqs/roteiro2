#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "trabalhador.h"

class TrabalhadorAssalariado: public Trabalhador
{
    public:
        TrabalhadorAssalariado(std::string name, double sal);
        double valorDaHora(double sal);
        void calcularPagamentoSemanal();
};


#endif
