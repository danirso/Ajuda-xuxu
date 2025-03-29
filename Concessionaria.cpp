/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Concessionaria.hpp"

using namespace std;

Concessionaria::Concessionaria(string nome, string endereco, string cidade, string estado, string fone)
   {
   this->nome = nome;
   this->endereco = endereco;
   this->cidade = cidade;
   this->estado = estado;
   this->fone = fone;
   };
   
 string Concessionaria::getNome()  const   { return (nome); };
 string Concessionaria::getEndereco() const { return (endereco); };
 string Concessionaria::getCidade() const  { return (cidade); };
 string Concessionaria::getEstado() const  { return (estado); };
 string Concessionaria::getFone()  const   { return (fone); };
  
   
