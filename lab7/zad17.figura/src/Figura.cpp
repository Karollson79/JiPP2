//
// Created by cinamon on 23.11.2021.
//
#include "../include/Figura.h"
#include "iostream"

using namespace std;

Figura::Figura() {
    nazwa = "brak";
    color = "brak";
}

Figura::Figura(string naz, string col) {
    nazwa = naz;
    color = col;
}

void Figura::printFigura() {
    cout << "Nazwa: " << nazwa << endl;
    cout << "Color: " << color << endl;
}

Kwadrat::Kwadrat() {
    Kwadrat::Figura();
    dlBoku = 0;
}

Kwadrat::Kwadrat(string naz, string col, int dl) {
    nazwa = naz;
    color = col;
    dlBoku = dl;
}

int Kwadrat::obliczObw() {
    return 4*dlBoku;
}

int Kwadrat::obliczPole() {
    return dlBoku*dlBoku;
}

Trojkat::Trojkat() {
    podstawa = 0;
    wysokosc = 0;
    bokA = 0;
    bokB = 0;
}

Trojkat::Trojkat(string naz, string col, int pod, int wys, int A, int B) {
    nazwa = naz;
    color = col;
    podstawa = pod;
    wysokosc = wys;
    bokA = A;
    bokB = B;
}

int Trojkat::obliczPole() {
    return 0.5*podstawa*wysokosc;
}

int Trojkat::obliczObw() {
    return (podstawa + bokA + bokB);
}