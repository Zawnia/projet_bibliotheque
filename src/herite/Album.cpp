#include "Album.h"
#include <iostream>

Album::Album()
    : Livre(), typeIllustration("") {
    categorie = ALBUM;
}

Album::Album(const std::string& titre,
             const std::string& auteur,
             const std::string& isbn,
             Public publicCible,
             const std::string& typeIllustration)
    : Livre(titre, auteur, isbn, publicCible),
      typeIllustration(typeIllustration) {
    categorie = ALBUM;
}

Album::~Album() {}

void Album::afficher() const {
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
    std::cout << "Type d'illustration : " << typeIllustration << std::endl;
}

std::string Album::getTypeIllustration() const {
    return typeIllustration;
}

std::ostream& operator<<(std::ostream& os, const Album& album) {
    os << "[Album] " << album.getTitre()
       << " | Auteur : " << album.getAuteur()
       << " | Illustrations : " << album.typeIllustration
       << " | ISBN : " << album.getISBN();
    return os;
}
