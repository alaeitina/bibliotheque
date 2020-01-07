//
// Created by Tina Alaei on 06/01/2020.
//

#ifndef BIBLIOTHEQUE_LIVRE_H
#define BIBLIOTHEQUE_LIVRE_H


#include <iostream>
using namespace std;


class Livre {

protected:
    int code;
    string auteur;
    string titre;
    string editeur;
    int ISBN;
    int public_destine; // adulte, ados, jeunesses ou tout public
    int etat; // libre ou emprunté ou prêté

public:
    Livre(int, string, string, string, int, int, int);
    Livre(const Livre&);
    enum ETATS {LIBRE = 0, EMPRUNTE = 1, PRETE = 2};
    enum PUBLIC {ADULTE = 0, ADOS = 1, JEUNESSES = 2, TOUTPUBLIC= 3};

};


#endif //BIBLIOTHEQUE_LIVRE_H
