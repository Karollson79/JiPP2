#include <iostream>
#include "Point.h"
#include "Pojazd.h"

using namespace std;

class TestClass {
private:
    const int t = 0;

public:
    TestClass(const int t) : t(t) {
    }
};

int main() {
    {
        Point p1("P1"), p2(5, 5, "P2");

        cout << "Initial values" << endl;
        p1.printData();
        p2.printData();

        cout << endl << "Create copy of point" << endl;
        Point p1c = p1, p2c = p2;
        //Update copied points names
        p1c.setName("P1c");
        p2c.setName("P2c");

        cout << "Values after copying" << endl;
        p1.printData();
        p2.printData();
        p1c.printData();
        p2c.printData();

        cout << endl << "Update P1 and P2 x and y (increase 10)" << endl;
        p1.setX(10);
        p1.setY(10);
        p2.setX(15);
        p2.setY(15);

        cout << "Values after update values" << endl;
        p1.printData();
        p2.printData();
        p1c.printData();
        p2c.printData();
    }

    {
        Pojazd nr1("jeden", "dwa", 4, "trzy", "cztery");
        Pojazd nr2("jeden", "dwa", 5, "trzy", "cztery");
        nr1.wypiszPojazd();
        cout << "\n";
        nr2.wypiszPojazd();
    }

    cout << "End program" << endl;


    return 0;
}