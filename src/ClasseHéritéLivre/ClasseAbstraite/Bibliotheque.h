#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <string>
#include "Liste.h"
#include "Livre.h"
#include "Adherent.h"

class Bibliotheque {
private:
    std::string nom;
    Liste<Livre*> livres;
    Liste<Adherent*> adherents;

public:
    Bibliotheque(const std::string& nom);

    void afficherLivres() const;
    void afficherLivresParCategorie(const std::string& categorie) const;

    void ajouterLivre(Livre* livre);
    void inscrireAdherent(Adherent* adherent);

    Livre* chercherLivreParCode(int code) const;
    Adherent* chercherAdherent(int numero) const;

    void emprunterLivre(int numeroAdherent, int codeLivre);
};

#endif
