#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <sstream>
#include <string>

class Endereco
{
  private:
    std::string rua, bairro, cidade, estado, cep;
    int numero;

  public:
    Endereco();
    Endereco(std::string r, std::string b, std::string ci, std::string est, std::string ce, int num);
    std::string toString();



};

#endif
