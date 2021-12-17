//
// Created by papasmerf on 13.12.2021.
//
#include "iostream"
#include "include/Recorder.h"

using namespace std;

int main(){
    Recorder a;

    a.addSong();
    a.addSong();

    a.printCurSong();
    a.nextSong();
    a.printCurSong();
    a.nextSong();
    a.printCurSong();


    a.printSongs();
}

