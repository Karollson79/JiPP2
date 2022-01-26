cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

include_directories(../lib/include)

add_executable(app main.cpp)

target_link_libraries(app liblib)
