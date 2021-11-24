//
// Created by student on 26.10.21.
//
#include "iostream"
#include "string"

using namespace std;

struct samochod{
    string marka, model, kolor;
    int rok_produkcji;
};

int main(){
    samochod cars[4] = {{"Audi", "A4", "czarny", 2000}, {"Audi", "A7", "bialy", 2009}, {"Audi", "A6", "czarny", 2010}, {"Audi", "A8", "srebrny", 2019}};
    for(int i = 0; i < 4; ++i)
        cout << cars[i].marka <<"\t"<< cars[i].model <<"\t" << cars[i].kolor <<"\t\t"<<cars[i].rok_produkcji<< "\n";
}