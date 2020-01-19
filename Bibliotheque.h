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


public:
    Bibliotheque(string, string);
    void ajouterLivre(Livre*);
    void afficheLivres();
    void afficheLivreParCategorie(int);
    vector<Livre*> getListeLivres() const;
    bool possedeLivreListe(int);
    bool possedeLivreEmprunts(int);
    bool possedeLivre(int);
    Livre* searchListeLivre(int);
    Livre* searchEmprunts(int);
    Livre* search(int);
    void pret(Bibliotheque*, int);
    void supprimer(int);
    void demande(Bibliotheque*, string);
    void rendre();

};


#endif //BIBLIOTHEQUE_BIBLIOTHEQUE_H
