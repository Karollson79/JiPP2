#include "iostream"

using namespace std;

void tab_pos(int *tab){
    for(int i = 0; i < 10; ++i, ++tab){
        cout << *tab << " ";
    }
}

int main(){
    int tab[10]{2,3,4,5,6,7,3,4,5,3};
    tab_pos(tab);
}