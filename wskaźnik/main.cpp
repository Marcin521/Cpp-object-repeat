#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;


int ile;
float czas;
clock_t start, stop;

int main() {

    cout << "ile miejcw w tablicy: ";
    cin >> ile;

    //dynamiczna alokacja pamięci
    int *tablica;
    tablica= new int [ile];

    for (int i=0; i<ile; i++){
        tablica[i]=i;
        tablica[i]+=50;
    }

    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout<<"Czas zapisu (bez wskaznika): "<<czas<<" s"<<endl;
    delete [] tablica;

     return 0;
}
