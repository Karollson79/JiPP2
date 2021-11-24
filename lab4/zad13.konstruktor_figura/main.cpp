#include "iostream"
#include "math.h"

using namespace std;

class Figura {
public:
    int ilosc_wierz;
    int *wierz_tab;

    Figura(int);
};

Figura::Figura(int ile)
        : ilosc_wierz(ile), wierz_tab(new int[2 * ile]) {
    for (int i = 0; i < 2 * ile; ++i) {
        cout << "podaj wspolrzedne wierz: ";
        cin >> wierz_tab[i];
    }
}


int main() {
    Figura jeden(3);
    for (int i = 0; i < 6; i+=2) {
        cout << "wsp. " << (i + 2) / 2 << " wierz. x = : " << jeden.wierz_tab[i] << " y = "<< jeden.wierz_tab[i + 1] << "\n";
    }
}