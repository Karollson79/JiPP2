#include "iostream"

using namespace std;

int main(){
    auto tab2d = new int[2][2];
    int i = 1;
    for(int j = 0; j < 2; ++j){
        for(int k = 0; k < 2; ++k) {
            tab2d[j][k] = ++i;
        }
    }
    delete [][] tab2d;
}
