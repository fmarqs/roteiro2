#include "endereco.h"
#include "pessoa.h"
#include <iostream>

using namespace std;

Endereco::Endereco()
{
}

Endereco::Endereco(string r, string b, string ci, string est, string ce, int num)
{
  rua = r;
  bairro = b;
  cidade = ci;
  estado = est;
  cep = ce;
  numero = num;
}

string Endereco::toString()
{
  std::stringstream end1;

  end1 << "\nRua: " << rua << " Bairro: " << bairro << " Cidade: " << cidade << " Estado: " << estado << " CEP: " << cep << " Numero: " << numero << endl;

  return end1.str();
}
