#include <iostream>
#include "Calcul.h"
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout << "Bonjour voici le programme de calcul de distance de deux points d'un repere orthonorme\n";
    cout << "Veuillez entrer la coordonnee x du premier point\n";
    cin >> x1;
    cout << "Veuillez entrer la coordonnee y du premier point\n";
    cin >> y1;
    cout << "Veuillez entrer la coordonnee x du deuxieme point\n";
    cin >> x2;
    cout << "Veuillez entrer la coordonnee y du deuxieme point\n";
    cin >> y2;
    Calcul* o1;
    o1 = new Calcul(x1, x2, y1, y2);
    cout << "Resultat : " << o1->calculateDistance() << endl;
    delete o1;
}