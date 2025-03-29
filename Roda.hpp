#ifndef Rodas_H

#define Rodas_H

#include <string>
#include "ItemVenda.hpp" 

using namespace std;

class Roda : public ItemVenda
{
    private:
        string tipo;
        bool aro;

    public:
        Roda(string,bool,double);
        virtual string getDescricao();

};

#endif