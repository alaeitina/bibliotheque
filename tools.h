//
// Created by Tina Alaei on 18/01/2020.
//

#include <iostream>
using namespace std;

enum ETATS {LIBRE = 0, EMPRUNTE = 1, PRETE = 2};
enum PUBLIC {ADULTE = 0, ADOS = 1, JEUNESSES = 2, TOUTPUBLIC= 3};
enum TYPE {LIVRE = 0, ALBUM = 1, BD = 2, PIECE = 3, POESIE = 4, ROMAN = 5};

string typeName(int);
string etatName(int);
string publicName(int);