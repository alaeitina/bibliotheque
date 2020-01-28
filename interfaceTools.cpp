#include "interfaceTools.h"


void formAdherent(Bibliotheque* bibliotheque, Adherent* adherent) {
    cout << "---- Formulaire de nouvel adherent a la bibliotheque " << bibliotheque->getNom() << " ----" << endl;
    cout << "Entrez les informations suivantes : ";
    string nom;
    string prenom;
    cout << endl << "Nom : ";
    cin >> nom;
    cout << endl << "Prenom : ";
    cin >> prenom;
    cout << endl;
    *adherent = Adherent(nom, prenom, bibliotheque);
}

void formBibliotheque(Bibliotheque* bibliotheque) {
    cout << "---- Formulaire de creation de bibliotheque ----" << endl;
    cout << "Entrez les informations suivantes : ";
    string nom;
    string adresse;
    int limEmprunts;
    cout << endl << "Nom : ";
    cin >> nom;
    cout << endl << "Adresse : ";
    cin >> adresse;
    cout << endl << "Limite d'emprunts : ";
    cin >> limEmprunts;
    cout << endl;
    *bibliotheque = Bibliotheque(nom, adresse, limEmprunts);
}

void formLivre(Livre* livre){
    cout << "---- Formulaire d'ajout de livres ----" << endl;
    cout << "Entrez les informations suivantes : ";
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    int publicDestine;

    cout << endl << "Auteur : ";
    cin >> auteur;
    cout << endl << "Titre : ";
    cin >> titre;
    cout << endl << "Editeur : ";
    cin >> editeur;
    cout << endl << "ISBN : ";
    cin >> ISBN;
    cout << endl << "Public : " << endl;
    cout << "   | " << PUBLIC::ADULTE<< ". " << publicName(PUBLIC::ADULTE) << endl;
    cout << "   | " << PUBLIC::ADOS<< ". " << publicName(PUBLIC::ADOS) << endl;
    cout << "   | " << PUBLIC::JEUNESSES<< ". " << publicName(PUBLIC::JEUNESSES) << endl;
    cout << "   | " << PUBLIC::TOUTPUBLIC<< ". " << publicName(PUBLIC::TOUTPUBLIC) << endl;
    cin >> publicDestine;
    *livre = Livre(auteur, titre, editeur, ISBN, publicDestine);
}


void formAlbum(Album* livre){
    cout << "---- Formulaire d'ajout de livres ----" << endl;
    cout << "Entrez les informations suivantes : ";
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    int publicDestine;

    cout << endl << "Auteur : ";
    cin >> auteur;
    cout << endl << "Titre : ";
    cin >> titre;
    cout << endl << "Editeur : ";
    cin >> editeur;
    cout << endl << "ISBN : ";
    cin >> ISBN;
    cout << endl << "Public : " << endl;
    cout << "   | " << PUBLIC::ADULTE<< ". " << publicName(PUBLIC::ADULTE) << endl;
    cout << "   | " << PUBLIC::ADOS<< ". " << publicName(PUBLIC::ADOS) << endl;
    cout << "   | " << PUBLIC::JEUNESSES<< ". " << publicName(PUBLIC::JEUNESSES) << endl;
    cout << "   | " << PUBLIC::TOUTPUBLIC<< ". " << publicName(PUBLIC::TOUTPUBLIC) << endl;
    cin >> publicDestine;
    int illustration;
    cout << endl << "Illustrations : " << endl;
    cout << "   | " << ILLUSTRATION::PHOTO << ". " << illustrationName(ILLUSTRATION::PHOTO) << endl;
    cout << "   | " << ILLUSTRATION::DESSIN << ". " << illustrationName(ILLUSTRATION::DESSIN) << endl;
    cout << "   | " << ILLUSTRATION::PHOTODESSIN << ". " << illustrationName(ILLUSTRATION::PHOTODESSIN) << endl;
    cin >> illustration;
    *livre = Album(auteur, titre, editeur, ISBN, publicDestine, illustration);
}

void formBandeDessinee(BandeDessinee* livre){
    cout << "---- Formulaire d'ajout de livres ----" << endl;
    cout << "Entrez les informations suivantes : ";
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    int publicDestine;

    cout << endl << "Auteur : ";
    cin >> auteur;
    cout << endl;
    cout << endl << "Titre : ";
    cin >> titre;
    cout << endl << "Editeur : ";
    cin >> editeur;
    cout << endl << "ISBN : ";
    cin >> ISBN;
    cout << endl << "Public : " << endl;
    cout << "   | " << PUBLIC::ADULTE<< ". " << publicName(PUBLIC::ADULTE) << endl;
    cout << "   | " << PUBLIC::ADOS<< ". " << publicName(PUBLIC::ADOS) << endl;
    cout << "   | " << PUBLIC::JEUNESSES<< ". " << publicName(PUBLIC::JEUNESSES) << endl;
    cout << "   | " << PUBLIC::TOUTPUBLIC<< ". " << publicName(PUBLIC::TOUTPUBLIC) << endl;
    cin >> publicDestine;
    string dessinateur;
    cout << endl << "Dessinateur : ";
    cin >> dessinateur;
    *livre = BandeDessinee(auteur, titre, editeur, ISBN, publicDestine, dessinateur);
}

