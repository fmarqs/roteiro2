#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#define DIAS_DE_TRABALHO 5
#define HORAS_SEMANAIS 40
#define HORAS_DIARIAS 8

#include <iostream>

class Trabalhador
{
    protected:
        std::string nome;
        double salario;

    public:
        Trabalhador(std::string name, double sal);
        std::string getNome();
        double getSalario();
        void setNome(std::string name);
        void setSalario(double sal);
};


#endif
