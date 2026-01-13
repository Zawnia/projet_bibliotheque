#ifndef LISTE_H
#define LISTE_H

#include <iostream>
using namespace std;

template <typename T>
class Liste;

template <typename T>
class Noeud
{
    friend class Liste<T>;

private:
    T info;
    Noeud<T> *suiv;

public:
    Noeud(T donnee) : info(donnee), suiv(NULL) {}
};

template <typename T>
class Liste
{
private:
    Noeud<T> *tete;

public:
    Liste() : tete(NULL) {}

    ~Liste()
    {
        Noeud<T> *courant = tete;
        while (courant != NULL)
        {
            Noeud<T> *aSupprimer = courant;
            courant = courant->suiv;
            delete aSupprimer;
        }
    }

    bool estVide() const
    {
        return tete == NULL;
    }

    void ajouter(T element)
    {
        Noeud<T> *nouveau = new Noeud<T>(element);
        nouveau->suiv = tete;
        tete = nouveau;
    }

    void afficher() const
    {
        Noeud<T> *courant = tete;
        while (courant != NULL)
        {
            cout << courant->info << " -> ";
            courant = courant->suiv;
        }
        cout << "NULL" << endl;
    }
};

#endif