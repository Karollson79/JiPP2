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

time Train::getDepTime() const {
    return departueTime;
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




