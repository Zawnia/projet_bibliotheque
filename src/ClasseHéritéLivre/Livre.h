// Classe de base pour les livres
#ifndef LIVRE_H
#define LIVRE_H

#include <string>

class Livre {
protected:
    int code;
    std::string titre;
    std::string auteur;
    std::string editeur;
    std::string isbn;
    std::string categorie;
    std::string etat;

public:
    Livre(const std::string& titre, const std::string& auteur, const std::string& isbn, const std::string& categorie);
    Livre();

    virtual ~Livre();

    virtual void afficher() const;

    std::string getISBN() const;
    
    int getCode() const;

    std::string getEtat() const;
    void setEtat(const std::string& nouvel_etat);

    std::string getTitre() const;
    std::string getAuteur() const;
    std::string getCategorie() const;
};

#endif