#include <string>
#include "Sonorizacao.hpp"
#include "ItemVenda.hpp"

using namespace std;

Sonorizacao::Sonorizacao(string tipo, double valor):ItemVenda(valor)
{
    this->tipo = tipo;
};

string Sonorizacao::getDescricao()
    {
        return("Som do tipo "+ tipo);
    }