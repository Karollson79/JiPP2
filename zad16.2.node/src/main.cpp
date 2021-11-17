//
// Created by cinamon on 16.11.2021.
//

#include "../include/Node.h"
#include "iostream"

using namespace std;

int main(){
    Node a1(0, 0), a2(0, 4);
    a1.display();
    a2.display();

    cout << "odleglosc miedzy punktem a1 i a2: " << pointsDistance(a1, a2);
}