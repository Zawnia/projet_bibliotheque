#include <iostream>
#include <string>
#include "src/Bibliotheque.h"
#include "src/Adherent.h"
#include "src/Livre.h"
#include "src/herite/Roman.h"
#include "src/herite/BandeDessinee.h"
#include <stdexcept>

int main() {
    std::cout << "Tests" << std::endl << std::endl;

    std::cout << "1. Creation d'une bibliotheque..." << std::endl;
    Bibliotheque bibliotheque("Bibliotheque Centrale");

    std::cout << "\n2. Creation de livres (2 Romans + 1 BD)..." << std::endl;
    Roman roman1("1984", "George Orwell", "978-2070368228", ADULTE, ROMAN_ANTICIPATION);
    Roman roman2("Le Meurtre de Roger Ackroyd", "Agatha Christie", "978-2070407910", ADULTE, ROMAN_POLICIER);
    BandeDessinee bd1("Tintin au Tibet", "Hergé", "978-2203001081", JEUNESSE, "Hergé");

    bibliotheque.acheterLivre(&roman1);
    bibliotheque.acheterLivre(&roman2);
    bibliotheque.acheterLivre(&bd1);

    std::cout << "   Livres crees avec les codes : " << roman1.getCode() 
              << ", " << roman2.getCode() << ", " << bd1.getCode() << std::endl;

    std::cout << "\n3. Creation d'un adherent..." << std::endl;
    Adherent adherent("Dupont", "Jean", 1001, 5);
    bibliotheque.inscrireAdherent(&adherent);
    std::cout << "   Adherent inscrit : " << adherent.getNom() << " " << adherent.getNumero() << std::endl;

    std::cout << "\n4. Affichage du catalogue..." << std::endl;
    bibliotheque.afficherLivres();

    std::cout << "\n5. L'adherent emprunte le livre #" << roman1.getCode() << " (1984)..." << std::endl;
    try {
        adherent.emprunter(&roman1);
        std::cout << "   SUCCES : Le livre a ete emprunte." << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "   ERREUR : " << e.what() << std::endl;
    }

    std::cout << "\n6. L'adherent essaie d'emprunter le MEME livre..." << std::endl;
    try {
        adherent.emprunter(&roman1);
        std::cout << "   ERREUR : Le livre aurait du etre refuse !" << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "   SUCCES : Exception attrapee - " << e.what() << std::endl;
    }

    std::cout << "\n7. L'adherent emprunte le livre #" << roman2.getCode() << " (Le Meurtre de Roger Ackroyd)..." << std::endl;
    try {
        adherent.emprunter(&roman2);
        std::cout << "   SUCCES : Le livre a ete emprunte." << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "   ERREUR : " << e.what() << std::endl;
    }

    std::cout << "\n8. L'adherent rend le livre #" << roman1.getCode() << " (1984)..." << std::endl;
    try {
        adherent.rendre(&roman1);
        std::cout << "   SUCCES : Le livre a ete rendu." << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "   ERREUR : " << e.what() << std::endl;
    }

    std::cout << "\n9. Affichage de l'etat final..." << std::endl;
    std::cout << "\n--- Etat de l'adherent ---" << std::endl;
    adherent.afficher();

    std::cout << "\nCatalogue de la bibliotheque" << std::endl;
    bibliotheque.afficherLivres();


    return 0;
}
