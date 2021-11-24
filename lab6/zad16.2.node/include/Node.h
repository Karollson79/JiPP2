//
// Created by cinamon on 16.11.2021.
//

#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();
    friend double pointsDistance(Node, Node);
    void updateValue(double x, double y);
};

double pointsDistance(Node a, Node b);
#endif //JIPP2_NODE_H
