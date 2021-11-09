//
// Created by cinamon on 09.11.2021.
//

#ifndef LIB_CPP_POJAZD_H
#define LIB_CPP_POJAZD_H

#include "iostream"

using namespace std;

class Pojazd{
private:
    string numer_rejestracyjny;
    string nazwa;
    int ilosc_miejsc;
    string *pasazerowie;
    string marka, typ;

public:
    Pojazd(string, string, int, string, string);
    Pojazd(Pojazd &pojazd);
    ~Pojazd();
    //print object
    void wypiszPojazd();
    //change passenger
    void zmienPasazera(int num, string pasazer);
    //get name
    string getNazwa();
    //get register number
    string getNumerRejestracyjny();
    //get car name
    string getMarka();
    //get car name
    string getTyp();
    //set name
    void setNazwa(string nazwa);
    //set register number
    void setNumerRejestracyjny(string nr_rejestracyjny);
};

#endif //LIB_CPP_POJAZD_H
