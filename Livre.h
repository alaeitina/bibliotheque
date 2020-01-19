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
    int publicDestine;
    int etat;
    static int codeNext;
    int type;

public:
    Livre(string, string, string, string, int);
    void setEtat(int);
    int getCode() const;
    int getType() const;
    int getEtat() const;
    string getISBN() const;
    virtual void affiche();

};


#endif //BIBLIOTHEQUE_LIVRE_H
