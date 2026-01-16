#include "BandeDessinee.h"
#include <iostream>

BandeDessinee::BandeDessinee()
    : Livre(), dessinateur("") {}

BandeDessinee::BandeDessinee(const std::string& titre,
                             const std::string& auteur,
                             const std::string& isbn,
                             const std::string& categorie,
                             const std::string& dessinateur,
                                                         const std::string& scenariste,
                                                         int tome)
        : Livre(titre, auteur, isbn, categorie),
            dessinateur(dessinateur) {}

BandeDessinee::~BandeDessinee() {}

void BandeDessinee::afficher() const {
    Livre::afficher();
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
