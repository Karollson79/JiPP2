#include "../include/Train.h"
#include "iostream"

using namespace std;

string Train::getRegistrationNumber() const{
    return registrationNumber;
}

int Train::getPeronNumber() const {
    return peronNumber;
}

time Train::getArrTime() const {
    return arrivalTime;
}

string Train::getFromWhere() const {
    return fromWhere;
}

string Train::getToWhere() const {
    return toWhere;
}

void Train::setTrainStatus(const string &newTrainStatus) {
    this->trainStatus = newTrainStatus;
}

void Train::setArrivalTime(const time &changeArrivalTime) {
    this->arrivalTime = changeArrivalTime;
}

void Train::setDepartureTime(const time &changeDepartureTime) {
    this->departueTime = changeDepartureTime;
}

void Train::setFromWhere(const string &changeArrival) {
    this->fromWhere = changeArrival;
}

void Train::setToWhere(const string &changeDeparture) {
    this->toWhere = changeDeparture;
}

void Train::setNumberOfWagons(const int &newNumberOfWagons) {
    this->numberofWagons = newNumberOfWagons;
}

void Train::setRegistrationNumber(const string &newRegistrationNumber) {
    this->registrationNumber = newRegistrationNumber;
}

void Train::setPeronNumber(const int &newPeronNumber) {
    this->peronNumber = newPeronNumber;
}
/*

Train::Train() :registrationNumber("not known"), trainStatus("not known"), peronNumber(0), fromWhere("not known"), toWhere("not known"),
                arrivalTime({0,0}), departueTime({0,0}), numberofWagons(0) {
}

Train::Train(string regNumber, string trStat, int perNum, string froWh, string toWh, time arrTime, time depTime, int numOfWag) :registrationNumber(regNumber),
                trainStatus(trStat), peronNumber(perNum), fromWhere(froWh), toWhere(toWh),
                arrivalTime(arrTime), departueTime(depTime), numberofWagons(numOfWag) {
}

    ostream & Train::operator<<(ostream &lhs, const Train &rhs) {
    return lhs << "Registration number: "<< rhs.registrationNumber << endl <<
    "Train status: "<< rhs.trainStatus << endl <<
    "Peron number: "<< rhs.peronNumber<< endl <<
    "From where: "<< rhs.fromWhere<< endl <<
    "To where: "<< rhs.toWhere<< endl <<
    "Arrival time: " << rhs.arrivalTime.hour << ": "<< rhs.arrivalTime.min << endl <<
    "Departure time: " << rhs.departueTime.hour << ": " << rhs.arrivalTime.min << endl <<
    "Number of wagons: " << rhs.numberofWagons << endl << endl;
}

*/



