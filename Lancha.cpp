#include "Lancha.hpp"

Lancha::Lancha()
{
    cout << "Construtor da Classe Lancha\n";
}

void Lancha::setNumMotores(int n)
{
    numMotores = n;
}

int Lancha::getNumMotores()
{
    return numMotores;
}
