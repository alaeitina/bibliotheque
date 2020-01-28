
#ifndef BIBLIOTHEQUE_ADHERENT_H
#define BIBLIOTHEQUE_ADHERENT_H

#include "Livre.h"
#include "Bibliotheque.h"

class Adherent {
private:
    string nom;
    string prenom;
    int numAdherent;
    static int numNext;
    Bibliotheque* inscritA;
    vector<Livre*> emprunts;

public:
    Adherent(string, string, Bibliotheque*);
    string getNomPrenom() const;
    vector<Livre*> getEmprunts() const;
    void affiche();
    void emprunt(int);
    void rendre(int);
    int getNumAdherent() const;
    bool isAdherentBibliotheque(Bibliotheque* bibliotheque);
    Bibliotheque* getInscritA() const;
    Adherent(Bibliotheque*);


};


#endif //BIBLIOTHEQUE_ADHERENT_H
