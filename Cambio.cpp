#include "Cambio.hpp"

// Construtor
Cambio::Cambio(string tipo, int marchas, double valor) : ItemVenda(valor) {
    this->tipo = tipo;
    this->marchas = marchas;
}

// Método para obter a descrição do câmbio
string Cambio::getDescricao() {
    return "Câmbio " + tipo + " com " + to_string(marchas) + " marchas";
}
