#ifndef POINT_H
#define POINT_H


class Point
{
public:
        Point();  // constructeur par d�faut
        Point(int);
        Point(int,int); // constructeur avec deux param�tres
        virtual ~Point();  // un destructeur
        void initialiser(int,int);
        void deplacer(int,int);
        void afficher();



private:

        int x;
        int y;
};

#endif // POINT_H
