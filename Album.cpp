
#include "Album.h"

Album::Album(string a, string t, string edit, string num_isbn, int publ, int illustr) : Livre (a, t, edit, num_isbn, publ) {
    illustration = illustr;
    type = TYPE::ALBUM;
}

void Album::affiche() {
    cout << "Livre " << this->code << " : " << endl << this->titre << ", " << this->auteur << ", " << this->editeur << endl;
    cout << "ISBN : " << this->ISBN << " - public : " << publicName(this->publicDestine) << " - illustrations : " << illustrationName(this->illustration) << " - type : " << typeName(this->type) << endl;
}

Album::Album() : Livre() {
    illustration = 0;
    type = TYPE::ALBUM;
}