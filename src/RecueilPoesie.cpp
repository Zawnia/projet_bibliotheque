#include "RecueilPoesie.h"
#include <iostream>

RecueilPoesie::RecueilPoesie()
    : Livre(), courantLitteraire("") {}

RecueilPoesie::RecueilPoesie(const std::string& titre,
                             const std::string& auteur,
                             const std::string& isbn,
                             const std::string& categorie,
                             const std::string& courantLitteraire)
    : Livre(titre, auteur, isbn, categorie),
      courantLitteraire(courantLitteraire) {}

RecueilPoesie::~RecueilPoesie() {}

void RecueilPoesie::afficher() const {
    Livre::afficher();
    std::cout << "Courant littéraire : " << courantLitteraire << std::endl;
}

std::string RecueilPoesie::getCourantLitteraire() const {
    return courantLitteraire;
}

std::ostream& operator<<(std::ostream& os, const RecueilPoesie& rp) {
    os << "[Poésie] " << rp.titre
       << " | Auteur : " << rp.auteur
       << " | Courant : " << rp.courantLitteraire
       << " | ISBN : " << rp.isbn;
    return os;
}
