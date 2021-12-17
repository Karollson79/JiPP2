//
// Created by papasmerf on 06.12.2021.
//
#include <iostream>
#include "string"
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector <char> tab = {'a', 'b', 'c', 'd', 'e'};
    vector <char>::iterator k;
    for(k = tab.begin(); k != tab.end(); k++){
        *k = toupper(*k);
    }
    for(auto c : tab)
        cout << c << " ";
}

