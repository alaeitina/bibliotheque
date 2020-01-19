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

string etatName(int etat) {
    switch (etat){
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

string publicName(int publ) {
    switch (publ){
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

string illustrationName(int illustration) {
    switch (illustration) {
        case ILLUSTRATION::DESSIN :
            return "Dessin";
        case ILLUSTRATION::PHOTO :
            return "Photo";
        case ILLUSTRATION::PHOTODESSIN :
            return "Photo et Dessin";
        default:
            return "ERREUR";
    }
}

string siecleName(int siecle){
    switch (siecle){
        case SIECLE::IeAJC :
            return "Ie siecle avant J.C.";
        case SIECLE::IIeAJC :
            return "IIe siecle avant J.C.";
        case SIECLE::IIIeAJC :
            return "IIIe siecle avant J.C.";
        case SIECLE::Ie :
            return "Ie siecle";
        case SIECLE::IIe :
            return "IIe siecle";
        case SIECLE::IIIe :
            return "IIIe siecle";
        case SIECLE::IVe :
            return "IVe siecle";
        case SIECLE::Ve :
            return "Ve siecle";
        case SIECLE::VIe :
            return "VIe siecle";
        case SIECLE::VIIe :
            return "VIIe siecle";
        case SIECLE::VIIIe :
            return "VIIIe siecle";
        case SIECLE::IXe :
            return "IXe siecle";
        case SIECLE::Xe :
            return "Xe siecle";
        case SIECLE::XIe :
            return "XIe siecle";
        case SIECLE::XIIe :
            return "XIIe siecle";
        case SIECLE::XIIIe :
            return "XIIIe siecle";
        case SIECLE::XIVe :
            return "XIVe siecle";
        case SIECLE::XVe :
            return "XVe siecle";
        case SIECLE::XVIe :
            return "XVIe siecle";
        case SIECLE::XVIIe :
            return "XVIIe siecle";
        case SIECLE::XVIIIe :
            return "XVIIIe siecle";
        case SIECLE::XIXe :
            return "XIXe siecle";
        case SIECLE::XXe :
            return "XXe siecle";
        case SIECLE::XXIe :
            return "XXIe siecle";
        default:
            return "ERREUR";
    }
}

string indicateurName(int indicateur) {
    switch (indicateur) {
        case INDICATEURS::PROSE :
            return "Prose";
        case INDICATEURS::VERS :
            return "Vers";
        case INDICATEURS::VERSPROSE :
            return "Vers et Prose";
        default:
            return "ERREUR";
    }
}