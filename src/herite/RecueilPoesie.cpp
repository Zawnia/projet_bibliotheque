#include "RecueilPoesie.h"
#include <iostream>

RecueilPoesie::RecueilPoesie()
    : Livre(), courantLitteraire("") {
    categorie = RECUEIL_POESIE;
}

RecueilPoesie::RecueilPoesie(const std::string& titre,
                             const std::string& auteur,
                             const std::string& isbn,
                             Public publicCible,
                             const std::string& courantLitteraire)
    : Livre(titre, auteur, isbn, publicCible),
      courantLitteraire(courantLitteraire) {
    categorie = RECUEIL_POESIE;
}

RecueilPoesie::~RecueilPoesie() {}

void RecueilPoesie::afficher() const {
    std::cout << "Code : " << code << std::endl;
    std::cout << "Titre : " << titre << std::endl;
    std::cout << "Auteur : " << auteur << std::endl;
    std::cout << "Editeur : " << editeur << std::endl;
    std::cout << "ISBN : " << isbn << std::endl;
    std::cout << "Public : ";
    switch(publicCible) {
        case ADULTE: std::cout << "Adulte"; break;
        case ADOS: std::cout << "Ados"; break;
        case JEUNESSE: std::cout << "Jeunesse"; break;
        case TOUT_PUBLIC: std::cout << "Tout public"; break;
    }
    std::cout << std::endl;
    std::cout << "Etat : ";
    switch(etat) {
        case LIBRE: std::cout << "Libre"; break;
        case EMPRUNTE: std::cout << "Emprunté"; break;
        case PRETE: std::cout << "Prêté"; break;
    }
    std::cout << std::endl;
    std::cout << "Courant littéraire : " << courantLitteraire << std::endl;
}

std::string RecueilPoesie::getCourantLitteraire() const {
    return courantLitteraire;
}

std::ostream& operator<<(std::ostream& os, const RecueilPoesie& rp) {
    os << "[Poésie] " << rp.getTitre()
       << " | Auteur : " << rp.getAuteur()
       << " | Courant : " << rp.courantLitteraire
       << " | ISBN : " << rp.getISBN();
    return os;
}
