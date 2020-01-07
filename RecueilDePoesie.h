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
    RecueilDePoesie(int, string, string, string, int, int, int, int);
    RecueilDePoesie(const RecueilDePoesie&);
    enum INDICATEURS {VERS = 0, PROSE = 1, VERSPROSE = 2};
};


#endif //BIBLIOTHEQUE_RECUEILDEPOESIE_H
