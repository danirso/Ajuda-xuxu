#ifndef CONCESSIONARIA_HPP
#define CONCESSIONARIA_HPP

#include <string>
using namespace std;

class Concessionaria {
private:
    string nome;
    string endereco;
    string cidade;
    string estado;
    string fone;

public:
    // Construtor
    Concessionaria(string nome, string endereco, string cidade, string estado, string fone);
    
    // Getters
    string getNome() const;
    string getEndereco() const;
    string getCidade() const;
    string getEstado() const;
    string getFone() const;
    
    // Setters
    void setNome(string nome);
    void setEndereco(string endereco);
    void setCidade(string cidade);
    void setEstado(string estado);
    void setFone(string fone);
};

#endif // CONCESSIONARIA_HPP
