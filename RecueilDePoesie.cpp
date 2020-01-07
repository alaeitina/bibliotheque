//
// Created by Tina Alaei on 07/01/2020.
//

#include "RecueilDePoesie.h"


RecueilDePoesie::RecueilDePoesie(int c, string a, string t, string edit, int num_isbn, int publ, int et, int indic):Livre(c, a, t, edit, num_isbn, publ, et){
    indicateur = indic;
}

RecueilDePoesie::RecueilDePoesie(const RecueilDePoesie &other):Livre(other){
    indicateur = other.indicateur;
}
