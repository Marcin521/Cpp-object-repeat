//
// Created by Marcin on 29.05.2021.
//

#include <iostream>
#include "funkcje.h"


    void Punkt :: wyswietl()
    {
        cout<<nazwa<<"("<<x<<","<<y<<")"<<endl;
    }

    void Kolo :: wyswietl()
    {
        cout<<"Kolo o nazwie: "<<nazwa<<endl;
        cout<<"Srodek kola: "<<endl;
        Punkt::wyswietl();
        cout<<"Promien: "<<r<<endl;
        cout<<"Pole kola : "<<M_PI*r*r<<endl;
    }