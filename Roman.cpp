//
// Created by Tina Alaei on 14/01/2020.
//

#include "Roman.h"

Roman::Roman(string a, string t, string edit, string num_isbn, int publ, string g):Livre(a, t, edit, num_isbn, publ){
    genre = g;
    type = TYPE::ROMAN;
}
