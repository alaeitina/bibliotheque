//
// Created by Tina Alaei on 14/01/2020.
//

#ifndef BIBLIOTHEQUE_ALBUM_H
#define BIBLIOTHEQUE_ALBUM_H


#include "Livre.h"

class Album : public Livre {

private:
    int illustration;

public:
    Album(string, string, string, string, int, int);
    void affiche();
};


#endif //BIBLIOTHEQUE_ALBUM_H
