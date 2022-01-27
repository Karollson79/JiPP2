//
// Created by papasmerf on 26.01.2022.
//

#ifndef TRAINSTATION_EXECPTION_H
#define TRAINSTATION_EXECPTION_H

#include <exception>
#include "string"

using namespace std;

class MyException: public exception {
private:
    string exceptionText;

public:
    MyException (string exceptionText): exceptionText(exceptionText){}

    const string what(){
        return exceptionText;
    }
};

#endif //TRAINSTATION_EXECPTION_H
