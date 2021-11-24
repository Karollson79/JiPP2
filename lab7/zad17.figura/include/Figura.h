//
// Created by cinamon on 23.11.2021.
//

#ifndef JIPP2_FIGURA_H
#define JIPP2_FIGURA_H
#include "string"

using namespace std;

class Figura{
protected:
    string nazwa, color;
public:
    void printFigura();
    Figura();
    Figura(string, string);
};

class Kwadrat: public Figura{
protected:
    int dlBoku;
public:
    Kwadrat();
    Kwadrat(string, string, int);
    int obliczPole();
    int obliczObw();
};

class Trojkat: public Figura{
protected:
    int podstawa;
    int wysokosc;
    int bokA;
    int bokB;
public:
    int obliczPole();
    int obliczObw();
    Trojkat();
    Trojkat(string, string, int, int, int, int);
};

#endif //JIPP2_FIGURA_H
