//
// Created by Tina Alaei on 06/01/2020.
//

#include "Livre.h"


Livre::Livre(int c, string a, string t, string edit, string num_isbn, int publ, int et) {
    code = c;
    auteur = a;
    titre = t;
    editeur = edit;
    ISBN = num_isbn;
    public_destine = publ;
    etat = et;
}

Livre::Livre(const Livre &other){
    code = other.code;
    auteur = other.auteur;
    titre = other.titre;
    editeur = other.editeur;
    ISBN = other.ISBN;
    public_destine = other.public_destine;
    etat = other.etat;
}
