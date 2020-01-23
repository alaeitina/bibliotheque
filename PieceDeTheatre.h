//
// Created by Tina Alaei on 14/01/2020.
//

#ifndef BIBLIOTHEQUE_PIECEDETHEATRE_H
#define BIBLIOTHEQUE_PIECEDETHEATRE_H


#include "Livre.h"

class PieceDeTheatre : public Livre {

private:
    int siecle;

public:
    PieceDeTheatre(string, string, string, string, int, int);
    void affiche();
};


#endif //BIBLIOTHEQUE_PIECEDETHEATRE_H
