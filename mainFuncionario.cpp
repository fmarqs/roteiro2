#include "consultor.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Funcionario *f1 = new Funcionario(72387328, "Fernando", 550);
    Funcionario *f2 = new Funcionario(48298291, "Paula", 2000);

    cout << "Matricula: " << f1->getMatricula() << "\nNome: " << f1->getNome() << "\nSalario: " << f1->getSalario();
    Consultor *c1 = new Consultor(f1->getSalario());
    cout << "\nSalario com aumento #1: " << c1->getSalario() << endl;
    

    cout << "\nMatricula: " << f2->getMatricula() << "\nNome: " << f2->getNome() << "\nSalario: " << f2->getSalario();
    Consultor *c2 = new Consultor(f2->getSalario());
    cout << "\nSalario com aumento #2: " << c2->getSalario() << endl;

    

    delete f1;
    delete f2;
    delete c1;
    delete c2;
}