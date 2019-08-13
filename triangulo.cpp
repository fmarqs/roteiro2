#include "triangulo.h"
#include <iostream>
#include <string>

using namespace std;

Triangulo::Triangulo(string name) : FiguraGeometrica(name)
{
   
}

void Triangulo::calcularArea(double base, double altura)
{
    cout << "Media do triangulo = " << (base*altura)/2 << endl;
}

