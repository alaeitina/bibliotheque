//
// Created by Tina Alaei on 07/01/2020.
//

#include "BandeDessinee.h"

BandeDessinee::BandeDessinee(string a, string t, string edit, string num_isbn, int publ, string dess):Livre(a, t, edit, num_isbn, publ) {
    dessinateur = dess;
    type = TYPE::BD;
}
