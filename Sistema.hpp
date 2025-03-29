/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef SISTEMA_H

#define SISTEMA_H

#include <string>
#include <vector>

#include "ItemVenda.hpp"
#include "Concessionaria.hpp"
#include "ConcessionariaModerna.hpp"

using namespace std;

class Sistema
   {
   private:
      vector<ItemVenda *> carros;
      vector<ItemVenda *> motores;
      vector<ItemVenda *> cambios;
      vector<ItemVenda *> cores;
      vector<ItemVenda *> direcao;
      vector<ItemVenda *> rodas;
      vector<ItemVenda *> sonorizacao;
      vector<ItemVenda *> orcamento;
      
      Concessionaria * cliente;
      
      void boasVindas();
      void carregarEstoque();
      void iniciarVenda();
      void imprimirOrcto();
      void listarConfiguracao();

      ItemVenda * escolheAutomovel();
      ItemVenda * escolheMotor();
      ItemVenda * escolheCambio();
      ItemVenda * escolheCor();
      ItemVenda * escolheDirecao();
      ItemVenda * escolheRodas();
      ItemVenda * escolheSonorizacao();
      
   public:
      Sistema(Concessionaria *);
      ~Sistema();
      void processa();
   };
   
#endif
   
   
/* fim de arquivo */