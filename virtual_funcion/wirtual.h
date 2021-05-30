//
// Created by Marcin on 29.05.2021.
//
#include <iostream>


#ifndef VIRTUAL_FUNCION_WIRTUAL_H
#define VIRTUAL_FUNCION_WIRTUAL_H

using namespace std

class Ksztalt
{
public:
    virtual void oblicz_pole()=0;
    //czysta funkcja wirtualna

    Ksztalt(int promien)
    {
        promien;
    }

};
//////////////////////////////////

class Kolo:public Ksztalt
{
    float r;
public:

    Kolo(float x)
    {
        r=x;
    }

    virtual void oblicz_pole();

};
////////////////////////////////////////

class Kwadrat :public Ksztalt
{
    float a;
public:
    Kwadrat(float x)
    {
        a=x;
    }
    virtual void oblicz_pole();

};
//////////////////////////////////

void obliczenia(Ksztalt *x)
{
    x -> oblicz_pole();
}


#endif //VIRTUAL_FUNCION_WIRTUAL_H
