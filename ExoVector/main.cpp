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
    Animal a1("Toto","Chat");
    a1.info();
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
