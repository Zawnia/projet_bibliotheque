#include <iostream>
#include "src/Liste.h"

int main() {
    std::cout << "=== Test de la template Liste ===" << std::endl;
    
    std::cout << "\n1. Creation d'une liste d'entiers..." << std::endl;
    Liste<int> maListe;
    
    std::cout << "   Liste vide ? " << (maListe.estVide() ? "Oui" : "Non") << std::endl;
    
    std::cout << "\n2. Ajout de 3 elements..." << std::endl;
    maListe.ajouter(10);
    maListe.ajouter(20);
    maListe.ajouter(30);
    std::cout << "   Elements ajoutes : 10, 20, 30" << std::endl;
    
    std::cout << "   Liste vide ? " << (maListe.estVide() ? "Oui" : "Non") << std::endl;
    
    std::cout << "\n3. Test de contient()..." << std::endl;
    if (maListe.contient(20)) {
        std::cout << "   SUCCES : La liste contient 20" << std::endl;
    }
    if (!maListe.contient(50)) {
        std::cout << "   SUCCES : La liste ne contient pas 50" << std::endl;
    }
    
    std::cout << "\n4. Suppression de l'element 20..." << std::endl;
    maListe.supprimer(20);
    if (!maListe.contient(20)) {
        std::cout << "   SUCCES : L'element 20 a ete supprime" << std::endl;
    }
    
    std::cout << "\n5. Affichage de la liste..." << std::endl;
    maListe.afficher();
    
    std::cout << "\n=== Fin du test ===" << std::endl;
    return 0;
}
