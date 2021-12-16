#include "Point.h"
#include <iostream>
using namespace std;

Point::Point()  // Constructeur par défaut
{
    cout << "Constructeur par defaut" << endl ;
}

Point::Point(int a)  // Constructeur par défaut
{
    cout << "Constructeur avec un seul parametre" << endl ;
    x = a;
    y = 0;
}

Point::Point(int ii, int jj): x(ii), y(jj) // Constructeur par défaut
{
    cout << "Constructeur avec deux parametres" << endl ;
   // x = ii;
   // y = jj;

}


Point::~Point()  // Destructeur
{
     cout << "Destructeur" << endl ;  // cout : affichage sur la console standard
}


void Point::initialiser (int abs, int ord)
{
    x = abs ;
    y = ord ;
}

void Point::deplacer (int dx, int dy)
{
    x = x + dx ;
    y = y + dy ;
}
void Point::afficher ()

{
    cout << "Coordonnees du point : (" << x << "," << y << ")" << endl ;
}
