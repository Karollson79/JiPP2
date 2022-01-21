//
// Created by papasmerf on 21.01.2022.
//
#include <string>
#include <vector>
#include "Train.h"

using namespace std

#ifndef MATRIXCALC_STATION_H
#define MATRIXCALC_STATION_H

class Station{
protected:
    vector <Train *> trains;

public:
    void addTrain();
    void delTrain();
    void editTrainStatus();
    void editTrainData();
    void findTrain();
    void saveTrains();
    void loadTrains();
};
#endif //MATRIXCALC_STATION_H
