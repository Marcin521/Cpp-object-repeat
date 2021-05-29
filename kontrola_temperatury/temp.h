 //
// Created by Marcin on 29.05.2021.
//

#ifndef KONTROLA_TEMPERATURY_TEMP_H
#define KONTROLA_TEMPERATURY_TEMP_H


class Temp {

    int ile;
    int *tablica;



public:
    //use constructor
    Temp(int = 1);
    ~Temp(); //nie może mieć żadnych argumentów

    void loading();

};


#endif //KONTROLA_TEMPERATURY_TEMP_H
