//
// Created by Marcin on 29.05.2021.
//

#include "temp.h"
#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

void Temp::loading() {

        tablica = new int [ile];

        for (int i=1; i>0; i++){

            chrono::seconds interval( 2 );

                tablica[i]=i;
                cout << tablica[i] << endl;

            this_thread::sleep_for( interval ) ;

        }

    delete [] tablica;
        return;

    }



