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
        Pojazd nr1("aaa", "bbb", 4, "ccc", "ddd");

        cout << "\nInitial values: \n\n";
        nr1.wypiszPojazd();

        cout << "\nCopy element: \n\n";
        Pojazd nr2(nr1);
        nr2.wypiszPojazd();

        // update car name and number

        nr2.setNumerRejestracyjny("KNT2345");
        nr2.setNazwa("samochod");
        nr2.zmienPasazera(3, "wojtek");

        // cout updated values

        cout << "\nUpdated values: \n\n";
        nr2.wypiszPojazd();

        // cout name, register number, name, type

        cout << "\nname: " << nr2.getNazwa() << endl;
        cout << "nr_rej: " << nr2.getNumerRejestracyjny() << endl;
        cout << "type: " << nr2.getTyp() << endl;
        cout << "car type: " << nr2.getMarka() << endl;
    }

    cout << "\nEnd program" << endl;
    return 0;
}