#include <iostream>
using namespace std;

class Animal{

public:

    string gatunek;
    string imie;
    int wiek;

    void dodaj_zwierze(){

        cout << "podaj gatunek" << endl;
        cin >> gatunek;

        cout << "podaj imie" << endl;
        cin >> imie;

        cout << "podaj wiek" << endl;
        cin >> wiek;
    }

    void glos(){
        if(gatunek=="krowa") cout << "muuuuuu " << "lat " << wiek;
    }

};

int main() {

    //twoże obiekt o nazwie z1
    Animal z1;

    //wywołanie metody z klasy
    z1. dodaj_zwierze();
    z1. glos();

    return 0;
}
