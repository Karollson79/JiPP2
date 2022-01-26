//
// Created by papasmerf on 30.12.2021.
//
#include "Train.h"

using namespace std;

#ifndef RECORDER_HOTEL_H
#define RECORDER_HOTEL_H

class Hotel : public Train{
protected:
    int numberOfSeats;
    string hotelClass;
public:
    Hotel();
    Hotel(string, string, int , string, string, time, time, int, int, string);
    virtual void displayTrain() const;
};
#endif //RECORDER_CARGO_H
