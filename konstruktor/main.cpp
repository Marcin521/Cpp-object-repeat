#include <iostream>

using namespace std;
//dynamic alocated

int ile;

int main() {

    cout << "ile miejcw w tablicy: ";
    cin >> ile;

    int *tablica;

    //dynamiczna alokacja pamięci
    int *wskaznik =tablica;
    tablica= new int [ile];

    delete [] tablica;

     return 0;
}
