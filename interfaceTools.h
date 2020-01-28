
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

void formAdherent(Bibliotheque* bibliotheque, Adherent* adherent);
void formBibliotheque(Bibliotheque* bibliotheque);
void formLivre(Livre* livre);
void formAlbum(Album* livre);
void formBandeDessinee(BandeDessinee* livre);
void formPieceDeTheatre(PieceDeTheatre* livre);
void formRecueilDePoesie(RecueilDePoesie* livre);
void formRoman(Roman* livre);
void interfaceGlobale();
void interfaceAdherent(vector<Bibliotheque*> listeBibliotheques, vector<Livre*> listeLivres, vector<Adherent*> listeAdherents);
void interfaceBibliotheque(vector<Bibliotheque*> listeBibliotheques, vector<Livre*> listeLivres, vector<Adherent*> listeAdherents);