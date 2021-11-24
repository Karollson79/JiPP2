#include "include/Figura.h"
#include "iostream"


using namespace std;

int main(){
       Figura *circle = new Circle(5);
       Figura *rectangle = new Rectangle(5, 18);

       cout << "Circle area: " << circle->getArea() << "\n";
       cout << "Rectangle area: " << rectangle->getArea() << "\n";
}

