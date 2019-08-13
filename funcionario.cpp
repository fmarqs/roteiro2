#include <iostream>
#include <string>
#include "funcionario.h"

using namespace std;

Funcionario::Funcionario(int mat, string name, double sal)
{
    setMatricula(mat);
    setNome(name);
    setSalario(sal);
}

Funcionario::Funcionario(double sal)
{
    setSalario(sal);
}

int Funcionario::getMatricula()
{
    return matricula;
}

string Funcionario::getNome()
{
    return nome;
}

double Funcionario::getSalario()
{
    return salario;
}

void Funcionario::setMatricula(int mat)
{
    if(mat == 0 || mat < 0)
        cout << "Matricula inválida" << endl;
    else 
        matricula = mat;
    
}

void Funcionario::setNome(string name)
{
    if(name == "")
        cout << "Nome inválido" << endl;
    else
        nome = name;
    
}

void Funcionario::setSalario(double sal)
{
    if(sal < 0)
        cout << "Salário negativo" << endl;
    else
    {
        salario = sal;
    }
}



