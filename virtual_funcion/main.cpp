#include <iostream>
#include "wirtual.h"

using namespace std;

int main()
{
    Kolo k(1);
    Kwadrat kw(2);

    Ksztalt *wsk;

    wsk = &k;
    wsk -> oblicz_pole();

    wsk = &kw;
    wsk -> oblicz_pole();

    obliczenia(wsk);

    return 0;
}