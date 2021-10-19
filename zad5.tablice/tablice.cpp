#include <iostream>
#include <cstdlib>

using namespace std;

int random(int a, int b){
    return rand()%(b - a  + 1) + a;
}

int max_tab(int *tab){
    int max = tab[0];
    for(int i = 1; i < sizeof(tab)/4; ++i){
        if(tab[i] > max)
            max = tab[i];
    }
    return max;
}

void reverse(int *tab){
    int size = sizeof(tab)/4;
    int last = size - 1;
    int pom;
    for(int i = 0; i < size/2; ++i, --last) {
        pom = tab[i];
        tab[i] = tab[last];
        tab[last] = pom;
    }
}

int main(){

    int *tab;
    tab = new int [10];
    cout << "wylosowano liczbe z przedzialu 5 do 10: "<< random(5, 10)<< "\n";
    for(int i = 0; i < 10; ++i){
        tab[i] = random(1, 100);
    }
    for(int i = 0; i < 10; ++i){
        cout << tab[i] << " ";
    }
    reverse(tab);
    cout << "\n";
    for(int i = 0; i < 10; ++i){
        cout << tab[i] << " ";
    }
    cout << "najwieksza wartosc tablicy to: " << max_tab(tab);
}
