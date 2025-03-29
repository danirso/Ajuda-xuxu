#ifndef Direcao_H

#define Direcao_H

#include <string>
#include "ItemVenda.hpp"

using namespace std;

class Direcao : public ItemVenda
    {
    private:
        string tipo;

    public:
        Direcao(string,double);
        virtual string getDescricao();
    };


#endif