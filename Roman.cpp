//
// Created by Tina Alaei on 14/01/2020.
//

#include "Roman.h"

Roman::Roman(int c, string a, string t, string edit, string num_isbn, int publ, int et, string g):Livre(c, a, t, edit, num_isbn, publ, et){
    genre = g;
}

Roman::Roman(const Roman &other):Livre(other) {
    genre = other.genre;
}