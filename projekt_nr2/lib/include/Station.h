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

    void addTrain(Hotel *newTrain);
    void addTrain(Cargo *newTrain);
    void addTrain(Traveling *newTrain);

    void delTrain(string registrationNumber);

    void editTrainStatus(string registrationNumber, string newTrainStatus);
    void editPeronNumber(string registrationNumber, int newPeronNumber);
    void editArrivalTime(string registrationNumber, time newArrTime);
    void editDepartureTime(string registrationNumber, time newDepTime);
    void editNumberOfWagons(string registrationNumber, int newNoWagons);

    int findTrain(string registrationNumber);
    void findTrainsAfterTime(time arrTime);
    void findTrainsOnPeron(int peronNumber);
    void findTrainsFromWhere(string from, string where);

    void saveTrainsToFile();
    void loadTrainsFromFile();


};

#endif //MATRIXCALC_STATION_H
