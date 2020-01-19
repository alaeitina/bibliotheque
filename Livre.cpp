//
// Created by Tina Alaei on 06/01/2020.
//

#include "Livre.h"

int Livre::codeNext = 0;

Livre::Livre(string a, string t, string edit, string num_isbn, int publ) {
    code = codeNext;
    codeNext++;
    auteur = a;
    titre = t;
    editeur = edit;
    ISBN = num_isbn;
    publicDestine = publ;
    etat = ETATS::LIBRE;
    type = TYPE::LIVRE;
}

void Livre::setEtat(int newEtat){
    if (newEtat == 0 || newEtat == 1 || newEtat == 2){
        etat = newEtat;
    }
    else{
        cout << "Cet état n'existe pas !" << endl;
    }
}

int Livre::getCode() const{
    return code;
}

int Livre::getType() const{
    return type;
}

int Livre::getEtat() const{
    return etat;
}

void Livre::affiche() {
    cout << "Livre " << this->code << " : " << endl << this->titre << ", " << this->auteur << ", " << this->editeur << endl;
    cout << "ISBN : " << this->ISBN << "- public : " << publicName(this->publicDestine) << "- type : " << typeName(this->type) << endl;
}

string Livre::getISBN() const{
    return ISBN;
}

