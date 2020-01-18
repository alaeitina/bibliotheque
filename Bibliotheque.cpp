//
// Created by Tina Alaei on 06/01/2020.
//

#include "Bibliotheque.h"

int Bibliotheque::codeNext = 0;

Bibliotheque::Bibliotheque(string n, string a){
    nom = n;
    adresse = a;
    code = codeNext;
    codeNext++;
}

void Bibliotheque::ajouterLivre(Livre* livre) {
    listeLivres.push_back(livre);
}

void Bibliotheque::afficheLivres() {
    cout << "Bibliotheque " << this->nom << " :" << endl;
    for(int i = 0; i < listeLivres.size(); i++){
        listeLivres[i]->affiche();
    }
}

void Bibliotheque::afficheLivreParCategorie(int categorie) {
    cout << "Bibliotheque " << this->nom << " - Livres de la catégorie " << typeName(categorie) << endl;
    for(int i = 0; i < listeLivres.size(); i++){
        if(listeLivres[i]->getType() == categorie){
            listeLivres[i]->affiche();
        }
    }
}

bool Bibliotheque::possedeLivre(int codeLivre){
    for (auto i = 0; i < listeLivres.size(); i++) {
        if (listeLivres[i]->getCode() == codeLivre){
            return true;
        }
    }
    return false;
}


Livre* Bibliotheque::search(int codeLivre){
    int i = 0;
    while ( i < listeLivres.size()) {
        if (listeLivres[i]->getCode() == codeLivre){
            return listeLivres[i];
        }
        i++;
    }
}

vector<Livre*> Bibliotheque::getListeLivres() const {
    return listeLivres;
}

void Bibliotheque::emprunt(Bibliotheque *bibliotheque, int codeLivre) {
    if (bibliotheque->possedeLivre(codeLivre)){
        Livre* livre = bibliotheque->search(codeLivre);
        if (livre->getEtat() == ETATS::LIBRE) {
            this->emprunts.push_back(livre);
            livre->setEtat(ETATS::PRETE);
        }
    }
}