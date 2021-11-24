//
// Created by student on 26.10.21.
//
#include "iostream"
#include "string"
#include "algorithm"
#include "map"

using namespace std;

struct samochod{
    string marka, model, kolor;
    int rok_produkcji;
};

void count_elememts(samochod *tab, int no_ele){
    map <string, int> pom;
    for(int i = 0; i < no_ele; ++i){
        ++pom[tab[i].marka];
    }
    for(auto c : pom){
        cout << c.first << " = " << c.second << "\n";
    }
}

int main(){
    samochod cars[4] = {{"Audi", "A4", "czarny", 2000}, {"BWM", "E36", "bialy", 2009}, {"Mazda", "6", "czarny", 2010}, {"Mazda", "A8", "srebrny", 2019}};
    count_elememts(cars, 4);
}