void formPieceDeTheatre(PieceDeTheatre* livre){
    cout << "---- Formulaire d'ajout de livres ----" << endl;
    cout << "Entrez les informations suivantes : ";
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    int publicDestine;

    cout << endl << "Auteur : ";
    cin >> auteur;
    cout << endl << "Titre : ";
    cin >> titre;
    cout << endl << "Editeur : ";
    cin >> editeur;
    cout << endl << "ISBN : ";
    cin >> ISBN;
    cout << endl << "Public : " << endl;
    cout << "   | " << PUBLIC::ADULTE<< ". " << publicName(PUBLIC::ADULTE) << endl;
    cout << "   | " << PUBLIC::ADOS<< ". " << publicName(PUBLIC::ADOS) << endl;
    cout << "   | " << PUBLIC::JEUNESSES<< ". " << publicName(PUBLIC::JEUNESSES) << endl;
    cout << "   | " << PUBLIC::TOUTPUBLIC<< ". " << publicName(PUBLIC::TOUTPUBLIC) << endl;
    cin >> publicDestine;
    int siecle;
    cout << endl << "Siecle : " << endl;
    cout << "   | " << SIECLE::IIIeAJC << ". " << siecleName(SIECLE::IIIeAJC) << endl;
    cout << "   | " << SIECLE::IIeAJC << ". " << siecleName(SIECLE::IIeAJC) << endl;
    cout << "   | " << SIECLE::IeAJC << ". " << siecleName(SIECLE::IeAJC) << endl;
    cout << "   | " << SIECLE::Ie << ". " << siecleName(SIECLE::Ie) << endl;
    cout << "   | " << SIECLE::IIe << ". " << siecleName(SIECLE::IIe) << endl;
    cout << "   | " << SIECLE::IIIe << ". " << siecleName(SIECLE::IIIe) << endl;
    cout << "   | " << SIECLE::IVe << ". " << siecleName(SIECLE::IVe) << endl;
    cout << "   | " << SIECLE::Ve << ". " << siecleName(SIECLE::Ve) << endl;
    cout << "   | " << SIECLE::VIe << ". " << siecleName(SIECLE::VIe) << endl;
    cout << "   | " << SIECLE::VIIe << ". " << siecleName(SIECLE::VIIe) << endl;
    cout << "   | " << SIECLE::VIIIe << ". " << siecleName(SIECLE::VIIIe) << endl;
    cout << "   | " << SIECLE::IXe << ". " << siecleName(SIECLE::IXe) << endl;
    cout << "   | " << SIECLE::Xe << ". " << siecleName(SIECLE::Xe) << endl;
    cout << "   | " << SIECLE::XIe << ". " << siecleName(SIECLE::XIe) << endl;
    cout << "   | " << SIECLE::XIIe << ". " << siecleName(SIECLE::XIIe) << endl;
    cout << "   | " << SIECLE::XIIIe << ". " << siecleName(SIECLE::XIIIe) << endl;
    cout << "   | " << SIECLE::XIXe << ". " << siecleName(SIECLE::XIXe) << endl;
    cout << "   | " << SIECLE::XXe << ". " << siecleName(SIECLE::XXe) << endl;
    cout << "   | " << SIECLE::XXIe << ". " << siecleName(SIECLE::XXIe) << endl;
    cin >> siecle;
    *livre = PieceDeTheatre(auteur, titre, editeur, ISBN, publicDestine, siecle);
}

void formRecueilDePoesie(RecueilDePoesie* livre){
    cout << "---- Formulaire d'ajout de livres ----" << endl;
    cout << "Entrez les informations suivantes : ";
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    int publicDestine;

    cout << endl << "Auteur : ";
    cin >> auteur;
    cout << endl << "Titre : ";
    cin >> titre;
    cout << endl << "Editeur : ";
    cin >> editeur;
    cout << endl << "ISBN : ";
    cin >> ISBN;
    cout << endl << "Public : " << endl;
    cout << "   | " << PUBLIC::ADULTE<< ". " << publicName(PUBLIC::ADULTE) << endl;
    cout << "   | " << PUBLIC::ADOS<< ". " << publicName(PUBLIC::ADOS) << endl;
    cout << "   | " << PUBLIC::JEUNESSES<< ". " << publicName(PUBLIC::JEUNESSES) << endl;
    cout << "   | " << PUBLIC::TOUTPUBLIC<< ". " << publicName(PUBLIC::TOUTPUBLIC) << endl;
    cin >> publicDestine;
    int indicateur;
    cout << endl << "Forme : " << endl;
    cout << "   | " << INDICATEURS::VERS << ". " << siecleName(INDICATEURS::VERS) << endl;
    cout << "   | " << INDICATEURS::PROSE << ". " << siecleName(INDICATEURS::PROSE) << endl;
    cout << "   | " << INDICATEURS::VERSPROSE << ". " << siecleName(INDICATEURS::VERSPROSE) << endl;
    cin >> indicateur;
    *livre = RecueilDePoesie(auteur, titre, editeur, ISBN, publicDestine, indicateur);
}

