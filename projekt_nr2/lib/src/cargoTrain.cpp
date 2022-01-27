//
// Created by papasmerf on 21.01.2022.
//
#include "../include/cargoTrain.h"
#include "iostream"

using namespace std;

Cargo::Cargo(): whatTransporting("not known") {
    registrationNumber = "not known";
    trainStatus = "not known";
    peronNumber = 0;
    fromWhere = "not known";
    toWhere = "not known";
    arrivalTime = {0,0};
    departueTime = {0,0};
    numberofWagons = 0;
}

Cargo::Cargo(string regNumber, string trStat, int perNum, string froWh, string toWh, time arrTime, time depTime, int numOfWag, string whatTransp){
    registrationNumber = regNumber;
    trainStatus = trStat;
    peronNumber = perNum;
    fromWhere = froWh;
    toWhere = toWh;
    arrivalTime = arrTime;
    departueTime = depTime;
    numberofWagons = numOfWag;
    whatTransporting = whatTransp;
}

void Cargo::displayTrain() {
    cout << "Registration number: "<< this->registrationNumber << endl <<
         "Train status: "<< this->trainStatus << endl <<
         "Peron number: "<< this->peronNumber << endl <<
         "From where: "<< this->fromWhere << endl <<
         "To where: "<< this->toWhere << endl <<
         "Arrival time: " << this->arrivalTime.hour << ": "<< this->arrivalTime.min << endl <<
         "Departure time: " << this->departueTime.hour << ": " << this->arrivalTime.min << endl <<
         "Number of wagons: " << this->numberofWagons << endl <<
         "What is transporting: " << this->whatTransporting << endl << endl;
}




