#include "triangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //FiguraGeometrica *g1 = new FiguraGeometrica();
    Triangulo *t1 = new Triangulo("Triangulo");
    cout << t1->getNome() <<  endl;
    t1->calcularArea(5, 10);

    Quadrado *q1 = new Quadrado("Quadrado");
    cout << q1->getNome() << endl;
    q1->calcularArea(15);

    Circulo *c1 = new Circulo("Circulo");
    cout << c1->getNome() << endl;
    c1->calcularArea(25);
    
    delete t1;
    delete q1;
    delete c1;

}