void formRoman(Roman* livre){
    cout << "---- Formulaire d'ajout de livres ----" << endl;
    cout << "Entrez les informations suivantes : ";
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    int publicDestine;

    cout << endl << "Auteur : ";
    cin >> auteur;
    cout << endl << "Titre : ";
    cin >> titre;
    cout << endl << "Editeur : ";
    cin >> editeur;
    cout << endl << "ISBN : ";
    cin >> ISBN;
    cout << endl << "Public : " << endl;
    cout << "   | " << PUBLIC::ADULTE<< ". " << publicName(PUBLIC::ADULTE) << endl;
    cout << "   | " << PUBLIC::ADOS<< ". " << publicName(PUBLIC::ADOS) << endl;
    cout << "   | " << PUBLIC::JEUNESSES<< ". " << publicName(PUBLIC::JEUNESSES) << endl;
    cout << "   | " << PUBLIC::TOUTPUBLIC<< ". " << publicName(PUBLIC::TOUTPUBLIC) << endl;
    cin >> publicDestine;
    string genre;
    cout << endl << "Genre : ";
    cin >> genre;
    *livre = Roman(auteur, titre, editeur, ISBN, publicDestine, genre);
}


/*
template <typename TypeLivre>
void formLivre(TypeLivre *livre, int type){
    cout << "---- Formulaire d'ajout de livres ----" << endl;
    cout << "Entrez les informations suivantes : ";
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    int publicDestine;

    cout << endl << "Auteur : ";
    cin >> auteur;
    cout << endl << "Titre : ";
    cin >> titre;
    cout << endl << "Editeur : ";
    cin >> editeur;
    cout << endl << "ISBN : ";
    cin >> ISBN;
    cout << endl << "Public : " << endl;
    cout << "   | " << PUBLIC::ADULTE<< ". " << publicName(PUBLIC::ADULTE) << endl;
    cout << "   | " << PUBLIC::ADOS<< ". " << publicName(PUBLIC::ADOS) << endl;
    cout << "   | " << PUBLIC::JEUNESSES<< ". " << publicName(PUBLIC::JEUNESSES) << endl;
    cout << "   | " << PUBLIC::TOUTPUBLIC<< ". " << publicName(PUBLIC::TOUTPUBLIC) << endl;
    cin >> publicDestine;

    switch(type){

        case TYPE::LIVRE : {
            *livre = Livre(auteur, titre, editeur, ISBN, publicDestine);
        }

        case TYPE::ALBUM : {
            int illustration;
            cout << endl << "Illustrations : " << endl;
            cout << "   | " << ILLUSTRATION::PHOTO << ". " << illustrationName(ILLUSTRATION::PHOTO) << endl;
            cout << "   | " << ILLUSTRATION::DESSIN << ". " << illustrationName(ILLUSTRATION::DESSIN) << endl;
            cout << "   | " << ILLUSTRATION::PHOTODESSIN << ". " << illustrationName(ILLUSTRATION::PHOTODESSIN) << endl;
            cin >> illustration;

            *livre = Album(auteur, titre, editeur, ISBN, publicDestine, illustration);
        }

        case TYPE::PIECE : {
            int siecle;
            cout << endl << "Siecle : " << endl;
            cout << "   | " << SIECLE::IIIeAJC << ". " << siecleName(SIECLE::IIIeAJC) << endl;
            cout << "   | " << SIECLE::IIeAJC << ". " << siecleName(SIECLE::IIeAJC) << endl;
            cout << "   | " << SIECLE::IeAJC << ". " << siecleName(SIECLE::IeAJC) << endl;
            cout << "   | " << SIECLE::Ie << ". " << siecleName(SIECLE::Ie) << endl;
            cout << "   | " << SIECLE::IIe << ". " << siecleName(SIECLE::IIe) << endl;
            cout << "   | " << SIECLE::IIIe << ". " << siecleName(SIECLE::IIIe) << endl;
            cout << "   | " << SIECLE::IVe << ". " << siecleName(SIECLE::IVe) << endl;
            cout << "   | " << SIECLE::Ve << ". " << siecleName(SIECLE::Ve) << endl;
            cout << "   | " << SIECLE::VIe << ". " << siecleName(SIECLE::VIe) << endl;
            cout << "   | " << SIECLE::VIIe << ". " << siecleName(SIECLE::VIIe) << endl;
            cout << "   | " << SIECLE::VIIIe << ". " << siecleName(SIECLE::VIIIe) << endl;
            cout << "   | " << SIECLE::IXe << ". " << siecleName(SIECLE::IXe) << endl;
            cout << "   | " << SIECLE::Xe << ". " << siecleName(SIECLE::Xe) << endl;
            cout << "   | " << SIECLE::XIe << ". " << siecleName(SIECLE::XIe) << endl;
            cout << "   | " << SIECLE::XIIe << ". " << siecleName(SIECLE::XIIe) << endl;
            cout << "   | " << SIECLE::XIIIe << ". " << siecleName(SIECLE::XIIIe) << endl;
            cout << "   | " << SIECLE::XIXe << ". " << siecleName(SIECLE::XIXe) << endl;
            cout << "   | " << SIECLE::XXe << ". " << siecleName(SIECLE::XXe) << endl;
            cout << "   | " << SIECLE::XXIe << ". " << siecleName(SIECLE::XXIe) << endl;
            cin >> siecle;
            *livre = PieceDeTheatre(auteur, titre, editeur, ISBN, publicDestine, siecle);

        }

        case TYPE::POESIE : {
            int indicateur;
            cout << endl << "Forme : " << endl;
            cout << "   | " << INDICATEURS::VERS << ". " << siecleName(INDICATEURS::VERS) << endl;
            cout << "   | " << INDICATEURS::PROSE << ". " << siecleName(INDICATEURS::PROSE) << endl;
            cout << "   | " << INDICATEURS::VERSPROSE << ". " << siecleName(INDICATEURS::VERSPROSE) << endl;
            cin >> indicateur;
            *livre = RecueilDePoesie(auteur, titre, editeur, ISBN, publicDestine, indicateur);

        }

        case TYPE::ROMAN : {
            string genre;
            cout << endl << "Genre : ";
            cin >> genre;
            *livre = Roman(auteur, titre, editeur, ISBN, publicDestine, genre);

        }

        case TYPE::BD : {
            string dessinateur;
            cout << endl << "Dessinateur : ";
            cin >> dessinateur;
            *livre = BandeDessinee(auteur, titre, editeur, ISBN, publicDestine, dessinateur);
        }
    }
}*/

