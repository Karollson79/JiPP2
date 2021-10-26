#include "iostream"

using namespace std;

class FunkcjaKwadratowa{
public:
    int a, b, c;

    void wyswietl_funckje(){
        cout << "f(x) = " << a << "x^2 + "<< b << "x + " << c;
    }
};

int main(){
    FunkcjaKwadratowa f1 {4, 3, 6};
    f1.wyswietl_funckje();
}

