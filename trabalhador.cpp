#include <iostream>
#include "trabalhador.h"

using namespace std;

Trabalhador::Trabalhador(string name, double sal)
{
    setNome(name);
    setSalario(sal);
}

string Trabalhador::getNome()
{
    return nome;
}

double Trabalhador::getSalario()
{
    return salario;
}

void Trabalhador::setNome(string name)
{
    if(name == "")
        cout << "Nome invalido" << endl;
    else
    {
        nome = name;
    }

}

void Trabalhador::setSalario(double sal)
{
    salario = sal;
}
