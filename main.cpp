
#include "Adherent.h"
#include "Album.h"
#include "BandeDessinee.h"
#include "Bibliotheque.h"
#include "Livre.h"
#include "PieceDeTheatre.h"
#include "RecueilDePoesie.h"
#include "Roman.h"
#include "interfaceTools.h"

void sansInterface();

int main() {

    interfaceGlobale();

    //sansInterface();
    return 0;
}


void sansInterface(){
    //Bibliotheques
    Bibliotheque Lanvin = Bibliotheque("Lanvin", "3 place Lanvin");
    Bibliotheque Courbet = Bibliotheque("Courbet", "3 place Lanvin");
    Bibliotheque StPaul = Bibliotheque("St Paul", "3 place St Paul");

    //Livres
    Album Livre1 = Album("Tina Alaei", "L'histoire de ma vie", "Editions No One Cares", "0000000001", PUBLIC::TOUTPUBLIC, ILLUSTRATION::PHOTO);
    BandeDessinee Livre2 = BandeDessinee("Camille Alaei", "Le petit chat", "Editions We Care", "0000000002", PUBLIC::JEUNESSES, "Camille Alaei");
    BandeDessinee Livre3 = BandeDessinee("Romain Grondin", "Chroniques d'une fangirl", "Editions We Care", "0000000003", PUBLIC::ADOS, "PO Nahoum");
    PieceDeTheatre Livre4 = PieceDeTheatre("Nina Loiseau", "Il m'insuporte.", "Editions We Care", "0000000004", PUBLIC::TOUTPUBLIC, SIECLE::XXIe);
    PieceDeTheatre Livre5 = PieceDeTheatre("Mickael Jackson", "Mon imposture", "Editions We Care", "0000000005", PUBLIC::TOUTPUBLIC, SIECLE::XXIe);
    Album Livre6 = Album("Sithia Do Thong", "La folle histoire du BDA", "Editions We Care", "0000000006", PUBLIC::TOUTPUBLIC, ILLUSTRATION::PHOTODESSIN);
    Roman Livre7 = Roman("Mimoun Mohamed", "Comment faire ses passations ?", "Editions We Care", "0000000007", PUBLIC::TOUTPUBLIC, "Roman d'aventures");
    Roman Livre8 = Roman("Alexandre Menasria", "Comment faire ses passations ? Tome 2", "Editions We Care", "0000000008", PUBLIC::TOUTPUBLIC, "Roman d'aventures");
    RecueilDePoesie Livre9 = RecueilDePoesie("Ahmad Iksi", "Poèmes dédiés à mon merveilleux Isam", "Editions We Care", "0000000009", PUBLIC::ADULTE, INDICATEURS::PROSE);

    //Adherent
    Adherent Adherent1 = Adherent("Alaei", "Tina", &Lanvin);
    Adherent Adherent2 = Adherent("Laurent", "Leo", &Courbet);
    Adherent Adherent3 = Adherent("Alaei", "Tina", &StPaul);

    //Ajout des livres dans leur bibliotheque
    Lanvin.ajouterLivre(&Livre1);
    Lanvin.ajouterLivre(&Livre2);
    Lanvin.ajouterLivre(&Livre3);

    Courbet.ajouterLivre(&Livre4);
    Courbet.ajouterLivre(&Livre5);
    Courbet.ajouterLivre(&Livre6);

    StPaul.ajouterLivre(&Livre7);
    StPaul.ajouterLivre(&Livre8);
    StPaul.ajouterLivre(&Livre9);


    Lanvin.afficheLivres();
    Courbet.afficheLivres();
    StPaul.afficheLivres();

    cout << "_________" << endl;
    Adherent1.emprunt(1);
    Adherent1.emprunt(2); //limEmprunt
    Adherent1.rendre(2);
    Adherent1.rendre(1);
    Adherent1.emprunt(7);

    cout << "_________" << endl;

    Lanvin.demande(&StPaul, "0000000009");
    cout << etatName(Livre9.getEtat()) << endl;
    Lanvin.demande(&Courbet, "0000000008");
    cout << etatName(Livre8.getEtat()) << endl;
    Lanvin.rendre();
    cout << etatName(Livre9.getEtat()) << endl;

    cout << "_________" << endl;

    cout << "--- Lanvin demande a StPaul" << endl;
    Lanvin.demande(&StPaul, "0000000009");
    Lanvin.afficheLivres();
    cout << etatName(Livre9.getEtat()) << endl;

    cout << endl;
    cout << "--- Adh1 emprunte a Lanvin" << endl;
    Adherent1.emprunt(9);
    Adherent1.affiche();
    cout << etatName(Livre9.getEtat()) << endl;

    cout << endl;
    cout << "--- Lanvin rend" << endl;
    Lanvin.rendre();
    Lanvin.afficheLivres();

    cout << endl;
    cout << "--- Adh1 rend a Lanvin" << endl;
    Adherent1.rendre(9);
    cout << etatName(Livre9.getEtat()) << endl;

    cout << endl;
    cout << "--- Lanvin rend" << endl;
    Lanvin.rendre();
    Lanvin.afficheLivres();

    cout << "fin du game" << endl;

}


