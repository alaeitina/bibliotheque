//
// Created by Tina Alaei on 14/01/2020.
//

#include "Adherent.h"


Adherent::Adherent(string n, string p, int num, Bibliotheque* bibliotheque, int nbEmprunts){
    nom = n;
    prenom = p;
    numAdherent = num;
    inscritA = bibliotheque;
    limEmprunts = nbEmprunts;
}


Adherent::Adherent(Adherent &other){
    nom = other.nom;
    prenom = other.prenom;
    numAdherent = other.numAdherent;
    inscritA = other.inscritA;
    limEmprunts = other.limEmprunts;
}