void interfaceGlobale(){
    //Fixtures Bibliotheque
    Bibliotheque Lanvin = Bibliotheque("Lanvin", "3 place Lanvin");
    Bibliotheque Courbet = Bibliotheque("Courbet", "3 place Courbet");
    Bibliotheque StPaul = Bibliotheque("St Paul", "3 place St Paul");

    vector<Bibliotheque*> listeBibliotheques;
    listeBibliotheques.push_back(&Lanvin);
    listeBibliotheques.push_back(&Courbet);
    listeBibliotheques.push_back(&StPaul);

    //Fixtures Adherents
    vector<Adherent*> listeAdherents;
    Adherent Isam = Adherent("Ben Soltane", "Isam", &Lanvin);
    Adherent Leo = Adherent("Laurent", "Leo", &Courbet);
    Adherent Pascal = Adherent("Saumon", "Pascal", &StPaul);
    listeAdherents.push_back(&Isam);
    listeAdherents.push_back(&Leo);
    listeAdherents.push_back(&Pascal);

    //Fixtures Livres
    Album Livre1 = Album("Tina Alaei", "L'histoire de ma vie", "Editions No One Cares", "0000000001", PUBLIC::TOUTPUBLIC, ILLUSTRATION::PHOTO);
    BandeDessinee Livre2 = BandeDessinee("Camille Alaei", "Le petit chat", "Editions We Care", "0000000002", PUBLIC::JEUNESSES, "Camille Alaei");
    BandeDessinee Livre3 = BandeDessinee("Romain Grondin", "Chroniques d'une fangirl", "Editions We Care", "0000000003", PUBLIC::ADOS, "PO Nahoum");
    PieceDeTheatre Livre4 = PieceDeTheatre("Nina Loiseau", "Il m'insuporte.", "Editions We Care", "0000000004", PUBLIC::TOUTPUBLIC, SIECLE::XXIe);
    PieceDeTheatre Livre5 = PieceDeTheatre("Mickael Jackson", "Mon imposture", "Editions We Care", "0000000005", PUBLIC::TOUTPUBLIC, SIECLE::XXIe);
    Album Livre6 = Album("Sithia Do Thong", "La folle histoire du BDA", "Editions We Care", "0000000006", PUBLIC::TOUTPUBLIC, ILLUSTRATION::PHOTODESSIN);
    Roman Livre7 = Roman("Mimoun Mohamed", "Comment faire ses passations ?", "Editions We Care", "0000000007", PUBLIC::TOUTPUBLIC, "Roman d'aventures");
    Roman Livre8 = Roman("Alexandre Menasria", "Comment faire ses passations ? Tome 2", "Editions We Care", "0000000008", PUBLIC::TOUTPUBLIC, "Roman d'aventures");
    RecueilDePoesie Livre9 = RecueilDePoesie("Ahmad Iksi", "Poèmes dédiés à mon merveilleux Isam", "Editions We Care", "0000000009", PUBLIC::ADULTE, INDICATEURS::PROSE);

    vector<Livre*> listeLivres;
    listeLivres.push_back(&Livre1);
    listeLivres.push_back(&Livre2);
    listeLivres.push_back(&Livre3);
    listeLivres.push_back(&Livre4);
    listeLivres.push_back(&Livre5);
    listeLivres.push_back(&Livre6);
    listeLivres.push_back(&Livre7);
    listeLivres.push_back(&Livre8);
    listeLivres.push_back(&Livre9);

    cout << "------ Interface Globale ------" << endl;
    cout << "   | Note : Indiquez vos choix en tapant à chaque fois le numéro correspondant (´・ω・`)" << endl << endl;
    int choix;
    bool quitter = false;
    do {
        cout << "Bonjour ! Identifiez-vous :" << endl;
        cout << "1. Adherent dans une bibliotheque" << endl;
        cout << "2. Bibliotheque" << endl;
        cout << "3. Libraire" << endl;
        cout << "4. Je suis nouveau !" << endl;
        cout << "5. Quitter !" << endl;
        cout << "Votre choix : ";
        cin >> choix;
        cout << endl;
        switch (choix) {
            case 1 : {
                interfaceAdherent(listeBibliotheques, listeLivres, listeAdherents);
                break;
            }
            case 2 : {
                interfaceBibliotheque(listeBibliotheques, listeLivres, listeAdherents);
                break;
            }
            case 3: {
                int choix2;
                bool quitter2 = false;
                do {
                    cout << "Que voulez vous faire :" << endl;
                    cout << "1. Ajouter de nouveaux livres a la vente" << endl;
                    cout << "2. Consulter la liste des livres disponibles" << endl;
                    cout << "3. Quitter" << endl;
                    cout << "Votre choix : ";
                    cin >> choix2;
                    cout << endl;
                    switch (choix2) {
                        case 1 : {
                            int continuer;
                            do {
                                int type;
                                cout << endl << "Type : " << endl;
                                cout << "   | " << TYPE::LIVRE << ". " << typeName(TYPE::LIVRE) << endl;
                                cout << "   | " << TYPE::ALBUM << ". " << typeName(TYPE::ALBUM) << endl;
                                cout << "   | " << TYPE::BD << ". " << typeName(TYPE::BD) << endl;
                                cout << "   | " << TYPE::PIECE << ". " << typeName(TYPE::PIECE) << endl;
                                cout << "   | " << TYPE::POESIE << ". " << typeName(TYPE::POESIE) << endl;
                                cout << "   | " << TYPE::ROMAN << ". " << typeName(TYPE::ROMAN) << endl;
                                cin >> type;
                                cout << endl;
                                bool error = false;
                                switch (type) {
                                    case TYPE::LIVRE : {
                                        Livre *livre = new Livre();
                                        //formLivre<Livre *>;
                                        //formLivre(livre, type);
                                        formLivre(livre);
                                        listeLivres.push_back(livre);
                                        break;
                                    }
                                    case TYPE::ALBUM : {
                                        Album *livre = new Album();
                                        //formLivre<Album *>;
                                        //formLivre(livre, type);
                                        formAlbum(livre);
                                        listeLivres.push_back(livre);
                                        break;
                                    }
                                    case TYPE::BD : {
                                        BandeDessinee *livre = new BandeDessinee();
                                        //formLivre<BandeDessinee *>;
                                        //formLivre(livre, type);
                                        formBandeDessinee(livre);
                                        listeLivres.push_back(livre);
                                        break;
                                    }
                                    case TYPE::PIECE: {
                                        PieceDeTheatre *livre = new PieceDeTheatre();
                                        //formLivre<PieceDeTheatre *>;
                                        //formLivre(livre, type);
                                        formPieceDeTheatre(livre);
                                        listeLivres.push_back(livre);
                                        break;
                                    }
                                    case TYPE::POESIE : {
                                        RecueilDePoesie *livre = new RecueilDePoesie;
                                        //formLivre<RecueilDePoesie *>;
                                        //formLivre(livre, type);
                                        formRecueilDePoesie(livre);
                                        listeLivres.push_back(livre);
                                        break;
                                    }
                                    case TYPE::ROMAN : {
                                        Roman *livre = new Roman();
                                        //formLivre<Roman *>;
                                        //formLivre(livre, type);
                                        formRoman(livre);
                                        listeLivres.push_back(livre);
                                        break;
                                    }
                                    default:
                                        cout << "ERREUR : ce type n'existe pas !" << endl;
                                        error = true;
                                        break;
                                }

                                if (!error) {
                                    cout << "Vous avez ajoute ce livre au catalogue : " << endl;
                                    error = false;
                                }

                                string continuerString = "n";
                                cout << "Voulez vous continuer ? (y/n)" << endl;
                                cin >> continuerString;
                                cout << endl;
                                continuer = continuerString == "y";
                            } while (continuer);
                            break;
                        }
                        case 2 : {
                            int continuer;
                            do {
                                cout << "Voici la liste des livres disponibles au catalogue : " << endl;
                                for (auto i = 0; i < listeLivres.size(); i++) {
                                    if (!listeLivres[i]->isTaken()) {
                                        listeLivres[i]->affiche();
                                    }
                                }
                                string continuerString = "n";
                                cout << "Voulez vous continuer ? (y/n)" << endl;
                                cin >> continuerString;
                                cout << endl;
                                continuer = continuerString == "y";
                            } while (continuer);
                            break;
                        }
                        case 3 : {
                            cout << "Vous allez quitter l'interface ..." << endl << "Au revoir !" << endl;
                            quitter2 = true;
                            break;
                        }
                        default:
                            cout << "Cette option n'est pas possible." << endl;
                            break;
                    }
                } while (!quitter2);
                quitter2 = true;
                break;
            }
            case 4: {
                bool quitter3 = false;
                int choix3;
                cout << "Que voulez vous faire :" << endl;
                cout << "1. Creer une bibliotheque" << endl;
                cout << "2. Creer un Adherent" << endl;
                cout << "3. Quitter" << endl;
                cout << "Votre choix : ";
                cin >> choix3;
                cout << endl;
                switch (choix3) {
                    case 1 : {
                        Bibliotheque* bibliotheque = new Bibliotheque();
                        formBibliotheque(bibliotheque);
                        listeBibliotheques.push_back(bibliotheque);
                        break;
                    }
                    case 2 : {
                        for (auto i = 0; i<listeBibliotheques.size(); i++) {
                            listeBibliotheques[i]->affiche();
                        }
                        bool found = false;
                        int code;
                        Bibliotheque* bibliotheque;
                        string yesOrNo;
                        while (!found && !quitter){
                            if(quitter) {cout << "quitter = true" << endl;}
                            cout << endl << "Dans quelle bibliotheque souhaitez vous vous inscrire ? Entrez le code de la bibliotheque de votre choix : ";
                            cin >> code;
                            cout << endl;

                            for (auto i = 0; i<listeBibliotheques.size(); i++) {
                                if (listeBibliotheques[i]->getCode() == code) {
                                    bibliotheque = listeBibliotheques[i];
                                    found = true;
                                }
                            }
                            if (!found){
                                cout << "Cette bibliotheque n'existe pas !" << endl << "Voulez-vous quitter l'interface des adherents ? (y/n)" << endl;
                                cin >> yesOrNo;
                                if (yesOrNo == "y") { break; } else { cout << endl << endl << "Veuillez en choisir une qui est indiquée dans la liste." << endl; }

                            }
                        }

                        Adherent* adherent = new Adherent(bibliotheque);
                        formAdherent(bibliotheque, adherent);
                        listeAdherents.push_back(adherent);

                    }
                }
                break;
            }
            case 5: {
                cout << "Vous allez quitter l'interface ..." << endl << "Au revoir !" << endl;
                quitter = true;
                break;
            }
            default: {
                cout << "Cette option n'est pas possible." << endl;
                break;
            }
        }
    } while (!quitter);
    return;

}

