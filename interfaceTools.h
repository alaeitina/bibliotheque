//
// Created by Tina Alaei on 22/01/2020.
//

#include "Adherent.h"
#include "Album.h"
#include "BandeDessinee.h"
#include "Bibliotheque.h"
#include "Livre.h"
#include "PieceDeTheatre.h"
#include "RecueilDePoesie.h"
#include "Roman.h"

vector<Bibliotheque*> fixturesBibliotheques();
vector<Livre*> fixturesLivres();

void interfaceGlobale();
void interfaceAdherent(vector<Bibliotheque*>, vector<Livre*> , vector<Adherent*>);
void interfaceBibliotheque();
void interfaceLibraire();
vector<Livre*> formLivre(vector<Livre*>);
vector<Adherent*> formAdherent(vector<Adherent*>, Bibliotheque*);
void interfaceBibliotheque(vector<Bibliotheque*>, vector<Livre*>, vector<Adherent*>);