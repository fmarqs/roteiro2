#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include <iostream>
#include "pedido.h"

#define MAX_PEDIDOS 100

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        double calculaQtd();
        void print();

    private:
        int pos;
        Pedido pedidos[MAX_PEDIDOS];
};

#endif
