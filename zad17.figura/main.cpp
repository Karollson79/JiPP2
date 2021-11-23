//
// Created by cinamon on 23.11.2021.
//

#include "include/Figura.h"
#include "iostream"

int main(){
    Kwadrat k1("kwadrat1", "czarny", 4);
    k1.printFigura();
    int pole = k1.obliczPole();
    cout << pole;
    Trojkat t1("trojka1", "zielony", 1, 2, 3, 4);
    t1.printFigura();
    int poleTr = t1.obliczPole();
    int obwTr = t1.obliczObw();
    cout << "Pole: " << poleTr << endl;
    cout << "Obw: " << obwTr << endl;
}