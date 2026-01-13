#include "livre.h"
#include <iostream>
using namespace std;

Livre::Livre(double code, std::string auteur, std::string editeur, std::string isbn, std::string public_cible, std::string etat) : code(code), auteur(auteur), editeur(editeur), isbn(isbn), public_cible(public_cible), etat(etat)
{
}

Livre::Livre()
{
    int code = 0; // Sert a différencier si plusieurs exemplaires (donc l'iSBN serait le meme)
    std::string auteur = "";
    std::string editeur = "";
    std::string isbn = "";
    std::string public_cible = ""; // adulte / ados / jeunesse / tout public
    std::string etat = "libre";    // libre / emprunté / prêté
}

Livre::~Livre()
{
    // destructeur
}

void Livre::afficher()
{
    cout << "code :" << code << "\n"
         << "auteur :" << auteur << "\n"
         << "editeur :" << editeur << "\n"
         << "isbn :" << isbn << "\n"
         << "public_cible :" << public_cible << "\n"
         << "etat :" << etat << "\n";
}

// Getters et Setters

string Livre::getISBN()
{
    return isbn;
}

string Livre::getEtat()
{
    return etat;
}

int Livre::getCode()
{
    return code;
}

void Livre::setEtat(string nouvel_etat)
{
    if (etat == "libre" || etat == "emprunté" || etat == "prêté")
    {
        etat = nouvel_etat;
    }
    else
    {
        cout << "Etat invalide. Veuillez choisir parmi 'libre', 'emprunté' ou 'prêté'." << endl;
    }
}
