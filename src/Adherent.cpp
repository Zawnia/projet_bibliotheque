#include "Adherent.h"
#include "Livre.h"
#include <iostream>
#include <stdexcept>

bool Adherent::emprunter(Livre* livre) {
    if (nbEmpruntsActuels >= maxEmprunts) {
        throw std::runtime_error("Quota maximum d'emprunts atteint");
    }

    if (livre->getEtat() != LIBRE) {
        throw std::runtime_error("Livre non libre");
    }

    if (emprunts.contient(livre)) {
        throw std::runtime_error("Livre déjà emprunté par cet adhérent");
    }

    livre->setEtat(EMPRUNTE);
    emprunts.ajouter(livre);
    nbEmpruntsActuels++;
    return true;
}

void Adherent::rendre(Livre* livre) {
    if (!emprunts.contient(livre)) {
        throw std::runtime_error("Ce livre n'a pas été emprunté par cet adhérent");
    }

    livre->setEtat(LIBRE);
    emprunts.supprimer(livre);
    nbEmpruntsActuels--;
}

void Adherent::afficher() const {
    std::cout << "Adherent n°" << numAdherent << " : "
              << nom << " " << prenom << std::endl;
    std::cout << "Emprunts actuels : " << nbEmpruntsActuels << "/" << maxEmprunts << std::endl;
}
