#ifndef RECUEILPOESIE_H
#define RECUEILPOESIE_H

#include "Livre.h"
#include <string>

class RecueilPoesie : public Livre {
private:
    std::string courantLitteraire;

public:
    RecueilPoesie();
    RecueilPoesie(const std::string& titre,
                  const std::string& auteur,
                  const std::string& isbn,
                  const std::string& categorie,
                  const std::string& courantLitteraire);

    virtual ~RecueilPoesie();

    virtual void afficher() const override;

    std::string getCourantLitteraire() const;

    friend std::ostream& operator<<(std::ostream& os, const RecueilPoesie& rp);
};

#endif
