#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>

class Pedido
{
    protected:
        int num;
        std::string descricao;
        int qtd;
        double preco;

    public:
        Pedido();
        Pedido(int n, std::string desc, int q, double p);
        void setNumero(int n);
        void setQtd(int q);
        void setPreco(double p);
        std::string getDescricao();
        int getQtd();
        double getPreco();
        void print();
};

#endif
