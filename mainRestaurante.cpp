#include <iostream>
#include "restauranteCaseiro.h"

using namespace std;

int main()
{
    RestauranteCaseiro rc = RestauranteCaseiro();

    Pedido p1;
    p1 = Pedido(321, "Pizza portuguesa", 1, 22);
    rc.adicionaAoPedido(1, p1);
    p1 = Pedido(357, "agua", 1, 3.50);
    rc.adicionaAoPedido(1, p1);
    p1 = Pedido(357, "agua", 1, 3.50);
    rc.adicionaAoPedido(1, p1);

    p1 = Pedido(10, "cachorro quente", 1, 8);
    rc.adicionaAoPedido(2, p1);
    p1 = Pedido(15, "refrigerante", 2, 6.50);
    rc.adicionaAoPedido(2, p1);
    p1 = Pedido(10, "cachorro quente", 2, 8);
    rc.adicionaAoPedido(2, p1);

    rc.print();

    cout << "Total: " << rc.calculaTotalRestaurante();

}