//
// Created by Tina Alaei on 14/01/2020.
//

#include "PieceDeTheatre.h"


PieceDeTheatre::PieceDeTheatre(string a, string t, string edit, string num_isbn, int publ, int s) : Livre (a, t, edit, num_isbn, publ) {
    siecle = s;
    type = TYPE::PIECE;
}

void PieceDeTheatre::affiche() {
    cout << "Livre " << this->code << " : " << endl << this->titre << ", " << this->auteur << ", " << this->editeur << endl;
    cout << "ISBN : " << this->ISBN << " - public : " << publicName(this->publicDestine) << " - siecle : " << siecleName(this->siecle) << " - type : " << typeName(this->type) << endl;
}