//
// Created by Tina Alaei on 14/01/2020.
//

#include "Adherent.h"

int Adherent::numNext = 1;

Adherent::Adherent(string n, string p, Bibliotheque* bibliotheque){
    nom = n;
    prenom = p;
    numAdherent = numNext;
    numNext++;
    inscritA = bibliotheque;
}

string Adherent::getNomPrenom() const{
    return nom + " " + prenom;
}

vector<Livre*> Adherent::getEmprunts() const{
    return emprunts;
}

void Adherent::affiche() {
    cout << this->nom << ", " << this->prenom << ", inscrit à " << this->inscritA->getNom() << "- numero d'adherent = " << this->numAdherent << endl;
    cout << "Livres Empruntes : " << endl;
    for(auto i = 0; i > emprunts.size(); i++){
        emprunts[i]->affiche();
    }
}

void Adherent::emprunt(int codeLivre) {
    if (emprunts.size() >= this->inscritA->getLimEmprunts()){
        cout << "Vous avez depasse la limite d'emprunt de livres dans cette Bibliotheque" << endl;
        return;
    }

    if (this->inscritA->possedeLivreListe(codeLivre)) {
        if (this->inscritA->searchListeLivre(codeLivre)->getEtat() == ETATS::LIBRE) {
            this->inscritA->search(codeLivre)->setEtat(ETATS::EMPRUNTE);
            emprunts.push_back(this->inscritA->search(codeLivre));
            return;
        }else{
            cout << "Ce livre n'est pas disponible pour le moment" << endl;
            return;
        }
    }else if (this->inscritA->possedeLivreEmprunts(codeLivre)){
        if (this->inscritA->searchEmprunts(codeLivre)->getEtat() == ETATS::PRETE){
            this->inscritA->search(codeLivre)->setEtat(ETATS::EMPRUNTE);
            emprunts.push_back(this->inscritA->search(codeLivre));
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

void Adherent::rendre(int codeLivre) {
    if (this->inscritA->possedeLivre(codeLivre)){
        if (this->inscritA->search(codeLivre)->getEtat() == ETATS::EMPRUNTE) {
            bool found = false;
            for (auto i = 0; i < emprunts.size(); i++){
                if (this->inscritA->search(codeLivre) == emprunts[i]){
                    emprunts.erase(emprunts.begin()+i);
                    found = true;
                }
            }
            if (!found){
                cout << "Ce livre n'a pas été emprunté par cet adhérent" << endl;
                return;
            }
            if (this->inscritA->possedeLivreListe(codeLivre)){
                this->inscritA->search(codeLivre)->setEtat(ETATS::LIBRE);
            } else {
                this->inscritA->search(codeLivre)->setEtat(ETATS::PRETE);
            }
        }else{
            cout << "Ce livre n'est pas en cours d'emprunt" << endl;
        }
    }else{
        cout << "Ce livre n'appartient pas à cette bibliotheque" << endl;
    }
}

int Adherent::getNumAdherent() const{
    return numAdherent;
}

bool Adherent::isAdherentBibliotheque(Bibliotheque* bibliotheque) {
    return inscritA == bibliotheque;
}

Bibliotheque* Adherent::getInscritA() const {
    return inscritA;
}



