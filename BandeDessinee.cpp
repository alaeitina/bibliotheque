//
// Created by Tina Alaei on 07/01/2020.
//

#include "BandeDessinee.h"

BandeDessinee::BandeDessinee(string a, string t, string edit, string num_isbn, int publ, string dess):Livre(a, t, edit, num_isbn, publ) {
    dessinateur = dess;
    type = TYPE::BD;
}

void BandeDessinee::affiche() {
    cout << "Livre " << this->code << " : " << endl << this->titre << ", " << this->auteur << ", " << this->editeur << endl;
    cout << "ISBN : " << this->ISBN << " - public : " << publicName(this->publicDestine) << " - dessinateur : " << this->dessinateur << " - type : " << typeName(this->type) << endl;
}
