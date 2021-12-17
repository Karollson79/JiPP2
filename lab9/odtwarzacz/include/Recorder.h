//
// Created by papasmerf on 07.12.2021.
//
#include <list>
#include <Song.h>
#include <boost/circular_buffer.hpp>

#ifndef ZAMIANA_RECORDER_H
#define ZAMIANA_RECORDER_H

class Recorder{
    boost::circular_buffer_space<Song> cb(100);
public:
    void addSong(Song song);
    void remSong(string name);
    void printAll();
    void printNext();
    void printBefr();
};

#endif //ZAMIANA_RECORDER_H
