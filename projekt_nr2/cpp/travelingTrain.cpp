#include "../include/travelingTrain.h"
#include "iostream"

using namespace std;

void Traveling::displayTrain() {
    cout << "Registration number: "<< this->registrationNumber << endl <<
    "Train status: "<< this->trainStatus << endl <<
    "Peron number: "<< this->peronNumber << endl <<
    "From where: "<< this->fromWhere << endl <<
    "To where: "<< this->toWhere << endl <<
    "Arrival time: " << this->arrivalTime.hour << ": "<< this->arrivalTime.min << endl <<
    "Departure time: " << this->departueTime.hour << ": " << this->arrivalTime.min << endl <<
    "Number of wagons: " << this->numberofWagons << endl;
    "Number of seats: " << this->numberOfSeats << endl << endl;
}


