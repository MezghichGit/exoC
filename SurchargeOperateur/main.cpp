#include <iostream>

using namespace std;
class Point
{
    int x, y;

public :
    Point(int abs=0, int ord=0)
    {
        x = abs;
        y = ord;
    }
    Point operator+ (Point);
    void affiche();
    Point operator++(); //préfixée
    Point operator++(int); //postfixée
};

void Point::affiche()
{
    cout << "coordonnees : "<< x << " " << y << "\n";
}
Point Point::operator+(Point a)
{
    Point p;
    p.x = x + a.x;
    p.y = y + a.y;
    return p;
}

Point Point::operator++()
{
    x++;
    y++;
    return *this;
}

Point Point::operator++(int n)
{
    Point p=*this;
    x++;
    y++;
    return p;
}
int main()
{
    string formation ="C++";
    cout<<"Formation : "<<formation <<endl;
    cout<<"Nbre de caractère : "<<formation.size() <<endl;
    /*
    Point a1(2, 5);
	Point a2(2, 5), b;
	//b= ++a1;  //une pré-increment
	b= a1++;  // un appel à la surcharge post-incrément
	cout << "a1 : ";
	a1.affiche ();

	cout << "b : ";
	b.affiche ();*/


    /*Point a(1,2);
    a.affiche();
    Point b(2,5);
    b.affiche();
    Point c;
    c = a + b;
    c.affiche();
    //cout << "Hello world!" << endl;*/
    return 0;
}
