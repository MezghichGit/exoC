#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    const char * ptr = "hello";
    *ptr = 'H'; // Erreur (assignement to read-only location)  ptr++;
    return 0;
}
