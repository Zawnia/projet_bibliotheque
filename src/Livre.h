#ifndef LIVRE_H
#define LIVRE_H

#include <string>

enum Etat {
    LIBRE,
    EMPRUNTE,
    PRETE
};

enum Public {
    ADULTE,
    ADOS,
    JEUNESSE,
    TOUT_PUBLIC
};

class Livre {
protected:
    static int prochainCode;
    int code;
    std::string titre;
    std::string auteur;
    std::string editeur;
    std::string isbn;
    Public publicCible;
    Etat etat;

public:
    Livre(const std::string& titre, const std::string& auteur, const std::string& isbn, Public publicCible);
    Livre();

    virtual ~Livre();

    virtual void afficher() const = 0;

    std::string getISBN() const;
    int getCode() const;
    Etat getEtat() const;
    void setEtat(Etat nouvel_etat);
    std::string getTitre() const;
    std::string getAuteur() const;
    Public getPublicCible() const;
};

#endif