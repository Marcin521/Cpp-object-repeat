//
// Created by Marcin on 28.05.2021.
//
#include <iostream>
#include "tekst.h"

using namespace std;


void Dane::sprPazystosc(){

    if(numer_indeksu % 2 == 0){
        cout << "pazysta";
    }else
        cout<< "nie pazysta";

}

void Dane::wypelnianie(){

    cout << "imie " << endl;
    cin >> imie;

    cout << "nazwisko " << endl;
    cin >> nazwisko;

    cout << "numer indeksu " << endl;
    cin >> numer_indeksu;

}