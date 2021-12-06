cmake_minimum_required(VERSION 3.16)

project(KlasaAbstrakcyjna)

include_directories(include)

add_executable(src/main.cpp src/Note.cpp include/Note.h)