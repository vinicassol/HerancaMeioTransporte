#include "MeioTransporte.hpp"

//aviao eh um meio de transporte
class Aviao : public MeioTransporte
{
public:
    void setNumTurbinas(int n);
    void setPrefixo(string p);
    int getNumTurbinas();
    string getPrefixo();
    
private:
    int numTurbinas;
    string prefixo;
};
