//
// Created by student on 26.10.21.
//
#include "iostream"
#include "string"

using namespace std;

struct samochod{
    string marka, model, kolor, typ;
    int rok_produkcji;
};

int main(){
    samochod cars[4] = {{"Audi", "A4", "czarny", "SUV", 2000}, {"Audi", "A7", "bialy", "Kombi", 2009}, {"Audi", "A6", "czarny", "SUV", 2010}, {"Audi", "A8", "srebrny", "SUV", 2019}};
    for(int i = 0; i < 4; ++i)
        cout << cars[i].marka <<"\t"<< cars[i].model <<"\t" << cars[i].kolor <<"\t\t" << cars[i].typ << "\t" << cars[i].rok_produkcji<< "\n";
}