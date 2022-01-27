//
// Created by papasmerf on 30.12.2021.
//
#include "Train.h"

using namespace std;

#ifndef RECORDER_CARGO_H
#define RECORDER_CARGO_H

class Cargo : public Train{
protected:
    string whatTransporting;
public:
    Cargo();
    Cargo(string, string, int , string, string, time, time, int, string);
    virtual void displayTrain();
    virtual bool operator>=(const time &rhs)const;
};
#endif //RECORDER_CARGO_H
