#include "mesaDeRestaurante.h"
#include <iostream>

using namespace std;

MesaDeRestaurante::MesaDeRestaurante()
{
    pos = 0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p)
{
    for(int i=0; i<10; i++)
    {
        if(pedidos[i].getDescricao() == p.getDescricao())
        {
            pedidos[i].setQtd(pedidos[i].getQtd() + p.getQtd());
            return;
        }
    }

        pedidos[pos] = p;
        pos++;

}

void MesaDeRestaurante::zeraPedidos()
{
    for(int i = 0; i<MAX_PEDIDOS; i++)
        pedidos[i].setQtd(0);
}

double MesaDeRestaurante::calculaQtd()
{
    double quantidade = 0;

    for(int i=0; i<MAX_PEDIDOS; i++)
        quantidade += pedidos[i].getPreco() * pedidos[i].getQtd();

    return quantidade;
}

void MesaDeRestaurante::print() {
    for (int i=0 ; i<MAX_PEDIDOS ; i++)
        if (pedidos[i].getQtd()>0)
            pedidos[i].print();
}
