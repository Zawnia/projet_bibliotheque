#ifndef ADHERENT_H
#define ADHERENT_H

#include <string>
#include "Liste.h"
#include "Livre.h"

class Bibliotheque;

class Adherent {
private:
    std::string nom;
    std::string prenom;
    std::string adresse;
    int numero;
    Bibliotheque* bibliotheque;
    Liste<Livre*> livresEmpruntes;
    int maxEmprunts;

public:
    Adherent(const std::string& nom,
             const std::string& prenom,
             const std::string& adresse,
             int numero,
             int maxEmprunts,
             Bibliotheque* biblio);

    void afficher() const;

    int getNumero() const;

    void emprunterLivre(Livre* livre);
    void rendreLivre(int codeLivre);
};

#endif
