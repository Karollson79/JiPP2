cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

include_directories(include)

add_library(liblib STATIC src/Train.cpp src/Station.cpp src/cargoTrain.cpp src/hotelTrain.cpp src/travelingTrain.cpp)
