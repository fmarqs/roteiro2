#ifndef CIRCULO_H
#define CIRCULO_H
#include "figuraGeometrica.h"
#include <iostream>

class Circulo: public FiguraGeometrica
{
    public:
        Circulo(std::string name);
        void calcularArea(double raio);

};


#endif