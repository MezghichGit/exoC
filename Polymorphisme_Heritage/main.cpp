#include <iostream>

using namespace std;


class Point
{

protected:

public:
    void initialiser(int, int);
    void deplacer(int, int);
    virtual void afficher();
    Point(int, int);
     int x, y;
};

Point :: Point(int i, int j)
{
    x = i;
    y = j;
}

void Point::afficher()
{
cout <<"x = "<< x <<" y =" << y<<endl;
}
class PointCol : public Point
{

protected:
    //int c;
public:
    PointCol(int, int, int);
    void afficher();
        int c;
};

PointCol :: PointCol(int i, int j, int k) : Point(i,j)
{
    c = k;
}

void PointCol::afficher()
{
cout <<"x = "<< x <<" y =" << y<<" c = "<<c<<endl;
}

int main()
{
    Point * p = new Point(1,2);
    PointCol * pc = new PointCol(4,5,6);
    PointCol * temp= new PointCol(8,9,10);
    cout<<"p.x = "<<p->x<<" p.y = "<<p->y<<endl;
    p = temp; // UpCasting
    p->afficher();  // Appel de la méthode affichage de Point
    /*
    cout<<"p.x = "<<p->x<<" p.y = "<<p->y<<endl;


    //p = pc; // upcasting
    pc = (PointCol *)p;   //ndownCasting + Cast explicite
    cout<<"pc.c = "<<pc->c<<endl;
    //pc = p;
    cout<<"fin du programme"<<endl;*/
    return 0;
}
