//
// Created by Marcin on 28.05.2021.
//
#include <iostream>
#include "tekst2.h"

using namespace std;


void Dane::sprPazystosc(){

    if(numer_indeksu % 2 == 0){
        cout << "pożysta";
    }else
        cout<< "nie pażysta";
}

void Dane::wypelnianie(){

    cout << "imie " << endl;
    cin >> imie;

    cout << "nazwisko " << endl;
    cin >> nazwisko;

    cout << "numer indeksu " << endl;
    cin >> numer_indeksu;

}