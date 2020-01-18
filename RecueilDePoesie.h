//
// Created by Tina Alaei on 07/01/2020.
//

#ifndef BIBLIOTHEQUE_RECUEILDEPOESIE_H
#define BIBLIOTHEQUE_RECUEILDEPOESIE_H

#include "Livre.h"

class RecueilDePoesie : public Livre {
private:
    int indicateur;
public:
    RecueilDePoesie(string, string, string, string, int, int);
    enum INDICATEURS {VERS = 0, PROSE = 1, VERSPROSE = 2};
};


#endif //BIBLIOTHEQUE_RECUEILDEPOESIE_H
