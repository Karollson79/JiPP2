//
// Created by papasmerf on 17.12.2021.
//
#include "string"

#ifndef RECORDER_SONG_H
#define RECORDER_SONG_H

using namespace std;

class Song {
int songID;
string songName;
int songTime;

public:
    Song(int, string, int);
    void printSong();
};

#endif //RECORDER_SONG_H
