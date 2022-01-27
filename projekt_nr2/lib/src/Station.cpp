//
// Created by papasmerf on 25.01.2022.
//
#include "../include/Station.h"
#include "iostream"
#include "string"
#include "sstream"
#include "fstream"

using namespace std;

/*
 * @brief constructor
 */

Station::Station() {
    cout << "tutaj konstruktor!\n";
}

/*
 * @brief destructor
 */

Station::~Station() {
    cout << "tutaj destruktor!\n";
}

/*
 * @brief add Cargo train to the vector trains
 * @parm train which will be add
 */

void Station::addTrain(string regNum, string trStat, int perNum, string frWh, string toWh, time arrTim, time depTim,
                       int noWag, string whatTransp) {
    this->trains.push_back(new Cargo(regNum, trStat, perNum, frWh, toWh, arrTim, depTim, noWag, whatTransp));
}

/*
 * @brief add Hotel train to the vector trains
 * @param train which will be add
 */

void Station::addTrain(string regNum, string trStat, int perNum, string frWh, string toWh, time arrTim, time depTim,
                       int noWag, int noSea, string classHott) {
    trains.push_back(new Hotel(regNum, trStat, perNum, frWh, toWh, arrTim, depTim, noWag, noSea, classHott));
}
/*
 * @brief add Traveling train to the vector of trains
 * @param train which will be add
 */

void Station::addTrain(string regNum, string trStat, int perNum, string frWh, string toWh, time arrTim, time depTim,
                       int noWag, int noSeats) {
    trains.push_back(new Traveling(regNum, trStat, perNum, frWh, toWh, arrTim, depTim, noWag, noSeats));
}
/*
 *  @brief finds train by registration number
 *  @returns index if found or -1 if not
 *  @param registrationNumber input registration number
 */

int Station::findTrain(string registrationNumber) {
    int pos = 0;
    for(auto train : trains){
        if(train->getRegistrationNumber() == registrationNumber)
            return pos;
        ++pos;
    }
    return -1;
}

/*
 * @brief delete train with given registration number
 * @param registration number
 */

void Station::delTrain(string registrationNumber) {
        const int position = Station::findTrain(registrationNumber);
        if(position != -1){
            trains.erase(trains.begin() + position);
        }else
            cout << "we cant find that train!\n";

}

/*
 * @brief edits train status
 * @param registration number
 * @param new status train
 */

void Station::editTrainStatus(string registrationNumber, string newTrainStatus) {
    int pos = findTrain(registrationNumber);
    if(pos != -1){
        trains[pos]-> setTrainStatus(newTrainStatus);
    }else
        cout << "we cant find that train!\n";
}
/*
/*
 * @brief finds all trains that come after or equal give time
 * @param arrival time
 */

void Station::findTrainsAfterTime(time arrTime) {
    bool ifFound = false;
    for(auto train : trains){
        time arrivalTime = train->getArrTime();
        if(arrivalTime.hour > arrTime.hour){
            ifFound = true;
            train->displayTrain();
        }else if(arrivalTime.hour == arrTime.hour && arrivalTime.min >= arrTime.min){
            ifFound = true;
            train->displayTrain();
        }
    }

    if(!ifFound){
        cout << "Sorry, we havent found any trains by this time :(\n";
    }
}

/*
 * @brief finds trains on given peron
 * @param number of peron
 */

void Station::findTrainsOnPeron(int peronNumber) {
    bool ifFound = false;
    for(auto train : trains){
        if(peronNumber == train->getPeronNumber()){
            ifFound = true;
            train->displayTrain();
        }
    }

    if(!ifFound){
        cout << "Sorry, we havent found any trains on this peron :(\n";
    }
}

/*
 * @brief finds trains which are going from given place to given place
 * @param from where
 * @param to where
 */

void Station::findTrainsFromWhere(string from, string where) {
    bool ifFound = false;
    for(auto train : trains){
        if(train->getFromWhere() == from && train->getToWhere() == where){
            ifFound = true;
            train->displayTrain();
        }
    }

    if(!ifFound){
        cout << "Sorry, we havent found any trains that fits for you :(";
    }
}

void Station::loadTrainsFromFile() {
    ifstream input("../../trainData.csv");
    if(input.is_open()){
        string line;
        while(getline(input, line)){
            stringstream linestream(line);
            string type;
            string value;
            getline(linestream, type, ';');

            if(type == "Cargo"){

                string regNum, trainStat, fromW, toW, whatTransp;
                int perNum, numOfWag;
                time arrTi, depTime;

                getline(linestream, regNum,';');
                getline(linestream, trainStat,';');
                getline(linestream, value, ';');
                perNum = stoi(value);
                getline(linestream, fromW, ';');
                getline(linestream, toW, ';');
                getline(linestream, value, ';');
                arrTi.hour = stoi(value);
                getline(linestream, value, ';');
                arrTi.min = stoi(value);
                getline(linestream, value, ';');
                depTime.hour = stoi(value);
                getline(linestream, value, ';');
                depTime.min = stoi(value);
                getline(linestream, value, ';');
                numOfWag = stoi(value);
                getline(linestream, whatTransp, ';');

                this->trains.push_back(new Cargo(regNum, trainStat, perNum, fromW, toW, arrTi, depTime, numOfWag, whatTransp));
            }else if(type == "Traveling"){

                string regNum, trainStat, fromW, toW;
                int perNum, numOfWag, numOfSeats;
                time arrTi, depTime;

                getline(linestream, regNum,';');
                getline(linestream, trainStat,';');
                getline(linestream, value, ';');
                perNum = stoi(value);
                getline(linestream, fromW, ';');
                getline(linestream, toW, ';');
                getline(linestream, value, ';');
                arrTi.hour = stoi(value);
                getline(linestream, value, ';');
                arrTi.min = stoi(value);
                getline(linestream, value, ';');
                depTime.hour = stoi(value);
                getline(linestream, value, ';');
                depTime.min = stoi(value);
                getline(linestream, value, ';');
                numOfWag = stoi(value);
                getline(linestream, value, ';');
                numOfSeats = stoi(value);

                this->trains.push_back(new Traveling(regNum, trainStat, perNum, fromW, toW, arrTi, depTime, numOfWag, numOfSeats));
            }else{

                string regNum, trainStat, fromW, toW, hotClass;
                int perNum, numOfWag, numOfSeats;
                time arrTi, depTime;

                getline(linestream, regNum,';');
                getline(linestream, trainStat,';');
                getline(linestream, value, ';');
                perNum = stoi(value);
                getline(linestream, fromW, ';');
                getline(linestream, toW, ';');
                getline(linestream, value, ';');
                arrTi.hour = stoi(value);
                getline(linestream, value, ';');
                arrTi.min = stoi(value);
                getline(linestream, value, ';');
                depTime.hour = stoi(value);
                getline(linestream, value, ';');
                depTime.min = stoi(value);
                getline(linestream, value, ';');
                numOfWag = stoi(value);
                getline(linestream, value, ';');
                numOfSeats = stoi(value);
                getline(linestream, hotClass, ';');

                this->trains.push_back(new Hotel(regNum, trainStat, perNum, fromW, toW, arrTi, depTime, numOfWag, numOfSeats, hotClass));
            }
        }
    }else{
        cout << "ERROR: cant open file!\n";
    }
    input.close();
}



void Station::displayTrains() {
    for(auto train : trains){
        train->displayTrain();
    }
}

void Station::findTrainByRegNumber(string registrationNumber) {
    int pos = findTrain(registrationNumber);
    if(pos != -1){
        this->trains[pos]->displayTrain();
    }else{
        cout << "we cant find that train!\n";
    }
}
