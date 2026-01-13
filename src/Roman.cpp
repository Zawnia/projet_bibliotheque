#include "Roman.h"
#include <iostream>

Roman::Roman(): Livre(), genre("") {}

Roman::Roman(const std::string& titre,
             const std::string& auteur,
             const std::string& isbn,
             const std::string& categorie,
             const std::string& genre)
    : Livre(titre, auteur, isbn, categorie),
      genre(genre) {}

Roman::~Roman() {}

void Roman::afficher() const {
    Livre::afficher();
    std::cout << "Genre : " << genre << std::endl;
}

std::string Roman::getGenre() const {
    return genre;
}

std::ostream& operator<<(std::ostream& os, const Roman& r) {
    os << "[Roman] " << r.titre
       << " | Auteur : " << r.auteur
       << " | Genre : " << r.genre
       << " | ISBN : " << r.isbn;
    return os;
}
