#ifndef BANDEDESSINEE_H
#define BANDEDESSINEE_H

#include "../Livre.h"
#include <string>

class BandeDessinee : public Livre {
private:
    std::string dessinateur;

public:
    BandeDessinee();
    BandeDessinee(const std::string& titre,
                  const std::string& auteur,
                  const std::string& isbn,
                  Public publicCible,
                  const std::string& dessinateur);

    virtual ~BandeDessinee();

    virtual void afficher() const override;

    std::string getDessinateur() const;

    friend std::ostream& operator<<(std::ostream& os, const BandeDessinee& bd);
};

#endif
