#include "BandeDessinee.h"
#include <iostream>

BandeDessinee::BandeDessinee()
    : Livre(), dessinateur("") {
    categorie = BANDE_DESSINEE;
}

BandeDessinee::BandeDessinee(const std::string& titre,
                             const std::string& auteur,
                             const std::string& isbn,
                             Public publicCible,
                             const std::string& dessinateur)
        : Livre(titre, auteur, isbn, publicCible),
            dessinateur(dessinateur) {
    categorie = BANDE_DESSINEE;
}

BandeDessinee::~BandeDessinee() {}

void BandeDessinee::afficher() const {
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
    std::cout << "Dessinateur : " << dessinateur << std::endl;
}

std::string BandeDessinee::getDessinateur() const {
    return dessinateur;
}

std::ostream& operator<<(std::ostream& os, const BandeDessinee& bd) {
    os << "[BD] " << bd.getTitre() 
       << " | Auteur : " << bd.getAuteur()
       << " | Dessinateur : " << bd.getDessinateur()
       << " | ISBN : " << bd.getISBN();
    return os;
}
