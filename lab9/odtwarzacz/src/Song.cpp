#include "../include/Song.h"
#include "iostream"
#include "string"

using namespace std;

Song::Song(int idSong, string nameSong, int timeSong):songID(idSong), songName(nameSong), songTime(timeSong) {}

void Song::printSong() {
    cout << "song ID: " << this->songID;
    cout << "\nsong name: " << this->songName;
    cout << "\nsong time: " << this->songTime;
    cout << "\n\n";
}


