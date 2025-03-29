#ifndef Sonorizacao_H

#define Sonorizacao_H

#include <string>
#include "ItemVenda.hpp"

using namespace std;

class Sonorizacao : public ItemVenda
{
    private:
        string tipo;
    
    public:
        Sonorizacao(string,double);
        virtual string getDescricao();

};

#endif