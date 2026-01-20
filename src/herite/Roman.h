#ifndef ROMAN_H
#define ROMAN_H

#include "../Livre.h"
#include <string>
#include <ostream>

enum GenreRoman {
    LITTERATURE,
    ROMAN_NOIR,
    ROMAN_POLICIER,
    ROMAN_ANIMALIER,
    ROMAN_AMOUR,
    ROMAN_MOEURS,
    ROMAN_GOTHIQUE,
    ROMAN_COURTOIS,
    ROMAN_EPISTOLAIRE,
    ROMAN_FEUILLETON,
    ROMAN_GRAPHIQUE,
    ROMAN_HISTORIQUE,
    ROMAN_PHOTO,
    ROMAN_PICARESQUE,
    ROMAN_MEMOIRES,
    ROMAN_POPULAIRE,
    ROMAN_AVENTURES,
    ROMAN_ANTICIPATION,
    ROMAN_ESPIONNAGE,
    ROMAN_APPRENTISSAGE,
    ROMAN_CHEVALERIE,
    ROMAN_AUTOBIOGRAPHIQUE,
    NOUVEAU_ROMAN,
    CONTE,
    NOUVELLE
};

class Roman : public Livre {
private:
    GenreRoman genre;

public:
    Roman();
    Roman(const std::string& titre,
          const std::string& auteur,
          const std::string& isbn,
          Public publicCible,
          GenreRoman genre);

    virtual ~Roman();

    virtual void afficher() const override;

    GenreRoman getGenre() const;

    friend std::ostream& operator<<(std::ostream& os, const Roman& r);
};

#endif
