#include "Bibliotheque.h"
#include "Liste.h"
#include "Livre.h"
#include "Adherent.h"
#include <iostream>
#include <stdexcept>

Bibliotheque::Bibliotheque(const std::string& nom)
    : nom(nom) {}

void Bibliotheque::ajouterLivre(Livre* livre) {
    livres.ajouter(livre);
}

void Bibliotheque::acheterLivre(Livre* livre) {
    livres.ajouter(livre);
}

void Bibliotheque::inscrireAdherent(Adherent* adherent) {
    adherents.ajouter(adherent);
}

void Bibliotheque::afficherLivres() const {
    std::cout << "Catalogue de la bibliothèque " << nom << " :" << std::endl;
    Noeud<Livre*>* courant = livres.tete;
    int compteur = 1;
    while (courant != NULL) {
        std::cout << "\nLivre " << compteur << " :" << std::endl;
        courant->info->afficher();
        courant = courant->suiv;
        compteur++;
    }
    std::cout << std::endl;
}

void Bibliotheque::afficherLivresParCategorie(const std::string& categorie) const {
    std::cout << "Affichage par categorie non detaille (Liste simple)" << std::endl;
}

Livre* Bibliotheque::chercherLivreParCode(int code) const {
    Noeud<Livre*>* courant = livres.tete;
    while (courant != NULL) {
        if (courant->info->getCode() == code) {
            return courant->info;
        }
        courant = courant->suiv;
    }
    return NULL;
}

Adherent* Bibliotheque::chercherAdherent(int numero) const {
    Noeud<Adherent*>* courant = adherents.tete;
    while (courant != NULL) {
        if (courant->info->getNumero() == numero) {
            return courant->info;
        }
        courant = courant->suiv;
    }
    return NULL;
}

void Bibliotheque::emprunterLivre(int numeroAdherent, int codeLivre) {
    Adherent* adherent = chercherAdherent(numeroAdherent);
    if (adherent == NULL) {
        throw std::runtime_error("Adherent non trouvé");
    }

    Livre* livre = chercherLivreParCode(codeLivre);
    if (livre == NULL) {
        throw std::runtime_error("Livre non trouvé");
    }

    adherent->emprunter(livre);
}
