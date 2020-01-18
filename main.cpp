//
// Created by Tina Alaei on 07/01/2020.
//

#include "Adherent.h"
#include "Album.h"
#include "BandeDessinee.h"
#include "Bibliotheque.h"
#include "Emprunt.h"
#include "Livre.h"
#include "PieceDeTheatre.h"
#include "RecueilDePoesie.h"
#include "Roman.h"

void fixture();

int main() {


    return 0;
}


void fixture(){
    //Bibliotheques
    Bibliotheque Lanvin = Bibliotheque("Lanvin", "3 place Lanvin");
    Bibliotheque Courbet = Bibliotheque("Courbet", "3 place Lanvin");
    Bibliotheque StPaul = Bibliotheque("St Paul", "3 place St Paul");

    //Livres
    Livre Livre1 = Livre("Tina Alaei", "L'histoire de ma vie", "Editions No One Cares", "0000000001", PUBLIC::TOUTPUBLIC);
    Livre Livre2 = Livre("Camille Alaei", "Le petit chat", "Editions We Care", "0000000002", PUBLIC::JEUNESSES);
    Livre Livre3 = Livre("Eiichiro Oda", "One Piece Tome 1", "Editions We Care", "0000000003", PUBLIC::TOUTPUBLIC);
    Livre Livre4 = Livre("Eiichiro Oda", "One Piece Tome 2", "Editions We Care", "0000000004", PUBLIC::TOUTPUBLIC);
    Livre Livre5 = Livre("Mickael Jackson", "Mon imposture", "Editions We Care", "0000000005", PUBLIC::TOUTPUBLIC);
    Livre Livre6 = Livre("Sithia Do Thong", "La folle histoire du BDA", "Editions We Care", "0000000006", PUBLIC::TOUTPUBLIC);
    Livre Livre7 = Livre("Mimoun Mohamed", "Comment faire ses passations ?", "Editions We Care", "0000000007", PUBLIC::TOUTPUBLIC);
    Livre Livre8 = Livre("Alexandre Menasria", "Comment faire ses passations ? Tome 2", "Editions We Care", "0000000008", PUBLIC::TOUTPUBLIC);
    Livre Livre9 = Livre("Ahmad Iksi", "Poèmes dédiés à mon merveilleux Isam", "Editions We Care", "0000000009", PUBLIC::TOUTPUBLIC);

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


}