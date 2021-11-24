#include "iostream"
#include "math.h"

using namespace std;

class Test {
public:
    Test();
};

Test::Test() {
    cout << "Konstruktor nie zostal wykonany.\n";
}

int main() {
  Test l1;
}