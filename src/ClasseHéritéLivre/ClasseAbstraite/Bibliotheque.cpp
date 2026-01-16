#include "Bibliotheque.h"
#include <iostream>
#include <stdexcept>

Bibliotheque::Bibliotheque(const std::string& nom)
    : nom(nom) {}

void Bibliotheque::ajouterLivre(Livre* livre) {
    livres.ajouter(livre);
}

void Bibliotheque::inscrireAdherent(Adherent* adherent) {
    adherents.ajouter(adherent);
}

void Bibliotheque::afficherLivres() const {
    livres.afficher();
}

void Bibliotheque::afficherLivresParCategorie(const std::string& categorie) const {
    std::cout << "Affichage par categorie non detaille (Liste simple)" << std::endl;
}

Livre* Bibliotheque::chercherLivreParCode(int code) const {
    throw std::runtime_error("Recherche non implementee (Liste simple)");
}

Adherent* Bibliotheque::chercherAdherent(int numero) const {
    throw std::runtime_error("Recherche non implementee (Liste simple)");
}

void Bibliotheque::emprunterLivre(int numeroAdherent, int codeLivre) {
    throw std::runtime_error("Emprunt non implemente (Liste simple)");
}
