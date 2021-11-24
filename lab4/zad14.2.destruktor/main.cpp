#include "iostream"
#include "math.h"

using namespace std;

class Test {
    int *tab;
public:
    Test();
    void pause();
};

Test::Test() {
    tab = new int[1024];
}

void Test::pause(){
    system("PAUSE");
}

int main() {
  Test l1;
  l1.pause();
}