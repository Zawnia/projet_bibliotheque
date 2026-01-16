#include "Livre.h"
#include <iostream>

Livre::Livre(const std::string& titre, const std::string& auteur, const std::string& isbn, const std::string& categorie)
    : code(0), titre(titre), auteur(auteur), editeur(""), isbn(isbn), categorie(categorie), etat("libre")
{
}

Livre::Livre()
    : code(0), titre(""), auteur(""), editeur(""), isbn(""), categorie(""), etat("libre")
{
}

Livre::~Livre()
{
}


void Livre::afficher() const
{
    std::cout << "Titre : " << titre << "\n"
              << "Code : " << code << "\n"
              << "Auteur : " << auteur << "\n"
              << "Editeur : " << editeur << "\n"
              << "ISBN : " << isbn << "\n"
              << "Categorie : " << categorie << "\n"
              << "Etat : " << etat << "\n";
}

std::string Livre::getISBN() const
{
    return isbn;
}

std::string Livre::getEtat() const
{
    return etat;
}

int Livre::getCode() const
{
    return code;
}

void Livre::setEtat(const std::string& nouvel_etat)
{
    if (nouvel_etat == "libre" || nouvel_etat == "emprunté" || nouvel_etat == "prêté")
    {
        etat = nouvel_etat;
    }
    else
    {
        std::cout << "Etat invalide. Veuillez choisir parmi 'libre', 'emprunté' ou 'prêté'." << std::endl;
    }
}

std::string Livre::getTitre() const { return titre; }
std::string Livre::getAuteur() const { return auteur; }
std::string Livre::getCategorie() const { return categorie; }
