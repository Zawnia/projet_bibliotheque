#include "PieceTheatre.h"
#include <iostream>

PieceTheatre::PieceTheatre()
    : Livre(), siecle(0) {
    categorie = PIECE_THEATRE;
}

PieceTheatre::PieceTheatre(const std::string& titre,
                           const std::string& auteur,
                           const std::string& isbn,
                           Public publicCible,
                           int siecle)
    : Livre(titre, auteur, isbn, publicCible),
      siecle(siecle) {
    categorie = PIECE_THEATRE;
}

PieceTheatre::~PieceTheatre() {}

void PieceTheatre::afficher() const {
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
    std::cout << "Siècle : " << siecle << std::endl;
}

int PieceTheatre::getSiecle() const {
    return siecle;
}

std::ostream& operator<<(std::ostream& os, const PieceTheatre& pt) {
    os << "[Pièce de théâtre] " << pt.getTitre()
       << " | Auteur : " << pt.getAuteur()
       << " | Siècle : " << pt.siecle
       << " | ISBN : " << pt.getISBN();
    return os;
}
