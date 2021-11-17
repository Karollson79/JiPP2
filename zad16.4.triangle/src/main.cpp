//
// Created by papasmerf on 17.11.2021.
//

#include "../include/Triangle.h"
#include "iostream"

int main(){
    Node a, b(5,8), c(1, 16);
    Triangle triangle(a, b, c, "First Triangle");

    triangle.display();
    cout << triangle << endl;
    cout << "Distance between first and second point is " << triangle.distance(0,1) << endl;

    showTriangleData(triangle);

}