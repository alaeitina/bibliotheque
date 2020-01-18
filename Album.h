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
    enum ILLUSTRATION {PHOTO = 0, DESSIN = 1, PHOTODESSIN = 2};
};


#endif //BIBLIOTHEQUE_ALBUM_H
