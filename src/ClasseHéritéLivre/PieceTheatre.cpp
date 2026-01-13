#include "PieceTheatre.h"
#include <iostream>

PieceTheatre::PieceTheatre()
    : Livre(), siecle(0) {}

PieceTheatre::PieceTheatre(const std::string& titre,
                           const std::string& auteur,
                           const std::string& isbn,
                           const std::string& categorie,
                           int siecle)
    : Livre(titre, auteur, isbn, categorie),
      siecle(siecle) {}

PieceTheatre::~PieceTheatre() {}

void PieceTheatre::afficher() const {
    Livre::afficher();
    std::cout << "Siècle : " << siecle << std::endl;
}

int PieceTheatre::getSiecle() const {
    return siecle;
}

std::ostream& operator<<(std::ostream& os, const PieceTheatre& pt) {
    os << "[Pièce de théâtre] " << pt.titre
       << " | Auteur : " << pt.auteur
       << " | Siècle : " << pt.siecle
       << " | ISBN : " << pt.isbn;
    return os;
}
