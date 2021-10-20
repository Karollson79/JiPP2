#include "iostream"

using namespace std;

void save(int x, int *w){
    *w = x;
}

int main(){
    int w = 4;
    save(5, &w);
    cout << w;
}