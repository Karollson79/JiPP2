#include "iostream"
#include "math.h"

using namespace std;

class Test {
    int *tab;
public:
    Test();
    ~Test();
    void pause();
};

Test::Test() {
    tab = new int [1024];
}

Test::~Test() {
    cout << "\nSiema.";
    delete [] tab;
}

void Test::pause(){
    system("PAUSE");
}

int main() {
  Test l1;
  l1.pause();
  cout << "Program zajmuje " << sizeof(l1) << " bajty.";
}