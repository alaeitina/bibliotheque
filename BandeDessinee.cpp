//
// Created by Tina Alaei on 07/01/2020.
//

#include "BandeDessinee.h"

BandeDessinee::BandeDessinee(int c, string a, string t, string edit, string num_isbn, int publ, int et, string dess):Livre(c, a, t, edit, num_isbn, publ, et) {
    dessinateur = dess;
}

BandeDessinee::BandeDessinee(const BandeDessinee &other):Livre(other) {
    dessinateur = other.dessinateur;
}