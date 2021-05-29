#include <iostream>
#include <time.h>
#include <cstdlib>

#include <chrono>
#include <thread>

using namespace std;

int ile, temp, next;
float czas;
clock_t start, stop;

int main() {


    int *odczyt;
    odczyt = &temp;

    int *tablica;
    tablica= new int [ile];

    ile = 1000000000;
    while(1==1){


        for (int i=1; i>0; i++){

            chrono::seconds interval( 2 );

                tablica[i]=i;
            cout << tablica[i] << endl;

            this_thread::sleep_for( interval ) ;


        }

        if(temp==000)   return 0;
    }



    delete [] tablica;

    cout << "Hello, World!" << endl;

}
