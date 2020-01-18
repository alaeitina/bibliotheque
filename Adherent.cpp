//
// Created by Tina Alaei on 14/01/2020.
//

#include "Adherent.h"


Adherent::Adherent(string n, string p, int num, Bibliotheque* bibliotheque, int limEmpr){
    nom = n;
    prenom = p;
    numAdherent = num;
    inscritA = bibliotheque;
    limEmprunts = limEmpr;
}

void Adherent::emprunt(Bibliotheque* bibliotheque, int codeLivre) {
    if (emprunts.size() >= limEmprunts){
        cout << "Vous n'etes pas autorise a emprunter des livres" << endl;
    } else {
        if (bibliotheque->possedeLivre(codeLivre)) {
            if (bibliotheque->search(codeLivre)->getEtat() == ETATS::LIBRE) {
                bibliotheque->search(codeLivre)->setEtat(ETATS::EMPRUNTE);
                emprunts.push_back(bibliotheque->search(codeLivre));
            }else{
                cout << "Ce livre n'est pas disponible pour le moment" << endl;
            }
        }else{
            cout << "Ce livre n'existe pas dans la bibliotheque en question" << endl;
        }
    }
}