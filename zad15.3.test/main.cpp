//
// Created by papasmerf on 10.11.2021.
//
#include "iostream"

using namespace std;

int main(){

    int cVal = 314;
    const int *p = &cVal;
    //*p = 628; blad kompilatora, nie mozna modyfikowac wartosci
    const int cVal1 = 213;
    p = &cVal1;

   int *const p1 = &cVal;
    const int p2 = 11;
    //p1 = &p2; blad kompilatora, nie mozna modyfikowac wskaznika

    int cVal3 = 123;
    const int* const p3 = &cVal3;
    //*p3 = 23; blad kompilatora, nie mozna modyfikowac wartosci
    //p3 = &cVal; blad kompilatora, nie mozna modyfikowac wskaznika
}
