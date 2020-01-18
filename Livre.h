//
// Created by Tina Alaei on 06/01/2020.
//

#ifndef BIBLIOTHEQUE_LIVRE_H
#define BIBLIOTHEQUE_LIVRE_H


#include <iostream>

#include "tools.h"

using namespace std;


class Livre {

protected:
    int code;
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    int publicDestine; // adulte, ados, jeunesses ou tout public
    int etat; // libre ou emprunté ou prêté
    static int codeMax;
    int type;

public:
    Livre(string, string, string, string, int);
    void setEtat(int);
    int getCode() const;
    int getType() const;
    int getEtat() const;
    void affiche();


};


#endif //BIBLIOTHEQUE_LIVRE_H
