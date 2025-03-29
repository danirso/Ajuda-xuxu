/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include <vector>
#include <iostream>

#include "Sistema.hpp"
#include "Concessionaria.hpp"
#include "ConcessionariaModerna.hpp"
#include "ItemVenda.hpp"
#include "Automovel.hpp"
#include "Motor.hpp"
#include "Cambio.hpp"
#include "Cor.hpp"
#include "Menu.hpp"
#include "Direcao.hpp"
#include "Roda.hpp"
#include "Sonorizacao.hpp"

using namespace std;

Sistema::Sistema(Concessionaria * cliente)
   {
   this->cliente = cliente;
   boasVindas();
   carregarEstoque();
   orcamento.clear();
   };

Sistema::~Sistema()
   {
   vector<ItemVenda *>::iterator varre;

   orcamento.clear(); // nao usar delete nos itens, pois sao so copias!!!
   
   varre = carros.begin();
   while(varre != carros.end())
      {
      delete(*varre++);	
      };
   carros.clear();
   
   varre = motores.begin();
   while(varre != motores.end())
      {
      delete(*varre++);	
      };
   motores.clear();  

   varre = cambios.begin();
   while(varre != cambios.end())
      {
      delete(*varre++);	
      };
   cambios.clear();  

   varre = cores.begin();
   while(varre != cores.end())
      {
      delete(*varre++);	
      };
   cores.clear();  

   varre = direcao.begin();//direcao
   while(varre != direcao.end())
      {
         delete(*varre++);
      }
   direcao.clear();

   varre = rodas.begin();//rodas
   while(varre != rodas.end())
      {
         delete(*varre++);
      }
   rodas.clear();

   varre = sonorizacao.begin();//sonorizacao
   while(varre != sonorizacao.end())
      {
         delete(*varre++);
      }
   sonorizacao.clear();
   };

void Sistema::boasVindas()
   {
   cout << endl << endl;
   cout << "******************************" << endl;
   cout << cliente->getNome() << endl;
   cout << cliente->getEndereco() << endl;
   cout << cliente->getCidade() << "/" << cliente->getEstado() << endl;
   cout << cliente->getFone() << endl;
   
   const ConcessionariaModerna* concModerna = dynamic_cast<const ConcessionariaModerna*>(cliente);
   if (concModerna) {
       cout << "Site: " << concModerna->getSite() << endl;
       cout << "Facebook: " << concModerna->getFacebook() << endl;
       cout << "Twitter: " << concModerna->getTwitter() << endl;
       cout << "WhatsApp: " << concModerna->getWhatsapp() << endl;
   }
   
   cout << "******************************" << endl << endl;
   };
   
void Sistema::carregarEstoque()
   {
   carros.clear();
   carros.insert(carros.end(), new Automovel("GM", "Cruze Sedan",  2015, 107000.00));
   carros.insert(carros.end(), new Automovel("GM", "Cruze Hatch",  2015,  75000.00));
   carros.insert(carros.end(), new Automovel("GM", "Prisma Sedan", 2015,  65000.00));
   carros.insert(carros.end(), new Automovel("GM", "Onix Hatch",   2015,  40000.00));
   carros.insert(carros.end(), new Automovel("GM", "Celta Hatch",  2015,  30000.00));

   motores.clear();
   motores.insert(motores.end(), new Motor(1.8, 16, "gasolina", 3300.00));
   motores.insert(motores.end(), new Motor(1.8, 16, "flex", 3500.00));
   motores.insert(motores.end(), new Motor(1.8,  8, "flex", 3000.00));
   motores.insert(motores.end(), new Motor(1.6, 16, "flex", 2800.00));
   motores.insert(motores.end(), new Motor(1.6,  8, "flex", 2300.00));
   motores.insert(motores.end(), new Motor(1.4, 16, "flex", 2600.00));
   motores.insert(motores.end(), new Motor(1.4,  8, "flex", 2000.00));
   motores.insert(motores.end(), new Motor(1.0, 16, "flex", 2400.00));
   motores.insert(motores.end(), new Motor(1.0,  8, "flex", 0.00));

   cambios.clear();
   cambios.insert(cambios.end(), new Cambio("Automatico", 7, 7500.0));
   cambios.insert(cambios.end(), new Cambio("Automatico", 6, 4500.0));
   cambios.insert(cambios.end(), new Cambio("Automatico", 5, 4000.0));
   cambios.insert(cambios.end(), new Cambio("Manual", 6, 2500.0));
   cambios.insert(cambios.end(), new Cambio("Manual", 5, 0.0));

   
   cores.clear();
   cores.insert(cores.end(), new Cor("Branco", false, 0.0));
   cores.insert(cores.end(), new Cor("Vermelho", false, 200.0));
   cores.insert(cores.end(), new Cor("Preto", false, 200.0));
   cores.insert(cores.end(), new Cor("Azul", false, 100.0));
   cores.insert(cores.end(), new Cor("Prata", true, 350.0));
   cores.insert(cores.end(), new Cor("Cinza", true, 250.0));
   cores.insert(cores.end(), new Cor("Vermelho", true, 450.0));
   cores.insert(cores.end(), new Cor("Azul", true, 250.0));

   direcao.clear();
   direcao.insert(direcao.end(),new Direcao("Mecanica", 150.0));
   direcao.insert(direcao.end(),new Direcao("Hidraulica", 200.0));
   direcao.insert(direcao.end(),new Direcao("Eletrica", 250.0));
   direcao.insert(direcao.end(),new Direcao("Eletro-hidraulica", 300.0));

   rodas.clear();
   rodas.insert(rodas.end(), new Roda("Liga leve",false,150.0));
   rodas.insert(rodas.end(), new Roda("aco",false,100.0));
   rodas.insert(rodas.end(), new Roda("Liga leve",true,250.0));
   rodas.insert(rodas.end(), new Roda("aco",false,200.0));

   sonorizacao.clear();
   sonorizacao.insert(sonorizacao.end(), new Sonorizacao("CD player", 200.0));
   sonorizacao.insert(sonorizacao.end(), new Sonorizacao("DVD player", 300.0));
   sonorizacao.insert(sonorizacao.end(), new Sonorizacao("Central multimidia", 500.0));

   };

