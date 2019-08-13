#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "mesaDeRestaurante.h"

#define MAX_MESAS 100

class RestauranteCaseiro
{
    private:
        MesaDeRestaurante mesas[MAX_MESAS];
        int mesa;

    public:
        RestauranteCaseiro();
        void adicionaAoPedido(int mesa, Pedido p);
        double calculaTotalRestaurante();
        void print();


};

#endif
