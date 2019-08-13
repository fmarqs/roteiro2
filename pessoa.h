#ifndef PESSOA_H
#define PESSOA_H

#include "endereco.h"

class Pessoa
{
  private:
      std::string nome, telefone;
      Endereco endereco;

  public:
      Pessoa(std::string name);
      Pessoa(std::string name, Endereco end, std::string tel);
      std::string getNome();
      Endereco getEndereco();
      std::string getTel();
      void setNome(std::string name);
      void setEndereco(Endereco end);
      void setTel(std::string tel);

};

#endif
