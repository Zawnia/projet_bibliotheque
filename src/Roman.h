#ifndef ROMAN_H
#define ROMAN_H

#include "Livre.h"
#include <string>

class Roman : public Livre {
private:
    std::string genre;

public:
    Roman();
    Roman(const std::string& titre,
          const std::string& auteur,
          const std::string& isbn,
          const std::string& categorie,
          const std::string& genre);

    virtual ~Roman();

    virtual void afficher() const override;

    std::string getGenre() const;

    friend std::ostream& operator<<(std::ostream& os, const Roman& r);
};

#endif
