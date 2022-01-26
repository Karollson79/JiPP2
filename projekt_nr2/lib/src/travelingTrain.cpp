#include "../include/travelingTrain.h"
#include "iostream"

using namespace std;


Traveling::Traveling(): numberOfSeats(0){
    registrationNumber = "not known";
    trainStatus = "not known";
    peronNumber = 0;
    fromWhere = "not known";
    toWhere = "not known";
    arrivalTime = {0,0};
    departueTime = {0,0};
    numberofWagons = 0;
}

Traveling::Traveling(string regNumber, string trStat, int perNum, string froWh, string toWh, time arrTime, time depTime, int numOfWag, int noSeats){
    registrationNumber = regNumber;
    trainStatus = trStat;
    peronNumber = perNum;
    fromWhere = froWh;
    toWhere = toWh;
    arrivalTime = arrTime;
    departueTime = depTime;
    numberofWagons = numOfWag;
    numberOfSeats = noSeats;
}

void Traveling::displayTrain() const{
    cout << "Registration number: "<< this->registrationNumber << endl <<
    "Train status: "<< this->trainStatus << endl <<
    "Peron number: "<< this->peronNumber << endl <<
    "From where: "<< this->fromWhere << endl <<
    "To where: "<< this->toWhere << endl <<
    "Arrival time: " << this->arrivalTime.hour << ": "<< this->arrivalTime.min << endl <<
    "Departure time: " << this->departueTime.hour << ": " << this->arrivalTime.min << endl <<
    "Number of wagons: " << this->numberofWagons << endl <<
    "Number of seats: " << this->numberOfSeats << endl << endl;
}


