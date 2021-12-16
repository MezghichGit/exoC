#include <iostream>

using namespace std;
class Tab
{
private:
    int dim;
    int* adr;
public:
    Tab(int);
    ~Tab();
    Tab(Tab&);  // constructeur de recopie

};

// implementation du constructeur
Tab::Tab(int d) : dim(d)
{
    adr = new int[dim];
    cout << "Construction usuelle, adr. objet : " << this << endl; // this : l'objet courant

}
Tab::Tab(Tab& t) : dim(t.dim)
{
    adr = new int[dim];
    for (int i=0; i<dim; i++)
    {
        *(adr+i) = *(t.adr+i);
    }
    cout << "Construction recopie, adr. objet : "<< this << endl;
}
// implementation du destructeur
Tab::~Tab()
{
    delete[] adr;
    cout << "Destruction, adr. objet : " << this << " adr. tableau : " << adr << endl;
}

void fct(Tab a)  // l'objet a sera détruit à la fin du bloc de code; a : est un paramètre formel (lors de la déclration)
{
    cout << "Appel de fonction" << endl;
}


class Point
{
private:
    static int cpt;
    int x, y;
public:
    Point(int, int);
    ~Point();
    static void compter();
    friend bool coincide(Point a, Point b);
};

int Point::cpt = 0;

Point::Point(int n, int p) : x(n), y(p)
{
    cpt++;
    cout<<"nombre d'objets:"<<cpt<<endl;
}
Point::~Point()
{
    cpt--;
    cout<<"nombre d'objets:"<<cpt<<endl;
}
void Point::compter()
{
    cout<<"Methode statique - nombre d'objets: "<<cpt<<endl;
}


bool coincide(Point a, Point b)
{
    if (a.x == b.x && a.y == b.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Point::compter();
    Point a(1,2),b(2,4);
    bool test = coincide(a,b);
    std::cout << std::boolalpha;
    cout <<"coincide(a,b) : " <<test<< endl;
    //Tab t(5);  // déclration d'un objet de typeTab
    //fct(t);    // Passage de paramètres  (a = t); // t : c'est un paramètre effectif(lors de l'appel)

    Point::compter();

    return 0;
}
