//
// Created by Tina Alaei on 07/01/2020.
//

#ifndef BIBLIOTHEQUE_BANDEDESSINEE_H
#define BIBLIOTHEQUE_BANDEDESSINEE_H

#include "Livre.h"

class BandeDessinee : public Livre{
protected:
    string dessinateur;
public :
    BandeDessinee(int, string, string, string, string, int, int, string);
    BandeDessinee(const BandeDessinee&);
};


#endif //BIBLIOTHEQUE_BANDEDESSINEE_H
