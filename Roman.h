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
    Roman(int, string, string, string, string, int, int, string);
    Roman(const Roman&);


};


#endif //BIBLIOTHEQUE_ROMAN_H
