//
// Created by Tina Alaei on 17/01/2020.
//

#ifndef BIBLIOTHEQUE_EMPRUNT_H
#define BIBLIOTHEQUE_EMPRUNT_H

#include "Bibliotheque.h"
#include "Livre.h"
#include "Adherent.h"

class Emprunt {

private:
    int idEmprunt;
    Adherent* emprunteur;
    Livre* livreEmprunte;
    Bibliotheque* biblioEmpr;
    bool enCours;
    static int idMax;

public:
    Emprunt(Adherent*, Livre*, Bibliotheque*);

};


#endif //BIBLIOTHEQUE_EMPRUNT_H
