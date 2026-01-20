#include <iostream>
#include <string>
#include "src/Bibliotheque.h"
#include "src/herite/Roman.h"
#include "src/herite/BandeDessinee.h"
#include "src/herite/PieceTheatre.h"
#include "src/herite/RecueilPoesie.h"
#include "src/herite/Album.h"
#include <stdexcept>

int main() {
    std::cout << "=== Test des categories et suppression ===" << std::endl;
    
    std::cout << "\n1. Creation d'une bibliotheque..." << std::endl;
    Bibliotheque bibliotheque("Bibliotheque Centrale");
    
    std::cout << "\n2. Ajout de differents types de livres..." << std::endl;
    Roman roman1("1984", "George Orwell", "978-2070368228", ADULTE, ROMAN_ANTICIPATION);
    Roman roman2("Le Meurtre de Roger Ackroyd", "Agatha Christie", "978-2070407910", ADULTE, ROMAN_POLICIER);
    BandeDessinee bd1("Tintin au Tibet", "Hergé", "978-2203001081", JEUNESSE, "Hergé");
    PieceTheatre piece1("Le Cid", "Pierre Corneille", "978-2070374730", ADULTE, 17);
    
    bibliotheque.acheterLivre(&roman1);
    bibliotheque.acheterLivre(&roman2);
    bibliotheque.acheterLivre(&bd1);
    bibliotheque.acheterLivre(&piece1);
    
    std::cout << "   - 2 Romans ajoutes" << std::endl;
    std::cout << "   - 1 Bande dessinee ajoutee" << std::endl;
    std::cout << "   - 1 Piece de theatre ajoutee" << std::endl;
    
    std::cout << "\n3. Affichage complet du catalogue..." << std::endl;
    bibliotheque.afficherLivres();
    
    std::cout << "\n4. Affichage des livres de la categorie 'Roman'..." << std::endl;
    bibliotheque.afficherLivresParCategorie("Roman");
    
    std::cout << "\n5. Affichage des livres de la categorie 'BandeDessinee'..." << std::endl;
    bibliotheque.afficherLivresParCategorie("BandeDessinee");
    
    std::cout << "\n6. Suppression d'un livre..." << std::endl;
    try {
        std::cout << "   Suppression du livre avec code " << roman1.getCode() << std::endl;
        bibliotheque.supprimerLivre(roman1.getCode());
        std::cout << "   SUCCES : Le livre a ete supprime" << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "   ERREUR : " << e.what() << std::endl;
    }
    
    std::cout << "\n7. Affichage du catalogue apres suppression..." << std::endl;
    bibliotheque.afficherLivres();
    
    std::cout << "\n8. Verification que le livre supprime n'apparait plus..." << std::endl;
    std::cout << "   Affichage des Romans (il ne devrait en rester qu'un)..." << std::endl;
    bibliotheque.afficherLivresParCategorie("Roman");
    
    std::cout << "\n=== Fin du test ===" << std::endl;
    return 0;
}
