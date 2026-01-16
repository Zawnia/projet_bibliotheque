#include "Album.h"
#include <iostream>

Album::Album()
    : Livre(), typeIllustration("") {}

Album::Album(const std::string& titre,
             const std::string& auteur,
             const std::string& isbn,
             const std::string& categorie,
             const std::string& typeIllustration)
    : Livre(titre, auteur, isbn, categorie),
      typeIllustration(typeIllustration) {}

Album::~Album() {}

void Album::afficher() const {
    Livre::afficher();
    std::cout << "Type d'illustration : " << typeIllustration << std::endl;
}

std::string Album::getTypeIllustration() const {
    return typeIllustration;
}

std::ostream& operator<<(std::ostream& os, const Album& album) {
    os << "[Album] " << album.titre
       << " | Auteur : " << album.auteur
       << " | Illustrations : " << album.typeIllustration
       << " | ISBN : " << album.isbn;
    return os;
}
