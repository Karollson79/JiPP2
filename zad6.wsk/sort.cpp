#include "iostream"

using namespace std;

void sort(int *a, int *b) {
    if (*a < *b) {
        cout << "1. " << *a << "\n2. " << *b;
    } else {
        cout << "1. " << *b << "\n2. " << *a;
    }
}

int main() {
    int a{3};
    int b{4};

    sort(&a, &b);
}