//
// Created by Tina Alaei on 06/01/2020.
//

#include "Bibliotheque.h"

Bibliotheque::Bibliotheque(string n, string a, int c){
    nom = n;
    adresse = a;
    code = c;
}

Bibliotheque::Bibliotheque(const Bibliotheque &other){
    nom = other.nom;
    adresse = other.adresse;
    code = other.code;
    listeLivres = other.listeLivres;
}