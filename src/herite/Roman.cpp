#include "Roman.h"
#include <iostream>
#include <string>

Roman::Roman(): Livre(), genre(LITTERATURE) {
    categorie = ROMAN;
}

Roman::Roman(const std::string& titre,
             const std::string& auteur,
             const std::string& isbn,
             Public publicCible,
             GenreRoman genre)
    : Livre(titre, auteur, isbn, publicCible),
      genre(genre) {
    categorie = ROMAN;
}

Roman::~Roman() {}

void Roman::afficher() const {
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
    std::cout << "Genre : ";
    switch(genre) {
        case LITTERATURE: std::cout << "Littérature"; break;
        case ROMAN_POLICIER: std::cout << "Roman policier"; break;
        case ROMAN_AMOUR: std::cout << "Roman d'amour"; break;
        default: std::cout << "Autre genre"; break;
    }
    std::cout << std::endl;
}

GenreRoman Roman::getGenre() const {
    return genre;
}

std::ostream& operator<<(std::ostream& os, const Roman& r) {
    os << "[Roman] " << r.getTitre()
       << " | Auteur : " << r.getAuteur()
       << " | Genre : " << (int)r.genre
       << " | ISBN : " << r.getISBN();
    return os;
}
