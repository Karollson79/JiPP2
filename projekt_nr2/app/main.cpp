//
// Created by papasmerf on 25.01.2022.
//
#include "../lib/include/Station.h"
#include "iostream"

using namespace std;

int main(int argc, char *argv[]){
    Station myStation;
    myStation.loadTrainsFromFile();
    myStation.findTrainsAfterTime({21,30});
    cout << "kupa";
    return 0;
}

