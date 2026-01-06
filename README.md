# Projet C++ : Gestion de Réseau de Bibliothèques

**Année :** 2025-2026  
**Évaluation :** ECM-S7-PROJET C++  
**Date de rendu :** 20 Janvier 2026

## Description du Projet
Ce projet a pour but de modéliser et gérer un réseau de bibliothèques. L'application permet de gérer les stocks de livres, les adhérents, ainsi que les flux d'emprunts et d'échanges entre bibliothèques.

L'objectif principal est de mettre en pratique l'ensemble des notions de **Programmation Orientée Objet (POO)** vues au cours du semestre, avec une implémentation stricte de structures de données manuelles (sans conteneurs STL standards type `std::vector` pour les listes principales).

## Fonctionnalités Principales

### Gestion des Bibliothèques
* Achat de nouveaux ouvrages.
* Suppression d'ouvrages (perte ou mise au pilon).
* Échange de livres entre bibliothèques (via ISBN).
* Affichage du catalogue (complet ou par catégorie).

### Gestion des Adhérents
* Inscription d'adhérents à une bibliothèque.
* **Emprunt de livres** (vérification des quotas, de l'état du livre et des droits de l'adhérent).
* **Retour de livres**.

### Modélisation des Livres (Héritage)
Le système gère différents types de documents via une classe de base `Livre` polymorphe :
* **Roman** (avec genres : Policier, SF, Amour...).
* **Bande Dessinée** (avec dessinateur).
* **Pièce de Théâtre** (avec siècle).
* **Recueil de Poésie** (Vers ou Prose).
* **Album** (Dessins ou Photos).

## Contraintes Techniques Respectées

Ce projet intègre impérativement les notions techniques suivantes :

* **Programmation Orientée Objet :** Encapsulation, Héritage, Polymorphisme.
* **Classes Virtuelles & Abstraites :** Utilisation de `virtual` pour la gestion générique des livres (ex: méthode `afficher()`).
* **Templates (Patrons) :** Création d'une structure de données générique `Liste<T>` pour gérer les collections (Livres, Adhérents).
* **Listes Chaînées :** Implémentation manuelle (classe `Noeud` et `Liste`) pour remplacer les vecteurs.
* **Surcharge d'opérateurs :** Pour faciliter les manipulations d'objets (ex: affichage via `<<`).
* **Gestion des Exceptions :** Traitement des erreurs (livre non trouvé, quota dépassé, etc.).
* **Fonctions Amies & Membres Statiques.**

## Architecture du Code

* `main.cpp` : Point d'entrée, tests et scénarios d'exécution.
* `Livre.*` : Classe mère abstraite.
* `Roman.*`, `BD.*`, etc. : Classes dérivées spécifiques.
* `Bibliotheque.*` : Gestionnaire central d'une entité bibliothèque.
* `Adherent.*` : Gestion des utilisateurs et de leurs emprunts actuels.
* `Liste.h` : **Classe Template** gérant la liste chaînée générique (pas de `.cpp` pour les templates).

## Compilation et Exécution

Le projet ne nécessite aucune bibliothèque externe hors standard C++.

**Via g++ (Terminal) :**
```bash
g++ -o projet_bibliotheque *.cpp
./projet_bibliotheque
```


