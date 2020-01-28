
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
    bool taken;

public:
    Livre(string, string, string, string, int);
    Livre();
    void setEtat(int);
    int getCode() const;
    int getType() const;
    int getEtat() const;
    string getISBN() const;
    virtual void affiche();
    bool isTaken() const;
    void setTaken();

};


#endif //BIBLIOTHEQUE_LIVRE_H
