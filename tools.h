
#include <iostream>
using namespace std;

enum ETATS {LIBRE = 0, EMPRUNTE = 1, PRETE = 2};
enum PUBLIC {ADULTE = 0, ADOS = 1, JEUNESSES = 2, TOUTPUBLIC= 3};
enum TYPE {LIVRE = 0, ALBUM = 1, BD = 2, PIECE = 3, POESIE = 4, ROMAN = 5};
enum ILLUSTRATION {PHOTO = 0, DESSIN = 1, PHOTODESSIN = 2};
enum SIECLE {IIIeAJC, IIeAJC, IeAJC, Ie, IIe, IIIe, IVe, Ve, VIe, VIIe, VIIIe, IXe, Xe, XIe, XIIe, XIIIe, XIVe, XVe, XVIe, XVIIe, XVIIIe, XIXe, XXe, XXIe};
enum INDICATEURS {VERS = 0, PROSE = 1, VERSPROSE = 2};

string typeName(int);
string etatName(int);
string publicName(int);
string illustrationName(int);
string siecleName(int);
string indicateurName(int);