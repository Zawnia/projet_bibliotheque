#include <iostream>
#include <string>
#include "src/Bibliotheque.h"
#include "src/herite/Roman.h"
#include "src/herite/BandeDessinee.h"
#include <stdexcept>

int main() {
    std::cout << "=== Test d'echange entre bibliotheques ===" << std::endl;
    
    std::cout << "\n1. Creation de deux bibliotheques..." << std::endl;
    Bibliotheque bibliothequeA("Bibliotheque Centre-Ville");
    Bibliotheque bibliothequeB("Bibliotheque Banlieue");
    
    std::cout << "   - Bibliotheque A : " << "Bibliotheque Centre-Ville" << std::endl;
    std::cout << "   - Bibliotheque B : " << "Bibliotheque Banlieue" << std::endl;
    
    std::cout << "\n2. Ajout de livres a la bibliotheque A..." << std::endl;
    Roman roman1("1984", "George Orwell", "978-2070368228", ADULTE, ROMAN_ANTICIPATION);
    Roman roman2("Le Meurtre de Roger Ackroyd", "Agatha Christie", "978-2070407910", ADULTE, ROMAN_POLICIER);
    BandeDessinee bd1("Tintin au Tibet", "Hergé", "978-2203001081", JEUNESSE, "Hergé");
    
    bibliothequeA.acheterLivre(&roman1);
    bibliothequeA.acheterLivre(&roman2);
    bibliothequeA.acheterLivre(&bd1);
    
    std::cout << "   - 3 livres ajoutes a la bibliotheque A" << std::endl;
    
    std::cout << "\n3. Affichage du catalogue de la bibliotheque A..." << std::endl;
    bibliothequeA.afficherLivres();
    
    std::cout << "\n4. Catalogue de la bibliotheque B (vide)..." << std::endl;
    bibliothequeB.afficherLivres();
    
    std::cout << "\n5. Echange : La bibliotheque B demande le livre 1984 (ISBN: 978-2070368228)..." << std::endl;
    try {
        bibliothequeB.demanderLivre("978-2070368228", bibliothequeA);
        std::cout << "   SUCCES : Le livre a ete transfere de A vers B" << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "   ERREUR : " << e.what() << std::endl;
    }
    
    std::cout << "\n6. Catalogue de la bibliotheque A apres echange..." << std::endl;
    bibliothequeA.afficherLivres();
    
    std::cout << "\n7. Catalogue de la bibliotheque B apres echange..." << std::endl;
    bibliothequeB.afficherLivres();
    
    std::cout << "\n8. Verification : Recherche du livre dans A et B..." << std::endl;
    Livre* livreDansA = bibliothequeA.chercherLivreParISBN("978-2070368228");
    Livre* livreDansB = bibliothequeB.chercherLivreParISBN("978-2070368228");
    
    if (livreDansA == NULL) {
        std::cout << "   SUCCES : Le livre n'est plus dans la bibliotheque A" << std::endl;
    } else {
        std::cout << "   ERREUR : Le livre est encore dans la bibliotheque A" << std::endl;
    }
    
    if (livreDansB != NULL) {
        std::cout << "   SUCCES : Le livre est maintenant dans la bibliotheque B" << std::endl;
    } else {
        std::cout << "   ERREUR : Le livre n'est pas dans la bibliotheque B" << std::endl;
    }
    
    std::cout << "\n=== Fin du test ===" << std::endl;
    return 0;
}
