#include "circulo.h"
#include <iostream>
#include <string>

using namespace std;

Circulo::Circulo(string name) : FiguraGeometrica(name)
{

}

void Circulo::calcularArea(double raio)
{
    cout << "Area do circulo = " << 3.14*(raio*raio) << endl;
}