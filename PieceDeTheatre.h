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
    PieceDeTheatre(int, string, string, string, string, int, int, int);
    PieceDeTheatre(PieceDeTheatre&);
    enum SIECLE {Ie = 1, IIe = 2, IIIe = 3, IVe = 4, Ve = 5, VIe = 6, VIIe = 7, VIIIe = 8, IXe = 9, Xe = 10, XIe = 11, XIIe = 12, XIIIe = 13, XIVe = 14, XVe = 15, XVIe = 16, XVIIe = 17, XVIIIe = 18, XIXe = 19, XXe = 20, XXIe = 21};
};


#endif //BIBLIOTHEQUE_PIECEDETHEATRE_H
