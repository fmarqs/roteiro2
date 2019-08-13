#include "restauranteCaseiro.h"
#include <iostream>

using namespace std;

RestauranteCaseiro::RestauranteCaseiro()
{

}

void RestauranteCaseiro::adicionaAoPedido(int mesa, Pedido p)
{
    mesas[mesa].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double total = 0;
    for(int i=0; i<MAX_MESAS; i++)
    {
        total += mesas[i].calculaQtd();
    }

    return total;
}

void RestauranteCaseiro::print()
{
    for(int i=0; i<MAX_MESAS; i++)
    {
        cout << "Mesa " << i << ": \n";
        mesas[i].print();
        cout << "\n\n";
    }
}
