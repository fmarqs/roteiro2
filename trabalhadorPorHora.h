#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "trabalhador.h"

class TrabalhadorPorHora: public Trabalhador
{
    public:
        TrabalhadorPorHora(std::string name, double sal);
        double valorDaHora();
        void calcularPagamentoSemanal(int horas);

};

#endif
