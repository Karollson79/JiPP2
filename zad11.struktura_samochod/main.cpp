//
// Created by student on 26.10.21.
//
#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

struct samochod{
    string marka, model, kolor, typ;
    int rok_produkcji;
};

int count_elememts(samochod *tab, int no_ele){
    int ans = tab[0].rok_produkcji;
    for(int i = 1; i < no_ele; ++i){
        ans = min(ans, tab[i].rok_produkcji);
    }
    return ans;
}

int main(){
    samochod cars[4] = {{"Audi", "A4", "czarny", "SUV", 2000}, {"Hyundai", "A7", "bialy", "Kombi", 2009}, {"Audi", "A6", "czarny", "SUV", 2010}, {"Audi", "A8", "srebrny", "SUV", 2019}};
    cout << "indeks najstarszego samochodu: " << count_elememts(cars, 4);
}