#include <iostream>
#include <string>
#include "src/Liste.h"

using namespace std;

int main() {
    // Test 1 : Liste d'entiers
    Liste<int> listeEntiers;
    listeEntiers.ajouter(10);
    listeEntiers.ajouter(20);
    
    std::cout << "Liste d'entiers : ";
    listeEntiers.afficher();

    // Test 2 : Liste de chaînes de caractères
    Liste<string> listeMots;
    listeMots.ajouter("Monde");
    listeMots.ajouter("Bonjour");

    std::cout << "Liste de mots : ";
    listeMots.afficher();

    return 0;
}








