#ifndef ADHERENT_H
#define ADHERENT_H

#include <iostream>
#include <string>
#include "Livre.h"
#include "Liste.h"

using namespace std;

class Adherent {
private:
    string nom;
    string prenom;
    int numAdherent;
    int maxEmprunts;
    int nbEmpruntsActuels;

    Liste<Livre*> emprunts; 

public:
    Adherent(string n, string p, int id, int max) 
        : nom(n), prenom(p), numAdherent(id), maxEmprunts(max), nbEmpruntsActuels(0) {}

    bool emprunter(Livre* livre);
    void rendre(Livre* livre);
    void afficher() const;

    string getNom() const { return nom; }
    int getNumero() const { return numAdherent; }
};

#endif