#include "aviao.hpp"

void Aviao::setNumTurbinas(int n)
{
    numTurbinas = n;
}

void Aviao::setPrefixo(string p)
{
    prefixo = p;
}

int Aviao::getNumTurbinas()
{
    return numTurbinas;
}

string Aviao::getPrefixo()
{
    return prefixo;
}
