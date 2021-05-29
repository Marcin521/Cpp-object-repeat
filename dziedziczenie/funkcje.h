//
// Created by Marcin on 29.05.2021.
//

#include <iostream>
#include <math.h>

//#ifndef DZIEDZICZENIE_FUNKCJE_H
//#define DZIEDZICZENIE_FUNKCJE_H

using namespace std;

    class Punkt
    {
        float x,y;
        string nazwa;

    public:
        void wyswietl();

        Punkt(string n="S", float a=0, float b=0)
        {
            nazwa = n;
            x = a;
            y = b;
        }
    };

    class Kolo :public Punkt //klasa Kolo dziedziczy publicznie z klasy Punkt
    {
        float r;
        string nazwa;

    public:
        void wyswietl();


        Kolo(string nk="Kolko", string np="S", float a=0, float b=0, float pr=1)
                :Punkt(np,a,b)
        {
            nazwa = nk;
            r = pr;
        }
    };

    class Kula :public Punkt
    {
        float r;
        string nazwa;

    public:
        void wyswietl();

        Kula(string nk="Kula", string np="S", float a=0, float b=0, float pr=1)
        :Punkt(np,a,b)
        {
            nazwa = nk;
            r = pr;
        }

    };