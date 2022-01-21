//
// Created by papasmerf on 30.12.2021.
//
#include "Train.h"

using namespace std;

#ifndef RECORDER_CARGO_H
#define RECORDER_CARGO_H

class Traveling : public Train{
protected:
    int numberOfSeats;
public:
    virtual void displayTrain();
};
#endif //RECORDER_CARGO_H