void interfaceAdherent(vector<Bibliotheque*> listeBibliotheques, vector<Livre*> listeLivres, vector<Adherent*> listeAdherents){
    cout << "Dans laquelle de ces bibliotheques voulez-vous entrer ?" << endl;
    Bibliotheque* bibliotheque;
    int code;
    bool quitter = false;
    string yesOrNo = "n";
    do {
        cout << "Choisissez parmis : " << endl;
        for (auto i = 0; i<listeBibliotheques.size(); i++) {
            listeBibliotheques[i]->affiche();
        }


        bool found = false;
        while (!found && !quitter){
            if(quitter) {cout << "quitter = true" << endl;}
            cout << endl << "Indiquez ici le code de la bibliotheque de votre choix : ";
            cin >> code;
            cout << endl;

            for (auto i = 0; i<listeBibliotheques.size(); i++) {
                if (listeBibliotheques[i]->getCode() == code) {
                    bibliotheque = listeBibliotheques[i];
                    found = true;
                }
            }
            if (!found){
                cout << "Cette bibliotheque n'existe pas !" << endl << "Voulez-vous quitter l'interface des adherents ? (y/n)" << endl;
                cin >> yesOrNo;
                if (yesOrNo == "y") { quitter = true; } else { cout << endl << endl << "Veuillez en choisir une qui est indiquée dans la liste." << endl; }

            }
        }

        if (!quitter) {
            cout << "Qui êtes vous ?" << endl;

            int num;
            cout << "Choisissez parmis : " << endl;

            for(auto i = 0; i<listeAdherents.size(); i++) {
                if (listeAdherents[i]->getInscritA() == bibliotheque){
                    listeAdherents[i]->affiche();
                }
            }
            cout << "Si vous n'apparaissez pas dans la liste et que vous souhaitez devenir adherent a la bibliotheque de " << bibliotheque->getNom() << ", entrez \"0\" en guise de code" << endl;

            bool foundAdh = false;
            Adherent* adherent;
            while(!foundAdh && !quitter) {
                cout << endl << "Indiquez ici votre code adherent : ";
                cin >> num;
                cout << endl;
                switch (num){
                    case 0 : {
                        cout << "Sur l'interface globale, choisissez l'option \"Je suis nouveau\"" << endl;
                        quitter = true;
                        break;
                    }
                    default: {
                        for (auto i = 0; i<listeAdherents.size(); i++) {
                            if (listeAdherents[i]->getNumAdherent() == num && listeAdherents[i]->getInscritA()->getCode() == bibliotheque->getCode()) {
                                adherent = listeAdherents[i];
                                foundAdh = true;
                            }
                        }
                        if (!foundAdh){
                            cout << "Cet adherent n'existe pas !" << endl << "Voulez-vous quitter l'interface des adherents ? (y/n)" << endl;
                            cin >> yesOrNo;
                            if (yesOrNo == "y") { cout << yesOrNo << "y" << endl; quitter = true; } else {
                                cout << endl << endl << "Veuillez choisir un adherent qui est indiqué dans la liste." << endl;
                            }
                        }
                        break;
                    }
                }
            }

            if (!quitter) {
                cout << endl << "Bienvenu " << adherent->getNomPrenom() << " !" << endl;
                cout << "Que souhaitez vous faire ?" << endl << endl;
                int choix;
                cout << "1. Emprunter un livre" << endl;
                cout << "2. Rendre un livre" << endl;
                cout << "3. Quitter" << endl;
                cout << endl << "Votre choix : ";
                cin >> choix;
                cout << endl;

                switch (choix) {
                    case 1: {
                        int continuer = false;
                        do {
                            bibliotheque->afficheLivres();
                            int codeLivre;
                            cout << "Entrez le code du livre que vous souhaitez emprunter : ";
                            cin >> codeLivre;
                            cout << endl;
                            string continuerString = "n";
                            adherent->emprunt(codeLivre);
                            cout << "Voulez vous continuer ? (y/n)" << endl;
                            cin >> continuerString;
                            cout << endl;
                            continuer = continuerString == "y";
                        } while (continuer);
                        break;
                    }
                    case 2: {
                        int continuer = false;
                        do {
                            if (adherent->getEmprunts().size() == 0) {
                                cout << "Vous n'avez pas emprunte de livres dans cette bibliotheque" << endl;
                                continuer = false;
                            } else {
                                adherent->affiche();
                                int codeLivre;
                                cout << "Entrez le code du livre que vous souhaitez rendre : ";
                                cin >> codeLivre;
                                cout << endl;
                                string continuerString = "n";
                                adherent->rendre(codeLivre);
                                cout << "Voulez vous continuer ? (y/n)" << endl;
                                cin >> continuerString;
                                cout << endl;
                                if (continuerString == "y") { continuer = true; }
                            }
                        } while (continuer);
                        break;
                    }
                    case 3: {
                        cout << "enter" << endl;
                        quitter = true;
                        break;
                    }

                }


            }

        }
        if (!quitter) { cout << "Vous allez etre redirige au debut de l'interface adherent ..." << endl << "..." << endl; } else { cout << "Vous allez quitter l'interface adherent ..." << endl  << "..." << endl; }

    } while (!quitter);

    return;
}

