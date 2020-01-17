//
// Created by Tina Alaei on 14/01/2020.
//

#include "PieceDeTheatre.h"


PieceDeTheatre::PieceDeTheatre(int c, string a, string t, string edit, int num_isbn, int publ, int et, int s) : Livre (c, a, t, edit, num_isbn, publ, et) {
    siecle = s;
}

PieceDeTheatre::PieceDeTheatre(PieceDeTheatre &other) : Livre(other) {
    siecle = other.siecle;
}