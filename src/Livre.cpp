#include "Livre.h"
#include <iostream>

int Livre::prochainCode = 1;

Livre::Livre(const std::string& titre, const std::string& auteur, const std::string& isbn, Public publicCible)
    : code(prochainCode++), titre(titre), auteur(auteur), editeur(""), isbn(isbn), publicCible(publicCible), etat(LIBRE)
{
}

Livre::Livre()
    : code(prochainCode++), titre(""), auteur(""), editeur(""), isbn(""), publicCible(TOUT_PUBLIC), etat(LIBRE)
{
}

Livre::~Livre()
{
}

std::string Livre::getISBN() const
{
    return isbn;
}

int Livre::getCode() const
{
    return code;
}

Etat Livre::getEtat() const
{
    return etat;
}

void Livre::setEtat(Etat nouvel_etat)
{
    etat = nouvel_etat;
}

std::string Livre::getTitre() const
{
    return titre;
}

std::string Livre::getAuteur() const
{
    return auteur;
}

Public Livre::getPublicCible() const
{
    return publicCible;
}
