#include <iostream>
#include "trabalhadorAssalariado.h"

using namespace std;

TrabalhadorAssalariado::TrabalhadorAssalariado(string name, double sal) : Trabalhador(name, sal)
{
}

double TrabalhadorAssalariado::valorDaHora(double sal)
{
    sal = sal /4;
    return sal/(HORAS_DIARIAS*DIAS_DE_TRABALHO); //o trabalhador assalariado recebe 15 reais por hora
}

void TrabalhadorAssalariado::calcularPagamentoSemanal()
{

    cout << "Salario mensal = R$ " << getSalario() << endl;
    cout << "Salario semanal = R$ " << getSalario()/4 << endl;


}
