//
// Created by Tina Alaei on 06/01/2020.
//

#ifndef BIBLIOTHEQUE_BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_BIBLIOTHEQUE_H



#include "Livre.h"
#include <vector>

class Bibliotheque {

private:
    string nom;
    string adresse;
    int code;
    static int codeNext;
    vector<Livre*> listeLivres;
    vector<Livre*> emprunts;
    //il faut refaire l'affichage pour ajouter les livres empruntés


public:
    Bibliotheque(string, string);
    void ajouterLivre(Livre*);
    void afficheLivres();
    void afficheLivreParCategorie(int);
    vector<Livre*> getListeLivres() const;
    bool possedeLivre(int);
    Livre* search(int);
    void emprunt(Bibliotheque*, int);

};


#endif //BIBLIOTHEQUE_BIBLIOTHEQUE_H
