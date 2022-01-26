//
// Created by papasmerf on 29.12.2021.
//
#include <string>

#ifndef RECORDER_TRAIN_H
#define RECORDER_TRAIN_H

using namespace std;

struct time{
    int hour, min;
};

class Train{
protected:
    string registrationNumber;
    string trainStatus;
    int peronNumber;
    string fromWhere;
    string toWhere;
    time arrivalTime;
    time departueTime;
    int numberofWagons;

public:
//    virtual Train() = 0;
//    virtual Train(string, string, int , string, string, time, time, int) = 0;
//    virtual ~Train() = 0;
    virtual void displayTrain() = 0;
    string getRegistrationNumber() const;
    time getArrTime() const;
    int getPeronNumber() const;
    string getFromWhere() const;
    string getToWhere() const;

    void setRegistrationNumber(const string &newRegistrationNumber);
    void setTrainStatus(const string &newTrainStatus);
    void setPeronNumber(const int &newPeronNumber);
    void setFromWhere(const string &changeArrival);
    void setToWhere(const string &changeDeparture);
    void setArrivalTime(const time &changeArrivalTime);
    void setDepartureTime(const time &changeDepartureTime);
    void setNumberOfWagons(const int &newNumberOfWagons);

};

#endif
