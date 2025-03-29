#include "Direcao.hpp"

Direcao::Direcao(string tipo, double valor) : ItemVenda(valor){
    this->tipo = tipo;
}

string Direcao::getDescricao(){
    return "Direcao " + tipo;
}