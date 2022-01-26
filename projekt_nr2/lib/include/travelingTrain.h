//
// Created by papasmerf on 30.12.2021.
//
#include "Train.h"

using namespace std;

#ifndef RECORDER_TRAVELING_H
#define RECORDER_TRAVELING_H

class Traveling : public Train{
protected:
    int numberOfSeats;
public:
    Traveling();
    Traveling(string, string, int , string, string, time, time, int, int);
    virtual void displayTrain() ;
};
#endif
