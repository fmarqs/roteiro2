#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "figuraGeometrica.h"
#include <iostream>


class Triangulo: public FiguraGeometrica
{

    public:
        Triangulo(std::string name);
        void calcularArea(double base, double altura);

};

#endif