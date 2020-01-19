//
// Created by Tina Alaei on 07/01/2020.
//

#include "RecueilDePoesie.h"


RecueilDePoesie::RecueilDePoesie(string a, string t, string edit, string num_isbn, int publ, int indic):Livre(a, t, edit, num_isbn, publ){
    indicateur = indic;
    type = TYPE::POESIE;
}

void RecueilDePoesie::affiche() {
    cout << "Livre " << this->code << " : " << endl << this->titre << ", " << this->auteur << ", " << this->editeur << endl;
    cout << "ISBN : " << this->ISBN << " - public : " << publicName(this->publicDestine) << " - indicateur : " << indicateurName(this->indicateur) << " - type : " << typeName(this->type) << endl;
}