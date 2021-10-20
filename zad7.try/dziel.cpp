#include "iostream"

using namespace std;

int divi(int a, int b) {
    if (b == 0) {
        throw "NIE DZIEL PRZEZ 0!";
    } else if (a % b != 0) {
        throw "LICZBY NIE SA PODZIELNE!";
    } else {
        return a / b;
    }
}

int main() {
    int a = 4;
    int b = 3;

    try {
        cout << divi(a, b);
    }
    catch (char const *msg) {
        cout << msg;
    }
}