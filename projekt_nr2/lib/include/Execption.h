//
// Created by papasmerf on 26.01.2022.
//

#ifndef TRAINSTATION_EXECPTION_H
#define TRAINSTATION_EXECPTION_H

#include <exception>
#include "string"
#include "iostream"

using namespace std;

class MyException: public exception {
private:
    string exceptionText;

public:
    MyException (string exceptionText): exceptionText(exceptionText){}
    friend ostream& operator<<(ostream& os, const MyException& e){
        os << e.exceptionText;
        return os;
    }
};

#endif //TRAINSTATION_EXECPTION_H
