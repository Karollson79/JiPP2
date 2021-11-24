#include "iostream"
#include "math.h"

using namespace std;

class Test {
    int *tab;
public:
    Test();
};

Test::Test() {
    tab = new int[1024];
}

int main() {
  Test l1;
}