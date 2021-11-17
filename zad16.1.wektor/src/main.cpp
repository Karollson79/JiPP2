//
// Created by cinamon on 16.11.2021.
//

#include "../include/wektor.h"
#include "iostream"

using namespace std;

int main(){
    Vector a1(2, 1), a2(1,2);
    cout << "Wypisz obydwa wektory: \n\n";

    cout << a2 << "\n";
    cout << a2 << "\n";

    cout << "Dlugosci wektorow: \n\n";

    cout << a1.length() << endl;
    cout << a2.length() << endl;

    cout << "Dodawanie wektorow; \n\n";

    Vector a3 = a1 + a2;
    a3.print();

    cout << "Odejmowanie wektorow:\n\n";

    a3 = a1 - a2;
    a3.print();

    cout << "Mnozenie przez skalar:\n\n";

    a3 = a3 * 2.3;
    a3.print();
    a3 = 2.3 * a3;
    a3.print();
    cout << "Iloczyn skalarny: \n\n";

    a3 = a1^a2;
    a3.print();

    cout << "Porownywanie wektorow:\n\n";

    cout << "Czy wektor a1 == a2? \n";
    if(a1 == a2)
        cout << "True\n";
    else
        cout << "False\n";
    cout << "Czy wektor a1 == a3?\n";
    if(a1 == a3)
        cout << "True\n";
    else
        cout << "False\n";

    cout << "Otrzymywanie wektora przeciwnego: \n\n";

    a1.print();
    a1 = ~a1;
    a1.print();
}