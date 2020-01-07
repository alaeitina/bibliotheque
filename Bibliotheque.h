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
    vector<Livre> listeLivres;

public:
    Bibliotheque(string, string, int);
    Bibliotheque(const Bibliotheque&);

};


#endif //BIBLIOTHEQUE_BIBLIOTHEQUE_H
