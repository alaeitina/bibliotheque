//
// Created by Tina Alaei on 14/01/2020.
//

#ifndef BIBLIOTHEQUE_ROMAN_H
#define BIBLIOTHEQUE_ROMAN_H


#include "Livre.h"

class Roman : public Livre{
private:
    string genre;

public:
    Roman(string, string, string, string, int, string);
    void affiche();
};


#endif //BIBLIOTHEQUE_ROMAN_H
