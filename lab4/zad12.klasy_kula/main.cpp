#include "iostream"
#include "math.h"

using namespace std;

class Kula{
public:
    double pole;

    double obj_kuli(){
        return 0.33333*sqrt(pole/(4*3.14))*pole;
    }
};

int main(){
    Kula k1 {3};
    cout << k1.obj_kuli();
}

