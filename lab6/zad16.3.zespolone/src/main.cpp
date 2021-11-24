//
// Created by papasmerf on 12.11.2021.
//

#include "iostream"
#include "../include/Zespolone.h"

using namespace std;

int main(){
    ComplexNumber a1(2, 3), a2(-2, -1);

    cout << "Wypisz dwie liczby zespolone: \n";
    cout << "Liczba a1: \n";
    a1.print();
    cout << "Liczba a2: \n";
    a2.print();

    cout << "\nDodaj dwie liczby: \n";
    ComplexNumber a3 = a1 + a2;
    a3.print();

    cout << "\nOdejmij dwie liczby:\n";
    a3 = a1 - a2;
    a3.print();

    cout << "\nPomnoz dwie liczyb:\n";
    a3 = a1 * a2;
    a3.print();

    cout << "\nPodziel dwie liczby:\n";
    a3 = a1/a2;
    a3.print();
}