//
// Created by Tina Alaei on 07/01/2020.
//

#include "RecueilDePoesie.h"


RecueilDePoesie::RecueilDePoesie(string a, string t, string edit, string num_isbn, int publ, int indic):Livre(a, t, edit, num_isbn, publ){
    indicateur = indic;
    type = TYPE::POESIE;
}
