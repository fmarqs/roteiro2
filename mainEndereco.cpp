#include "pessoa.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
  Pessoa *p1 = new Pessoa("Noberto");

  Endereco *e1 = new Endereco("Av Estados", "Mangabeira", "Joao Pessoa", "Paraiba", "23920329", 123);
  Pessoa *p2 = new Pessoa("Alberto", *e1, "(83) 993293289");
  Endereco *e2 = new Endereco("Rua das Casas", "Bancarios", "Joao Pessoa", "Paraiba", "30940239", 357);
  Pessoa *p3 = new Pessoa("Heberton ", *e2 , "(83) 923894823");

  cout << "Pessoa #1: " << p1->getNome() << endl;
  cout << "Pessoa #2: " << p2->getNome() << "\nEndereço: " << e1->toString() << "Telefone: " << p2->getTel() << endl;
  cout << "Pessoa #3: " << p3->getNome() << "\nEndereço: " << e2->toString() << "Telefone" << p3->getTel() << endl;

  delete p1;
  delete p2;
  delete p3;

}
