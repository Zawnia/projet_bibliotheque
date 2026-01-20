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
    void afficherLivresParCategorie(CategorieLivre categorieVoulue) const;

    void ajouterLivre(Livre* livre);
    void acheterLivre(Livre* livre);
    void inscrireAdherent(Adherent* adherent);

    Livre* chercherLivreParCode(int code) const;
    Livre* chercherLivreParISBN(const std::string& isbn) const;
    Adherent* chercherAdherent(int numero) const;

    void emprunterLivre(int numeroAdherent, int codeLivre);
    void supprimerLivre(int codeLivre);
    void demanderLivre(const std::string& isbn, Bibliotheque& autre);
};

#endif
