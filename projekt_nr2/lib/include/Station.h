//
// Created by papasmerf on 25.01.2022.
//
#include <string>
#include <vector>
#include "Train.h"
#include "cargoTrain.h"
#include "hotelTrain.h"
#include "travelingTrain.h"



#ifndef RECORDER_STATION_H
#define RECORDER_STATION_H

class Station{
protected:
    vector <Train *> trains;

public:
    Station();
    ~Station();

    void addTrain(string regNum, string trStat, int perNum, string frWh, string toWh, time arrTim, time depTim, int noWag, int noSea, string classHott);
    void addTrain(string regNum, string trStat, int perNum, string frWh, string toWh, time arrTim, time depTim, int noWag, string whatTransp);
    void addTrain(string regNum, string trStat, int perNum, string frWh, string toWh, time arrTim, time depTim, int noWag, int noSeats);

    void delTrain(string registrationNumber);

    void editTrainStatus(string registrationNumber, string newTrainStatus);

    int findTrain(string registrationNumber);
    void findTrainByRegNumber(string registrationNumber);
    void findTrainsAfterTime(time arrTime);
    void findTrainsOnPeron(int peronNumber);
    void findTrainsFromWhere(string from, string where);
    void displayTrains();

    void loadTrainsFromFile();

};

#endif //MATRIXCALC_STATION_H