void interfaceBibliotheque(vector<Bibliotheque*> listeBibliotheques, vector<Livre*> listeLivres, vector<Adherent*> listeAdherents){
    cout << "Qui êtes vous ?" << endl;
    Bibliotheque* bibliotheque;
    int code;
    bool quitter = false;
    string yesOrNo = "n";
    do {
        cout << "Choisissez parmis : " << endl;
        for (auto i = 0; i<listeBibliotheques.size(); i++) {
            listeBibliotheques[i]->affiche();
        }


        bool found = false;
        while (!found && !quitter){
            if(quitter) {cout << "quitter = true" << endl;}
            cout << endl << "Indiquez ici le code de la bibliotheque de votre choix : ";
            cin >> code;
            cout << endl;

            for (auto i = 0; i<listeBibliotheques.size(); i++) {
                if (listeBibliotheques[i]->getCode() == code) {
                    bibliotheque = listeBibliotheques[i];
                    found = true;
                }
            }
            if (!found){
                cout << "Cette bibliotheque n'existe pas !" << endl << "Voulez-vous quitter l'interface des adherents ? (y/n)" << endl;
                cin >> yesOrNo;
                if (yesOrNo == "y") { quitter = true; } else { cout << endl << endl << "Veuillez en choisir une qui est indiquée dans la liste." << endl; }

            }
        }

        if (!quitter) {
            cout << endl << "Bienvenu chez " << bibliotheque->getNom() << " !" << endl;
            cout << "Que souhaitez vous faire ?" << endl << endl;
            int choix;
            cout << "1. Acheter un livre" << endl;
            cout << "2. Emprunter un livre dans une autre bibliotheque" << endl;
            cout << "2. Rendre les livres empruntes" << endl;
            cout << "3. Quitter" << endl;
            cout << endl << "Votre choix : ";
            cin >> choix;
            cout << endl;

            switch (choix) {
                case 1: {
                    int continuer = false;
                    string continuerString;
                    do {
                        for (auto i = 0; i<listeLivres.size(); i++) {
                            if (!listeLivres[i]->isTaken()) {
                                listeLivres[i]->affiche();
                            }
                        }
                        int codeLivre;
                        bool foundLivre = false;
                        Livre* livre;
                        while (!foundLivre && !quitter){
                            if(quitter) {cout << "quitter = true" << endl;}
                            cout << endl << "Entrez le code du livre que vous souhaitez acheter : ";
                            cin >> codeLivre;
                            cout << endl;

                            for (auto i = 0; i<listeLivres.size(); i++) {
                                if (listeLivres[i]->getCode() == codeLivre) {
                                    livre = listeLivres[i];
                                    found = true;
                                }
                            }
                            if (!found){
                                cout << "Ce livre n'existe pas !" << endl << "Voulez-vous quitter l'interface des bibliotheques ? (y/n)" << endl;
                                cin >> yesOrNo;
                                if (yesOrNo == "y") { quitter = true; } else { cout << endl << endl << "Veuillez en choisir un qui est indiqué dans la liste." << endl; }

                            }
                        }

                        bibliotheque->ajouterLivre(livre);

                        cout << "Voulez vous continuer ? (y/n)" << endl;
                        cin >> continuerString;
                        cout << endl;
                        if (continuerString == "y") { continuer = true; } else { continuer = false; }
                    } while (continuer);
                    break;
                }
                case 2: {
                    int continuer = false;
                    string continuerString;
                    do {
                        for (auto i = 0; i<listeBibliotheques.size(); i++) {
                            if (listeBibliotheques[i] != bibliotheque) {
                                listeBibliotheques[i]->affiche();
                            }
                        }
                        int codeBiblio;
                        bool foundBiblio = false;
                        Bibliotheque* biblioEmpr;
                        while (!foundBiblio && !quitter){
                            if(quitter) {cout << "quitter = true" << endl;}
                            cout << endl << "Entrez le code de la bibliotheque chez qui vous souhaitez emprunter : ";
                            cin >> codeBiblio;
                            cout << endl;

                            for (auto i = 0; i<listeBibliotheques.size(); i++) {
                                if (listeBibliotheques[i]->getCode() == codeBiblio) {
                                    biblioEmpr = listeBibliotheques[i];
                                    found = true;
                                }
                            }
                            if (!found){
                                cout << "Ce livre n'existe pas !" << endl << "Voulez-vous quitter l'interface des bibliotheques ? (y/n)" << endl;
                                cin >> yesOrNo;
                                if (yesOrNo == "y") { quitter = true; } else { cout << endl << endl << "Veuillez en choisir un qui est indiqué dans la liste." << endl; }

                            }
                        }
                        string ISBN;
                        cout << "Quel est l'ISBN du livre que vous souhaitez ?";
                        cin >> ISBN;
                        cout << endl;

                        bibliotheque->demande(biblioEmpr, ISBN);

                        cout << "Voulez vous continuer ? (y/n)" << endl;
                        cin >> continuerString;
                        cout << endl;
                        if (continuerString == "y") { continuer = true; } else { continuer = false; }
                    } while (continuer);
                    break;
                }
                case 3: {
                    bibliotheque->rendre();
                    break;
                }
                case 4: {
                    quitter = true;
                    break;
                }

            }
        }
        if (!quitter) { cout << "Vous allez etre rediriges au debut de l'interface bibliotheque ..." << endl << "..." << endl; } else { cout << "Vous allez quitter l'interface bibliotheque ..." << endl  << "..." << endl; }

    } while (!quitter);

    return;
}
