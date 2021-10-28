#include "iostream"
#include "../matrixLib/include/lib.h"
#include "cstring"

using namespace std;

int main(int argc, char *argv[]){
    if(!strcmp(argv[1], "addMatrix")){
        if(argc != 2){
            err();
            return 0;
        }
        else{
            int row, col;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            cin >> type;
            cout << "Podaj ilosc kolumn i wierszy w macierzy A: \n";
            cin >> row >> col;
            auto **new_matrixA = createMatrix(row, col);
            auto **new_matrixB = createMatrix(row, col);
            fillMatrix(new_matrixA, row, col);
            fillMatrix(new_matrixB, row, col);
        }
    }
}

