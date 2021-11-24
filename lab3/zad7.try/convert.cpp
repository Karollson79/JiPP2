#include "iostream"
#include "cstdlib"
#include "ctype.h"
#include "string"

using namespace std;

int convert(string num){
    if(num.size() > 10){
        throw "Wprowadzona liczba jest za duza!";
    }
    long long k = stoll(num);
    long long ans = k;
    if(k > INT_MAX){
        throw "Wprowadzona liczba jest za duza!";
    }
    int c = 0;
    while(k != 0){
        k/=10;
        ++c;
    }
    if(c != num.size()){
        throw "Wprowdzony ciag zawiera nieodpowiednie znaki!";
    }
    return (int)ans;
}

int main() {
    try{
        cout << convert("223432141234324123534252345234523453425234532453253243");
    }
    catch (const char *msg){
        cout << msg;
    }
}