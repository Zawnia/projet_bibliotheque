#ifndef LISTE_H
#define LISTE_H

#include <iostream>
using namespace std;

template <typename T>
class Liste;

class Bibliotheque;

template <typename T>
class Noeud
{
    friend class Liste<T>;
    friend class Bibliotheque;

private:
    T info;
    Noeud<T> *suiv;

public:
    Noeud(T donnee) : info(donnee), suiv(NULL) {}
};

class Bibliotheque;

template <typename T>
class Liste
{
    friend class Bibliotheque;

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

    T* chercher(T element)
    {
        Noeud<T> *courant = tete;
        while (courant != NULL)
        {
            if (courant->info == element)
            {
                return &(courant->info);
            }
            courant = courant->suiv;
        }
        return NULL;
    }

    bool contient(T element) const
    {
        Noeud<T> *courant = tete;
        while (courant != NULL)
        {
            if (courant->info == element)
            {
                return true;
            }
            courant = courant->suiv;
        }
        return false;
    }

    void supprimer(T element)
    {
        if (tete == NULL)
            return;

        if (tete->info == element)
        {
            Noeud<T> *aSupprimer = tete;
            tete = tete->suiv;
            delete aSupprimer;
            return;
        }

        Noeud<T> *precedent = tete;
        Noeud<T> *courant = tete->suiv;
        while (courant != NULL)
        {
            if (courant->info == element)
            {
                precedent->suiv = courant->suiv;
                delete courant;
                return;
            }
            precedent = courant;
            courant = courant->suiv;
        }
    }
};

#endif