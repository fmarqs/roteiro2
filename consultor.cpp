#include <iostream>
#include "consultor.h"

using namespace std;

Consultor::Consultor(double sal) : Funcionario(sal)
{

}

double Consultor::getSalario(float per)
{
    per = percentual;
    return per;
}

double Consultor::getSalario()
{
    getSalario(percentual);
    return Funcionario::getSalario()*percentual;
    
}