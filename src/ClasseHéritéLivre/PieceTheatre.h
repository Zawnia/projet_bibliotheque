#ifndef PIECETHEATRE_H
#define PIECETHEATRE_H

#include "Livre.h"
#include <string>
#include <ostream>

class PieceTheatre : public Livre {
private:
    int siecle; // siècle de la pièce

public:
    PieceTheatre();
    PieceTheatre(const std::string& titre,
                 const std::string& auteur,
                 const std::string& isbn,
                 const std::string& categorie,
                 int siecle);

    virtual ~PieceTheatre();

    virtual void afficher() const override;

    int getSiecle() const;

    friend std::ostream& operator<<(std::ostream& os, const PieceTheatre& pt);
};

#endif
