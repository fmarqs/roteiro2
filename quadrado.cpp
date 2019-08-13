#include "quadrado.h"
#include <iostream>
#include <string>

using namespace std;

Quadrado::Quadrado(string name) : FiguraGeometrica(name)
{

}

void Quadrado::calcularArea(double lado)
{
    cout << "Area do quadrado = " << lado*lado << endl;
}