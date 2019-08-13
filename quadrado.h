#ifndef QUADRADO_H
#define QUADRADO_H

#include "figuraGeometrica.h"

class Quadrado: public FiguraGeometrica
{
    public:
        Quadrado(std::string name);
        void calcularArea(double lado);

};


#endif