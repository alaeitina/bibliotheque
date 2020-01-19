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

void Adherent::affiche() {
    cout << this->nom << ", " << this->prenom << ", inscrit à " << this->inscritA->getNom() << endl;
    cout << "Livres Empruntes : " << endl;
    for(auto i = 0; i > emprunts.size(); i++){
        emprunts[i]->affiche();
    }
}

void Adherent::emprunt(Bibliotheque* bibliotheque, int codeLivre) {
    if (emprunts.size() >= limEmprunts || !this->isAdherentBibliotheque(bibliotheque)){
        cout << "Vous n'etes pas autorise a emprunter des livres dans cette Bibliotheque" << endl;
        return;
    }

    if (bibliotheque->possedeLivreListe(codeLivre)) {
        if (bibliotheque->searchListeLivre(codeLivre)->getEtat() == ETATS::LIBRE) {
            bibliotheque->search(codeLivre)->setEtat(ETATS::EMPRUNTE);
            emprunts.push_back(bibliotheque->search(codeLivre));
            return;
        }else{
            cout << "Ce livre n'est pas disponible pour le moment" << endl;
            return;
        }
    }else if (bibliotheque->possedeLivreEmprunts(codeLivre)){
        if (bibliotheque->searchEmprunts(codeLivre)->getEtat() == ETATS::PRETE){
            bibliotheque->search(codeLivre)->setEtat(ETATS::EMPRUNTE);
            emprunts.push_back(bibliotheque->search(codeLivre));
            return;
        }else{
            cout << "Ce livre n'est pas disponible pour le moment" << endl;
            return;
        }
    }else{
        cout << "Ce livre n'existe pas dans la bibliotheque en question" << endl;
        return;
    }

}

void Adherent::rendre(Bibliotheque* bibliotheque, int codeLivre) {
    if (bibliotheque->possedeLivre(codeLivre)){
        if (bibliotheque->search(codeLivre)->getEtat() == ETATS::EMPRUNTE) {
            bool found = false;
            for (auto i = 0; i < emprunts.size(); i++){
                if (bibliotheque->search(codeLivre) == emprunts[i]){
                    emprunts.erase(emprunts.begin()+i);
                    found = true;
                }
            }
            if (!found){
                cout << "Ce livre n'a pas été emprunté par cet adhérent" << endl;
                return;
            }
            if (bibliotheque->possedeLivreListe(codeLivre)){
                bibliotheque->search(codeLivre)->setEtat(ETATS::LIBRE);
            } else {
                bibliotheque->search(codeLivre)->setEtat(ETATS::PRETE);
            }
        }else{
            cout << "Ce livre n'est pas en cours d'emprunt" << endl;
        }
    }else{
        cout << "Ce livre n'appartient pas à cette bibliotheque" << endl;
    }
}

bool Adherent::isAdherentBibliotheque(Bibliotheque* bibliotheque) {
    return inscritA == bibliotheque;
}