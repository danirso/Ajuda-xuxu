#ifndef CONCESSIONARIA_MODERNA_HPP
#define CONCESSIONARIA_MODERNA_HPP

#include "Concessionaria.hpp"
#include <string>
using namespace std;

class ConcessionariaModerna : public Concessionaria {
private:
    string site;
    string facebook;
    string twitter;
    string whatsapp;

public:
    // Construtor
    ConcessionariaModerna(string nome, string endereco, string cidade, string estado, string fone,
                         string site, string facebook, string twitter, string whatsapp);
    
    // Getters
    string getSite() const;
    string getFacebook() const;
    string getTwitter() const;
    string getWhatsapp() const;
    
    // Setters
    void setSite(string site);
    void setFacebook(string facebook);
    void setTwitter(string twitter);
    void setWhatsapp(string whatsapp);
};

#endif // CONCESSIONARIA_MODERNA_HPP