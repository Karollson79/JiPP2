//
// Created by papasmerf on 25.01.2022.
//
#include "../lib/include/Station.h"
#include "../lib/include/cargoTrain.h"
#include "../lib/include/travelingTrain.h"
#include "../lib/include/hotelTrain.h"
#include "../include/Execption.h"

#include "iostream"
#include "string"

using namespace std;

void myMenu(){
    cout << "Welcome to Station Controller!" << endl;
    cout << "-------------------------------------------------";
    cout << endl;
    cout << "1 - display all trains on station" << endl;
    cout << "2 - find train by registration number"<< endl;
    cout << "3 - edit train status" << endl;
    cout << "4 - find trains after time" << endl;
    cout << "5 - find trains by peron" << endl;
    cout << "6 - find trains from to given city" << endl;
    cout << "7 - delete train" << endl;
    cout << "8 - add train" << endl;
    cout << "9 - exit from Station Controller" <<endl;
    cout << "-----------------------------------------------" << endl << endl;
}


int main(int argc, char *argv[]){
    string op = argv[1];
    if(op == "trainStation"){
        try{
            if(argc != 2){
                throw MyException("wrong number of parameters!");
            }
        }
        catch(MyException &e){
            cout << e.what() << endl;
            return 0;
        }
        // main program

        Station myStation;
        myStation.loadTrainsFromFile();

        while(true){
            myMenu();

            int numOfOp = 11;
            try {
                if(!(cin >> numOfOp))
                    throw MyException("wrong option!");
            } catch (MyException &e) {
                cout << e.what() << endl;
                return 0;
            }
            switch(numOfOp){
                case 1:
                    myStation.displayTrains();
                    break;
                case 2: {
                    string regNum;
                    cout << "registration number:\n";
                    try {
                        if (!(cin >> regNum))
                            throw MyException("wrong argument of function!");
                    } catch (MyException &e) {
                        cout << e.what() << endl;
                        return 0;
                    }
                    myStation.findTrainByRegNumber(regNum);
                    break;
                }
                case 3:{
                    string newStatus;
                    string regNumber;
                    cout << "write register number and new status of train:\n";
                    try {
                        if (!(cin >> regNumber >> newStatus))
                            throw MyException("wrong argument of function!");
                    } catch (MyException &e) {
                        cout << e.what() << endl;
                        return 0;
                    }
                    myStation.editTrainStatus(regNumber, newStatus);
                    break;
                }
                case 4:{
                    time arrTime;
                    cout << "hour, min:";
                    try{
                    if(!(cin >> arrTime.hour >> arrTime.min)){
                        throw MyException("wrong arguments!");
                    }}catch (MyException &e){
                        cout << e.what() << endl;
                        return 0;
                    }
                    myStation.findTrainsAfterTime(arrTime);
                    break;
                }
                case 5:{
                    int peron;
                    cout << "peron number:";
                    try{
                        if(!(cin >> peron)){
                            throw MyException("wrong arguments!");
                        }
                    }catch (MyException &e){
                        cout << e.what() << endl;
                        return 0;
                    }
                    myStation.findTrainsOnPeron(peron);
                    break;
                }
                case 6:{
                    string from, to;
                    try{
                        if(!(cin >> from>> to)){
                            throw MyException("wrong arguments!");
                        }
                    }catch (MyException &e){
                        cout << e.what() << endl;
                        return 0;
                    }
                    myStation.findTrainsFromWhere(from, to);
                    break;
                }
                case 7:{
                    string regNum;
                    cout << "registration number:";
                    try{
                        if(!(cin >> regNum)){
                            throw MyException("wrong arguments!");
                        }
                    }catch (MyException &e){
                        cout << e.what() << endl;
                        return 0;
                    }
                    myStation.delTrain(regNum);
                    break;
                }
                case 8:{
                    string regNum, toWh, frWh, trStat;
                    int perNum, numOfWag;
                    time arrTi, depTi;
                    cout << "Type registration number, from where, to where, status of train, peron number\n";
                    cin >> regNum >> frWh >> toWh >> trStat;
                    cout << "Type peron number and number of wagons\n";
                    cin >> perNum >> numOfWag;
                    cout << "Type arrival time:\n";
                    cin >> arrTi.hour >> arrTi.min;
                    cout << "Type departure time: \n";
                    cin >> depTi.hour >> depTi.min;

                    cout << "Select type of train: \n 1 - Cargo 2 - Traveling 3 - Hotel\n";
                    int ope;
                    if(!(cin >> ope)){
                        cout << "error";
                    }
                    switch (ope) {
                        case 1:{
                            string whatTransp;
                            cout << "what is tranporting:";
                            cin >> whatTransp;
                            myStation.addTrain(regNum, trStat, perNum, frWh, toWh, arrTi, depTi, numOfWag, whatTransp);
                            myStation.displayTrains();
                            break;
                        }
                        case 2:{
                            int numOfS;
                            cout << "number of seats:";
                            cin >> numOfS;
                            myStation.addTrain(regNum, trStat, perNum, frWh, toWh, arrTi, depTi, numOfWag, numOfS);
                            break;
                        }
                        case 3:{
                            int numOfS;
                            cout << "write number of seats and class of train:";
                            string classOfTrain;
                            cin >> numOfS;
                            cin >> classOfTrain;
                            myStation.addTrain(regNum, trStat, perNum, frWh, toWh, arrTi, depTi, numOfWag, numOfS, classOfTrain);
                            break;
                        }
                        default:
                            cout << "unknown opertation";
                            return 0;
                    }
                    break;
                }
                case 9:
                    return 0;
                default:
                    cout << "unknown operation!\n";
                    break;
            }
        }

    }else if(op =="notTrainStation"){
        try{
            if(argc != 2){
                throw MyException("wrong number of parameters!");
            }
        }
        catch(MyException &e){
            cout << e.what() << endl;
            return 0;
        }
        cout << "its not right argument! :(";
    }else{
        try{
            if(argc != 2){
                throw MyException("wrong number of parameters!");
            }
        }
        catch(MyException &e){
            cout << e.what() << endl;
            return 0;
        }
        cout << "its also not right argument! :(";
        return 0;
    }
    return 0;
}

