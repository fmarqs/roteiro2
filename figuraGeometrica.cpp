#include <iostream>
#include <string>
#include "figuraGeometrica.h"

using namespace std;

FiguraGeometrica::FiguraGeometrica(string name)
{
    setNome(name);
}

string FiguraGeometrica::getNome()
{
    return nome;
}

void FiguraGeometrica::setNome(string name)
{
    if(name == "")
        cout << "Nome invalido" << endl;
    else
        nome = name;
}