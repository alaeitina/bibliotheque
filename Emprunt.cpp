//
// Created by Tina Alaei on 17/01/2020.
//

#include "Emprunt.h"

int Emprunt::idMax = 0;

Emprunt::Emprunt(Adherent *adherent, Livre *livre, Bibliotheque *biblio){
    emprunteur = adherent;
    livreEmprunte = livre;
    biblioEmpr = biblio;
    idMax++;
    idEmprunt = idMax;
}


