//
// Created by papasmerf on 10.12.2021.
//
#include "../include/Recorder.h"
#include "iostream"
#include "string"

using namespace std;

void Recorder::addSong() {
    string songN;
    int songT, songId;

    cout << "name of song: ";
    cin >> songN;
    cout << "time of song: ";
    cin >> songT;
    cout << "id of song: ";
    cin >> songId;
    cout << "\n\n";

    songRec.emplace_back(songId, songN, songT);
}

Recorder::Recorder() {
    this->curSong = 0;
}

void Recorder::nextSong() {
    if(curSong != songRec.size() - 1){
        ++curSong;
    }else{
        curSong = 0;
    }
}

void Recorder::prevSong() {
    if(curSong != 0){
        --curSong;
    }else{
        curSong = songRec.size() - 1;
    }
}

void Recorder::delSong() {
    if(curSong == songRec.size() - 1)
        --curSong;

    songRec.pop_back();
}

void Recorder::printCurSong() {
    cout << "Current song:\n";
    //curSong --> what
    int i = 0;
    for(auto x : songRec){
        if(i == curSong)
            x.printSong();
        ++i;
    }
}

void Recorder::printSongs() {
    cout << "ALL SONGS: \n\n";
    for(auto x : songRec)
        x.printSong();
}





