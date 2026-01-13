#ifndef ALBUM_H
#define ALBUM_H

#include "Livre.h"
#include <string>

class Album : public Livre {
private:
    std::string typeIllustration; // "photo", "dessin" ou "les deux"

public:
    Album();
    Album(const std::string& titre,
          const std::string& auteur,
          const std::string& isbn,
          const std::string& categorie,
          const std::string& typeIllustration);

    virtual ~Album();

    virtual void afficher() const override;

    std::string getTypeIllustration() const;

    friend std::ostream& operator<<(std::ostream& os, const Album& album);
};

#endif
