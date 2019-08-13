#include "trabalhadorPorHora.h"
#include "trabalhadorAssalariado.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    TrabalhadorPorHora *th1 = new TrabalhadorPorHora("Gilberto", 0);   //Nome do trabalhador: gilberto, 400 reais por semana
    cout << "Nome do trabalhador: " << th1->getNome() << endl;
    th1->calcularPagamentoSemanal(45);  //Horas trabalhadas por gilberto na semana: 45

    TrabalhadorPorHora *th2 = new TrabalhadorPorHora("Roberta", 0);    //Nome do trabalhador: roberta, 500 reais por semana
    cout << "\nNome do trabalhador: " << th2->getNome() << endl;
    th2->calcularPagamentoSemanal(40);  //Horas trabalhadas por roberta: 40

    TrabalhadorAssalariado *ta1 = new TrabalhadorAssalariado("Reinaldo", 2000);   //Nome do trabalhador: reinaldo, 2000 por mes
    cout << "\nNome do trabalhador: " << ta1->getNome() << endl;
    ta1->calcularPagamentoSemanal();


    delete th1;
    delete th2;
    delete ta1;

}
