#include "MeioTransporte.hpp"

//Carro eh um meio de transporte
class Carro : public MeioTransporte
{
public:
    Carro();
private:
    int numPortas;
    string placa;
    
};
