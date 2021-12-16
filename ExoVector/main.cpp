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
    }


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
