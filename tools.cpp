//
// Created by Tina Alaei on 18/01/2020.
//
#include "tools.h"


string typeName(int type) {
    switch (type){
        case TYPE::LIVRE :
            return "Livre";
        case TYPE::ALBUM :
            return "Album";
        case TYPE::BD :
            return "Bande Dessinee";
        case TYPE::PIECE:
            return "Piece de Theatre";
        case TYPE::POESIE :
            return "Recueil de Poesie";
        case TYPE::ROMAN :
            return "Roman";
        default:
            return "ERREUR";
    }
}

string etatName(int type) {
    switch (type){
        case ETATS::LIBRE :
            return "Libre";
        case ETATS::EMPRUNTE :
            return "Emprunte";
        case ETATS::PRETE :
            return "Prete";
        default:
            return "ERREUR";
    }
}

string publicName(int type) {
    switch (type){
        case PUBLIC::TOUTPUBLIC :
            return "Tout Public";
        case PUBLIC::JEUNESSES :
            return "Jeunesses";
        case PUBLIC::ADOS :
            return "Ados";
        case PUBLIC::ADULTE :
            return "Adulte";
        default:
            return "ERREUR";
    }
}