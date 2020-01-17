//
// Created by Tina Alaei on 14/01/2020.
//

#include "Album.h"

Album::Album(int c, string a, string t, string edit, int num_isbn, int publ, int et, int illustr) : Livre (c, a, t, edit, num_isbn, publ, et) {
    illustration = illustr;
}

Album::Album(Album &other) : Livre(other) {
    illustration = other.illustration;
}