//
// Created by Tina Alaei on 14/01/2020.
//

#include "Album.h"

Album::Album(string a, string t, string edit, string num_isbn, int publ, int illustr) : Livre (a, t, edit, num_isbn, publ) {
    illustration = illustr;
    type = TYPE::ALBUM;
}
