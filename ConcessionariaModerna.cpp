#include <string>
#include "ConcessionariaModerna.hpp"

using namespace std;

ConcessionariaModerna::ConcessionariaModerna(string nome, string endereco, string cidade, string estado, string fone,
                                           string site, string facebook, string twitter, string whatsapp)
    : Concessionaria(nome, endereco, cidade, estado, fone) {
    this->site = site;
    this->facebook = facebook;
    this->twitter = twitter;
    this->whatsapp = whatsapp;
}

string ConcessionariaModerna::getSite() const { return (site); }
string ConcessionariaModerna::getFacebook() const { return (facebook); }
string ConcessionariaModerna::getTwitter() const { return (twitter); }
string ConcessionariaModerna::getWhatsapp() const { return (whatsapp); }

void ConcessionariaModerna::setSite(string site) { this->site = site; }
void ConcessionariaModerna::setFacebook(string facebook) { this->facebook = facebook; }
void ConcessionariaModerna::setTwitter(string twitter) { this->twitter = twitter; }
void ConcessionariaModerna::setWhatsapp(string whatsapp) { this->whatsapp = whatsapp; }