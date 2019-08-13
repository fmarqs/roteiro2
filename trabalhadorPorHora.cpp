#include <iostream>
#include "trabalhadorPorHora.h"

using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora(string name, double sal) : Trabalhador(name, sal)
{
}

double TrabalhadorPorHora::valorDaHora()
{

    return 10;  //o trabalhador ganha 10 reais por hora
}


void TrabalhadorPorHora::calcularPagamentoSemanal(int horas)
{
    int excedente=0;

    if(horas == HORAS_SEMANAIS)
    {
        salario = valorDaHora()*HORAS_DIARIAS*DIAS_DE_TRABALHO; //10*8*5
    }
    else if(horas > HORAS_SEMANAIS)
    {
        excedente = (1.5*valorDaHora())*(horas - 40);
        salario = valorDaHora()*HORAS_DIARIAS*DIAS_DE_TRABALHO+excedente; //10
    }

    cout << "Salario semanal = R$ " << salario;

}
