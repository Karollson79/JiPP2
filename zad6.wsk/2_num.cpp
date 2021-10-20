#include <iostream>

using namespace std;

int wsk_sr(int *a, int *b) {
    return (*a + *b) / 2;
}

int main() {
    int a = 4, b = 8;
    int *wsk_a = &a;
    int *wsk_b = &b;
    cout << wsk_sr(wsk_a, wsk_b);
}

