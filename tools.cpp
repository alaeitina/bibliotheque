//
// Created by Tina Alaei on 18/01/2020.
//
#include "tools.h"


string typeName(int type) {
    switch (type){
        case 0:
            return "Livre";
        case 1:
            return "Album";
        case 2:
            return "Bande Dessinee";
        case 3:
            return "Piece de Theatre";
        case 4:
            return "Recueil de Poesie";
        case 5:
            return "Roman";
        default:
            return "ERREUR";
    }
}