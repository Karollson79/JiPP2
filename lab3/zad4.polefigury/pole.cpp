#include <iostream>

using  namespace std;

int licz_pole(int a, int b, int h){
    return 0.5*(a+b)*h;
}

int licz_pole(double a, double b){
    return (int)(a*b);
}

int main() {
    cout << "pole trapezu: " << licz_pole(3, 3, 4) << "\n";
    cout << "pole prostokata: " << licz_pole(1.5, 2.5);
}