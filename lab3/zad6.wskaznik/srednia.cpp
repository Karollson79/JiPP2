#include "stdio.h"
#include "iostream"

using namespace std;

void sr(int *a, int *b, int *sr){
    *sr = (*a)*(*b);
}

int main(){
    int a = 20;
    int b = 10;
    int sre;
    sr(&a, &b, &sre);
    cout << sr;
}
