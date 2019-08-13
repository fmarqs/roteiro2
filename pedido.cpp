#include "pedido.h"
#include <iostream>

using namespace std;

Pedido::Pedido()
{
    num = 0;
    qtd = 0;
    preco = 0;
}

Pedido::Pedido(int n, std::string desc, int q, double p)
{
    num = n;
    descricao = desc;
    qtd = q;
    preco = p;
}

void Pedido::setNumero(int n)
{
    if(n > 0)
        num = n;
    else
        num = 0;
}

void Pedido::setQtd(int q)
{
    if(q > 0)
        qtd = q;
    else
        qtd = 0;
}

void Pedido::setPreco(double p)
{
    if(p > 0)
        preco = p;
    else
        preco = 0;
}

std::string Pedido::getDescricao()
{
    return descricao;
}

int Pedido::getQtd()
{
    return qtd;
}

double Pedido::getPreco()
{
    return preco;
}

void Pedido::print() {
    cout << descricao << ", quantidade: " << qtd << ", preco: " << preco <<
    ", tot: " << preco*qtd << endl;
}
