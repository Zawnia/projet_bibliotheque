#include "Adherent.h"
#include "Bibliotheque.h"
#include <iostream>
#include <stdexcept>

Adherent::Adherent(const std::string& nom,
                   const std::string& prenom,
                   const std::string& adresse,
                   int numero,
                   int maxEmprunts,
                   Bibliotheque* biblio)
    : nom(nom), prenom(prenom), adresse(adresse),
      numero(numero), bibliotheque(biblio),
      maxEmprunts(maxEmprunts) {}

int Adherent::getNumero() const {
    return numero;
}

void Adherent::afficher() const {
    std::cout << "Adherent n°" << numero << " : "
              << nom << " " << prenom << std::endl;
    livresEmpruntes.afficher();
}

void Adherent::emprunterLivre(Livre* livre) {
    if (livre->getEtat() != "libre")
        throw std::runtime_error("Livre non libre");

    livre->setEtat("emprunte");
    livresEmpruntes.ajouter(livre);
}

void Adherent::rendreLivre(int codeLivre) {
    // pas de suppression possible avec ta Liste
    // on se contente de remettre l'état
    throw std::runtime_error("Rendu non implemente (Liste sans suppression)");
}
