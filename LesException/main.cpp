#include <iostream>

using namespace std;


void getElement(int tab[], int i)
{
    if(i<3)
        cout << tab[i];
    else
        throw -100;

}
int main()
{
    int tab[]={10,3,40};


    try{
       getElement(tab,6);
    }
    catch(int i)
    {
      cout<<"Probleme de code :" << i <<endl;
    }

     catch(...)
    {
      cout<<"Probleme :" <<endl;
    }

    cout<<"Fin du programme..."<<endl;
    //cout << "tab[0] = " <<tab[0]<< endl;
    return 0;
}
