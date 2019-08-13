#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>

class Funcionario
{
    protected:
        int matricula;
        std::string nome;
        double salario;

    public:
        Funcionario(int mat, std::string name, double sal);
        Funcionario(double sal);
        int getMatricula();     
        std::string getNome();  
        double getSalario();    
        void setMatricula(int mat);     
        void setNome(std::string name);
        void setSalario(double sal);

};

#endif