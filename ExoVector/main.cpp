#include <iostream>
#include <vector>
using namespace std;

class Animal{

private:
    string nom;
    string espece;

public:
    Animal(string,string);
    void info();

};
void Animal::info(){
cout <<"Nom : "<< nom <<" Espece : "<<espece<<endl;
}

Animal::Animal(string n, string e)
{
  nom=n;
  espece = e;
}
int main()
{
    vector<int> iv;	// vector a initialement 0 elements.	location: 007E0EC0
    iv.push_back(42); // Ajoute 42 à la fin du vector	iv[0] = 42
    cout << "location: " << &iv[0] << endl;
    int *k = &iv[0];
    cout << "iv[0] = " << iv[0] << endl;
    cout << "*k = " << *k << endl;
    cout << "sz=" << iv.size() << " cap=" << iv.capacity();


    cout << "\n************ reserve *************" << endl;

    iv.reserve(1024); // augmente la capacité et non pas taille sz=2048 cap=2048
    cout << "\niv[0]: " << iv[0] << endl;
    cout << "\nlocation: " << &iv[0] << endl;
    cout << "k = " << k << endl;
    cout << "*k = " << *k << endl;
    cout << "sz=" << iv.size() << " cap=" << iv.capacity();

    cout << "\n************ resize *************" << endl;
    iv.resize(2048); // augmente taille (et capacité)
    cout << "\nlocation: " << &iv[0] << endl;
    cout << "\n sz=" << iv.size()<< "cap="<< iv.capacity();

    cout << "\n iv[0] = " << iv[0] << endl;
    cout << "\n iv[1] = " << iv[1] << endl;
    cout << "\n iv[2] = " << iv[2] << endl;
    cout << "*k ="<< *k << endl;

    /*
    Animal a1("Mac","Chien");
    Animal a2("Pichou","Chat");
    Animal a3("Toto","Oiseau");
    //a1.info();
    vector<Animal>va;

    va.push_back(a1);
    va.push_back(a2);
    va.push_back(a3);

    for(int i=0; i<va.size(); ++i )
    {
        va[i].info();
    }*/


    /*
    vector<int> iv;
    for( int i=0; i<10; ++i )
    {
        iv.push_back(i);
    }
    for(int i=0; i<iv.size(); ++i )
    {
        cout << iv[i] << endl;
    }
    */


    return 0;
}