void Sistema::processa()
   {
   vector<string> opcoes({ "Sair do Sistema", "Iniciar Venda", "Imprimir Orcamento" });
   Menu menu("Menu Principal", opcoes);
   int escolha = -1;
   
   while(escolha)
      {
      escolha = menu.getEscolha();
   
      switch(escolha)
         {
 	 case 1: { iniciarVenda();  }; break;
 	 case 2: { imprimirOrcto(); }; break;
         };
      };
   };
   
void Sistema::iniciarVenda()
   {
   orcamento.clear();
   cout << "------------------------------\nNOVA VENDA\n------------------------------\n";
   
   orcamento.insert(orcamento.end(), escolheAutomovel());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheMotor());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheCambio());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheCor());
   listarConfiguracao();
   orcamento.insert(orcamento.end(),escolheDirecao());
   listarConfiguracao();
   orcamento.insert(orcamento.end(),escolheRodas());
   listarConfiguracao();
   orcamento.insert(orcamento.end(),escolheSonorizacao());
   listarConfiguracao();
   cout << "------------------------------\nCONFIGURACAO COMPLETADA\n------------------------------\n";
   };

void Sistema::listarConfiguracao()
   {
   cout << "------------------------------\nConfiguracao escolhida:\n------------------------------\n";
  
   vector<ItemVenda *>::iterator varre = orcamento.begin();
   
   while(varre != orcamento.end())
      {
      cout << "  @ " << (*varre)->getDescricao() << "\n\tR$ " << (*varre)->getValor() << endl;
      varre++;
      };
   };
   
ItemVenda * Sistema::escolheAutomovel()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = carros.begin();
   
   while(varre != carros.end())
      {
      opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
      varre++;	
      };
   Menu menu("Modelos disponiveis", opcoes);

   return (carros.at(menu.getEscolha()));  
   };         

ItemVenda * Sistema::escolheMotor()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = motores.begin();
   
   while(varre != motores.end())
      {
      opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));	
      varre++;
      };
   Menu menu("Motorizacoes disponiveis", opcoes);

   return (motores.at(menu.getEscolha()));  
   };         
   
ItemVenda * Sistema::escolheCambio()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = cambios.begin();
   
   while(varre != cambios.end())
      {
         opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
         varre++;	
      };
   Menu menu("Cambios disponiveis", opcoes);

   return (cambios.at(menu.getEscolha()));  
   };         

ItemVenda * Sistema::escolheCor()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = cores.begin();
   
   while(varre != cores.end())
      {
         opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
         varre++;	
      };
   Menu menu("Cores disponiveis", opcoes);

   return (cores.at(menu.getEscolha()));  
   };         
   

ItemVenda * Sistema::escolheDirecao()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = direcao.begin();
   
   while(varre != direcao.end())
      {
         opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
         varre++;	
      };
   Menu menu("tipos de direcao disponiceis", opcoes);

   return (direcao.at(menu.getEscolha()));  
   };    
   
ItemVenda * Sistema::escolheRodas()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = rodas.begin();
   
   while(varre != rodas.end())
      {
         opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
         varre++;	
      };
   Menu menu("tipos de rodas disponiveis", opcoes);

   return (rodas.at(menu.getEscolha()));  
   }; 

ItemVenda * Sistema::escolheSonorizacao()
   {
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = sonorizacao.begin();
   
   while(varre != sonorizacao.end())
      {
         opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
         varre++;	
      };
   Menu menu("tipos de sonorizacao disponiveis", opcoes);

   return (sonorizacao.at(menu.getEscolha()));  
   }; 

   void Sistema::imprimirOrcto()
   {
       cout << "========================================\n";
       cout << "        ORÇAMENTO DA CONCESSIONÁRIA     \n";
       cout << "========================================\n";
       
       if (cliente)
       {
           cout << "Concessionária: " << cliente->getNome() << "\n";
           cout << "Endereço: " << cliente->getEndereco() << "\n";
           cout << "Cidade: " << cliente->getCidade() << "\n";
           cout << "Estado: " << cliente->getEstado() << "\n";
           cout << "Telefone: " << cliente->getFone() << "\n";
           
           const ConcessionariaModerna* concModerna = dynamic_cast<const ConcessionariaModerna*>(cliente);
           if (concModerna) {
               cout << "Site: " << concModerna->getSite() << "\n";
               cout << "Facebook: " << concModerna->getFacebook() << "\n";
               cout << "Twitter: " << concModerna->getTwitter() << "\n";
               cout << "WhatsApp: " << concModerna->getWhatsapp() << "\n";
           }
           cout << "----------------------------------------\n";
       }
       
       double total = 0.0;
       
       for (ItemVenda *item : orcamento)
       {
           cout << item->getDescricao() << " - R$ " << item->getValor() << "\n";
           total += item->getValor();
       }
       
       cout << "----------------------------------------\n";
       cout << "Total: R$ " << total << "\n";
       cout << "========================================\n";
   }
   
   
/* fim de arquivo */