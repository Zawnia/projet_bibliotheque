#include <iostream>
#include "src/Livre.h"
#include "src/herite/Roman.h"
#include "src/herite/BandeDessinee.h"
#include "src/herite/PieceTheatre.h"

int main() {
    std::cout << "=== Test de l'heritage et polymorphisme ===" << std::endl;
    
    std::cout << "\n1. Creation de differents types de livres..." << std::endl;
    Roman roman("1984", "George Orwell", "978-2070368228", ADULTE, ROMAN_ANTICIPATION);
    BandeDessinee bd("Tintin au Tibet", "Hergé", "978-2203001081", JEUNESSE, "Hergé");
    PieceTheatre piece("Le Cid", "Pierre Corneille", "978-2070374730", ADULTE, 17);
    
    std::cout << "   - Roman cree" << std::endl;
    std::cout << "   - Bande dessinee creee" << std::endl;
    std::cout << "   - Piece de theatre creee" << std::endl;
    
    std::cout << "\n2. Utilisation de pointeurs Livre* pour polymorphisme..." << std::endl;
    Livre* livres[3];
    livres[0] = &roman;
    livres[1] = &bd;
    livres[2] = &piece;
    
    std::cout << "\n3. Appel de afficher() de maniere polymorphe..." << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "\n--- Livre " << (i + 1) << " ---" << std::endl;
        livres[i]->afficher();
    }
    
    std::cout << "\n4. Verification des categories..." << std::endl;
    std::cout << "   Roman -> categorie : " << roman.getCategorie() << std::endl;
    std::cout << "   BandeDessinee -> categorie : " << bd.getCategorie() << std::endl;
    std::cout << "   PieceTheatre -> categorie : " << piece.getCategorie() << std::endl;
    
    std::cout << "\n=== Fin du test ===" << std::endl;
    return 0;
}
