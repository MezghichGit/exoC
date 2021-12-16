#include <iostream>
#include "Point.h"
using namespace std;


class Etudiant
{
private :
    int ident;

    int nbNotes;
public:
    Etudiant(int, int);
    void saisirNotes();
    void moyenneNotes();
    void notesEtudiant();
    float* notes;
    Etudiant(Etudiant&); // déclaration du constructeur de recopie

};

Etudiant::Etudiant(int id, int nb):ident(id), nbNotes(nb)
{
    cout<<"Creation d'un etudiant"<<endl;
    notes = new float[nbNotes];
}

void Etudiant::saisirNotes()
{
    for(int i=0; i<nbNotes;i++)
    {
        cout<<"Donner une note"<<endl;
        cin>>notes[i];

    }
}

void Etudiant::notesEtudiant()
{
    for(int i=0; i<nbNotes;i++)
    {
        cout<<"note " <<i<<":" <<notes[i]<<endl;

    }
}

void Etudiant::moyenneNotes()
{
    float moy;
    for(int i=0; i<nbNotes;i++)
    {
        moy = moy + notes[i];
    }
    moy = moy/nbNotes;
    cout<<"La moyenne des notes est : "<< moy <<endl;
}

//implémentation du constructeur de recopie

Etudiant::Etudiant(Etudiant& e) :ident(e.ident), nbNotes(e.nbNotes)
{
     notes = new float[nbNotes];  // allocation de la mémoire
     for(int i=0;i<nbNotes;i++)
     {
         *(notes+i) = *((e.notes)+i);  // copie des valeurs des attributs dynamiques
     }

}

int main()
{
    //Point a, b(10,20); // // une déclaration et instanciation
    //a = b;
    //a.afficher();
    //Point * ptr = new Point(10,20); // le new permet de créer des objets dynamiques
    //ptr->afficher();
    //delete ptr;       // le delete permet de détruire les objets dynamiques

    cout<<"Cas du premier etudiant"<<endl;
    Etudiant e(1,3);
    e.saisirNotes();
    e.notesEtudiant();
    cout <<"Tableau de e "<<e.notes<<endl;
    //e.moyenneNotes();
    cout<<"**********"<<endl;
    cout<<"Cas du deuxieme etudiant"<<endl;
    Etudiant e2 = e;
    e2.notesEtudiant();
    cout <<"Tableau de e2 "<<e2.notes<<endl;
    //e2.moyenneNotes();

    e2.notes[2]=20;
    cout<<"Apres modification note de e"<<endl;
    cout<<"e2.notes[2]= "<<e2.notes[2]<<endl;
    cout<<"e.notes[2]= "<<e.notes[2]<<endl;
    /*
    Point a ;  // une déclaration et instanciation
    Point b(1,2);  // déclration + instaciation d'un objet b avec deux paramètres
    // a.x = 5;
    a.initialiser(5,2);
    cout<<"Information du point a"<<endl;
    a.afficher();
    cout<<"Information du point b"<<endl;
    b.afficher();
    //cout << "Hello world!" << endl;*/
    return 0;
}
