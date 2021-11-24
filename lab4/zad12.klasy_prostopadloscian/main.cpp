#include "iostream"
#include "string"

using namespace std;

class Prostopadloscian{
    public:
         int a, b, H;

    int p_powierzchni(){
        return 2*a*b + 2*a*H + 2*b*H;
    }
};

int main(){
    Prostopadloscian p1 = {2,4,4};
    cout << p1.p_powierzchni();
    return 0;
}