#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
using namespace::std;

class Livre {

protected :
    double code;
    string auteur;
    string editeur;
    string isbn;
    string public_cible;
    string etat;

public :
    Livre(double code, std::string auteur, std::string editeur, std::string isbn, std::string public_cible, std::string etat);
    Livre();
    ~Livre();
    void afficher();
    string getISBN();
    int getCode();
    string getEtat();
    void setEtat(string nouvel_etat); 
};

#endif 


