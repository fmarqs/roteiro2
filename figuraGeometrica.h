#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

class FiguraGeometrica
{
    protected:
        std::string nome;

    public:
        FiguraGeometrica(std::string name);
        void calcularArea();
        std::string getNome();
        void setNome(std::string name);

};


#endif