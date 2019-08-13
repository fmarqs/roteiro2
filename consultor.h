#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "funcionario.h"

class Consultor: public Funcionario
{
    protected:
        float percentual = 1.10;

    public:
        Consultor(double sal);
        double getSalario();
        double getSalario(float per);

};

#endif