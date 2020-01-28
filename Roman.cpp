
#include "Roman.h"

Roman::Roman(string a, string t, string edit, string num_isbn, int publ, string g):Livre(a, t, edit, num_isbn, publ){
    genre = g;
    type = TYPE::ROMAN;
}

void Roman::affiche() {
    cout << "Livre " << this->code << " : " << endl << this->titre << ", " << this->auteur << ", " << this->editeur << endl;
    cout << "ISBN : " << this->ISBN << " - public : " << publicName(this->publicDestine) << " - genre : " << this->genre << " - type : " << typeName(this->type) << endl;
}

Roman::Roman() : Livre() {
    genre = "";
    type = TYPE::ROMAN;
}