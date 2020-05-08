
#include "MeioTransporte.hpp"

MeioTransporte::MeioTransporte()
{
    //cout << "Construtor da Classe MeioTransporte\n";
}

void MeioTransporte::setModelo(string m)
{
    modelo = m;
}

string MeioTransporte::getModelo()
{
    return modelo;
}

void MeioTransporte::setCor(string c)
{
    cor = c;
}

string MeioTransporte::getCor()
{
    return cor;
}
