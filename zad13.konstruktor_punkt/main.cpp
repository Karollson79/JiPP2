#include "iostream"
#include "math.h"

using namespace std;

class Punkt{
public:
    int x1, y1;
    int x2, y2;
    Punkt(int x1, int y1, int x2, int y2);

    int odleglosc(){
        return sqrt(((x2 - x1)*(x2 - x1) + (y2-y1)*(y2 - y1)));
    }
};

Punkt::Punkt(int w_x, int w_y, int w_x2, int w_y2)
        :x1(w_x), y1(w_y), x2(w_x2), y2(w_y2)
{
}

int main(){
    Punkt a(1, 2, 4, 4);
    cout << a.odleglosc();
}