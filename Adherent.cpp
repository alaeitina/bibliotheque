//
// Created by Tina Alaei on 14/01/2020.
//

#include "Adherent.h"


Adherent::Adherent(string n, string p, int num, Bibliotheque* bibliotheque, int nbEmpr){
    nom = n;
    prenom = p;
    numAdherent = num;
    inscritA = bibliotheque;
    nbEmprunts = nbEmpr;
}


Adherent::Adherent(Adherent &other){
    nom = other.nom;
    prenom = other.prenom;
    numAdherent = other.numAdherent;
    inscritA = other.inscritA;
    nbEmprunts = other.nbEmprunts;
}