//
// Created by papasmerf on 07.12.2021.
//
#include <list>
#include "../include/Song.h"

#ifndef ZAMIANA_RECORDER_H
#define ZAMIANA_RECORDER_H

class Recorder{
    list<Song> songRec;
    int curSong;
public:
    Recorder();
    void printCurSong();
    void nextSong();
    void prevSong();
    void printSongs();
    void addSong();
    void delSong();
};


#endif //ZAMIANA_RECORDER_H
