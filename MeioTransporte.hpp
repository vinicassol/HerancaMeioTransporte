#include <iostream>
#include <string>
using namespace std;

#ifndef MeioTransporte_H
#define MeioTransporte_H
class MeioTransporte
{
    
public:
    MeioTransporte();
    void setModelo(string m);
    string getModelo();
    void setCor(string c);
    string getCor();
    
protected:
    string modelo;
    int ano;
    int numLugares;
    string cor;
    float comprimento;
};
#endif
