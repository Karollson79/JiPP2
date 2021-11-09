//
// Created by cinamon on 09.11.2021.
//

#include "Pojazd.h"

using namespace std;

Pojazd::Pojazd(string nr_rej, string nazw, int ilosc, string marka, string typ) {
    this->numer_rejestracyjny = nr_rej;
    this->nazwa = nazw;
    this->ilosc_miejsc = ilosc;
    this->marka = marka;
    this->typ = typ;
    this->pasazerowie = new string[ilosc];

    for(int i = 0; i < ilosc; ++i){
        pasazerowie[i] = "puste";
    }
}

Pojazd::Pojazd(Pojazd &pojazd) {
    this->numer_rejestracyjny = pojazd.numer_rejestracyjny;
    this->nazwa = pojazd.nazwa;
    this->ilosc_miejsc = pojazd.ilosc_miejsc;
    this->marka = pojazd.marka;
    this->typ = pojazd.typ;
    this->pasazerowie = new string[this->ilosc_miejsc];

    for(int i = 0; i < this->ilosc_miejsc; ++i){
        this->pasazerowie[i] = pojazd.pasazerowie[i];
    }
}

Pojazd::~Pojazd() {
    delete pasazerowie;
}

void Pojazd::wypiszPojazd() {
    cout << "numer rejestracyjny: " << this->numer_rejestracyjny << endl;
    cout << "nazwa: " << this->nazwa << endl;
    cout << "ilosc miejsc: " << this->ilosc_miejsc << endl;
    cout << "pasazerowie: \n";
    for(int i = 0; i < this->ilosc_miejsc; ++i){
        cout << i + 1 << ". " << this->pasazerowie[i] << "\n";
    }
    cout << "marka: " << this->marka;
    cout << "typ: " << this->typ;
}

void Pojazd::zmienPasazera(int num, string pasazer) {
    this->pasazerowie[num + 1] = pasazer;
}

string Pojazd::getNazwa() {
    return this->nazwa;
}

string Pojazd::getNumerRejestracyjny() {
    return this->numer_rejestracyjny;
}

string Pojazd::getMarka() {
    return this->marka;
}

string Pojazd::getTyp() {
    return this->typ;
}

void Pojazd::setNazwa(string nazwa) {
    this->nazwa = nazwa;
}

void Pojazd::setNumerRejestracyjny(string nr_rejestracyjny) {
    this->numer_rejestracyjny = nr_rejestracyjny;
}