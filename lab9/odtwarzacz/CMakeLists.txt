cmake_minimum_required(VERSION 3.16)

project(recorder)

add_executable(recorder main.cpp src/Recorder.cpp include/Recorder.h src/Song.cpp include/Song.h)
