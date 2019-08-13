#include "pessoa.h"
#include "endereco.h"
#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa(string name)
{
  setNome(name);
}

Pessoa::Pessoa(string name, Endereco end, string tel)
{
  setNome(name);
  setEndereco(end);
  setTel(tel);
}

string Pessoa::getNome()
{
  return nome;
}

Endereco Pessoa::getEndereco()
{
  return endereco;
}

string Pessoa::getTel()
{
  return telefone;
}

void Pessoa::setNome(string name)
{
  if(name == " ")
    cout << "Nome invalido" << endl;
  else
    nome = name;
}

void Pessoa::setEndereco(Endereco end)
{
    endereco = end;
}

void Pessoa::setTel(string tel)
{
  if(tel == " ")
    cout << "Numero de telefone invalido" << endl;
  else
    telefone = tel;
}
