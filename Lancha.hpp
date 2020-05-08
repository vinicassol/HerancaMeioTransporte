#include "MeioTransporte.hpp"

//Lancha eh um meio de transporte
class Lancha: public MeioTransporte
{
public:
    Lancha();
    void setNumMotores(int n);
    int getNumMotores();
    
private:
    int numMotores;
};
