#include <iostream>

using namespace std;

class Point
{

protected:
    int x, y;
public:
    void initialiser(int, int);
    void deplacer(int, int);
    void afficher();
};

class PointCol : public Point
{
    short couleur;  // privé
public :
    void colorer (short cl)
    {
        couleur = cl;
    }
    //void afficher_c();
    void afficher();  // redefinition
};
void Point ::initialiser(int a, int b){
    x = a;
    y = b;
}

void Point::afficher()
{
    cout << "Coordonnees : " << x << "," << y << endl;
}

void PointCol::afficher() // c'est une rédéfinition
{
    //cout << "Coordonnees : " << x << "," << y << endl;
    Point::afficher(); // un appel à la méthode afficher de la classe mère
    cout << "Couleur : " << couleur << endl;
}

template <typename T>
T maximum(T a,  T b)
{
   if(a>b)
      return a;
   else
      return b;
}


template<typename T, typename S>
S moyenne(T tableau[], int taille)
{
  S somme(0);                  //La somme des éléments du tableau
  for(int i(0); i<taille; ++i)
    somme += tableau[i];

  return somme/taille;
}

int main()
{
  int tab[4] = {10,10,10,10};
  //Remplissage du tableau

  cout << "Moyenne : " << moyenne<int,double>(tab,4) << endl;

  return 0;
}

/*
int main()
{
     double pi(3.14);
     double e(2.71);

     cout << maximum<double>(pi,e) << endl;

     int cave(-1);
     int dernierEtage(12);

     cout << maximum<int>(cave,dernierEtage) << endl; //Utilise la "version int" de la fonction

     unsigned int a(43);
     unsigned int b(87);

     cout << maximum<unsigned int>(a,b) << endl; //Utilise la "version unsigned int" de la fonction.
    /*
    PointCol pc;
    pc.initialiser(1,2);
    pc.colorer(10);

    cout << "afficher de la classe fille !" << endl;
    pc.afficher();

    cout << "afficher de la classe mere !" << endl;
    pc.Point::afficher();*/
    //cout << pc.x <<endl;  // impossible
    //cout << "Hello world!" << endl;
    //return 0;
//}
