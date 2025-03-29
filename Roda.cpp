#include <string>
#include "Roda.hpp"
#include "ItemVenda.hpp"

using namespace std;

Roda::Roda(string tipo, bool aro, double valor):ItemVenda(valor)
    {
    this -> tipo = tipo;
    this-> aro = aro;
    };

string Roda::getDescricao()
    {
        return("Rodas " + tipo + " "+ "aro "+ (aro ? "15": "13"));
    };