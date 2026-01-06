#ifndef LISTE_H
#define LISTE_H

#include <iostream>
using namespace std;

template <typename T>
class Liste {
};




template <typename T>
class Noeud
{
    friend class Liste<T>;

private:
    T info;
    Noeud<T> *suiv;

public:
    Noeud(T donnee)
    {
        this->info = donnee;
        this->suiv = NULL;
    }
};

#endif