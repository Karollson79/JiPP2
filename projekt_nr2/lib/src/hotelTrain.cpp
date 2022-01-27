#include "../include/hotelTrain.h"
#include "iostream"

using namespace std;


Hotel::Hotel(): numberOfSeats(0), hotelClass("not known"){
    registrationNumber = "not known";
    trainStatus = "not known";
    peronNumber = 0;
    fromWhere = "not known";
    toWhere = "not known";
    arrivalTime = {0,0};
    departueTime = {0,0};
    numberofWagons = 0;
}

Hotel::Hotel(string regNumber, string trStat, int perNum, string froWh, string toWh, time arrTime, time depTime, int numOfWag, int noSeats, string hotClas){
    registrationNumber = regNumber;
    trainStatus = trStat;
    peronNumber = perNum;
    fromWhere = froWh;
    toWhere = toWh;
    arrivalTime = arrTime;
    departueTime = depTime;
    numberofWagons = numOfWag;
    numberOfSeats = noSeats;
    hotelClass = hotClas;
}

void Hotel::displayTrain() {
    cout << "Registration number: "<< this->registrationNumber << endl <<
    "Train status: "<< this->trainStatus << endl <<
    "Peron number: "<< this->peronNumber << endl <<
    "From where: "<< this->fromWhere << endl <<
    "To where: "<< this->toWhere << endl <<
    "Arrival time: " << this->arrivalTime.hour << ": "<< this->arrivalTime.min << endl <<
    "Departure time: " << this->departueTime.hour << ": " << this->arrivalTime.min << endl <<
    "Number of wagons: " << this->numberofWagons << endl<<
    "Number of seats: " << this->numberOfSeats << endl<<
    "Hotel class: " << this->hotelClass << endl << endl;
}

bool Hotel::operator>=(const time &rhs) const {
    if(this->getDepTime().hour >= rhs.hour)
        return true;
    else if(this->getDepTime().hour == rhs.hour && this->getDepTime().min >= rhs.min)
        return true;
    return false;
}


