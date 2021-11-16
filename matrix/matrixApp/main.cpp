#include "iostream"
#include "../matrixLib/include/lib.h"
#include "cstring"

using namespace std;

int main(int argc, char *argv[]) {
    if (!strcmp(argv[1], "addMatrix")) { //                                     DODAWANIE MACIERZY
        if (argc != 2) {
            err();
            return 0;
        } else {
            int row, col;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            if(!(cin >> type)){
                cout << "ERROR: nieodpowiedni znak.";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy: \n";
            if(!(cin >> col >> row)){
                cout << "ERROR: nieodpowiedni znak.";
                return 0;
            }
            if (type == 1) {

                // tworzymy macierze
                double **new_matrixA = createMatrix_double(row, col);
                double **new_matrixB = createMatrix_double(row, col);

                // wypelniamy macierze A i B
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "Wyplenij macierz B: \n\n";
                fillMatrix(new_matrixB, row, col);

                // wyswietlamy macierze A i B
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                cout << "\n\nMACIERZ B: \n\n";
                displayMatrix(new_matrixB, row, col);

                // dodajemy macierze i macierz wynikowa zwracamy do zmiennej "answer"
                double **answer = addMatrix(new_matrixA, new_matrixB, row, col);

                // wyswietlamy wynik
                cout << "\n\nMACIERZ WYNIKOWA (A + B):\n\n";
                displayMatrix(answer, row, col);

                // zwalniamy zaalokwana pamiec
                freeMatrix(new_matrixA, row);
                freeMatrix(new_matrixB, row);
            } else {
                // dla macierzy int
                int **new_matrixA = createMatrix(row, col);
int **new_matrixB = createMatrix(row, col);
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "Wyplenij macierz B: \n\n";
                fillMatrix(new_matrixB, row, col);
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                cout << "\n\nMACIERZ B: \n\n";
                displayMatrix(new_matrixB, row, col);
                int **answer = addMatrix(new_matrixA, new_matrixB, row, col);
                cout << "\n\nMACIERZ WYNIKOWA (A + B):\n\n";
                displayMatrix(answer, row, col);
                freeMatrix(new_matrixA, row);
                freeMatrix(new_matrixB, row);
            }
        }
    } else if (!strcmp(argv[1], "subtractMatrix")) { //                             ODEJMOWANIE MACIERZY
        if (argc != 2) {
            err();
            return 0;
        } else {
            int row, col;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            if(!(cin >> type)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy: \n";
            if(!(cin >> col >> row)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            if (type == 1) {
                // dla typu double
                // tworzymy macierze
                double **new_matrixA = createMatrix_double(row, col);
                double **new_matrixB = createMatrix_double(row, col);

                // wypelniamy macierze A i B
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "Wyplenij macierz B: \n\n";
                fillMatrix(new_matrixB, row, col);

                // wyswietlamy macierze A i B
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                cout << "\n\nMACIERZ B: \n\n";
                displayMatrix(new_matrixB, row, col);

                // odejmujemy macierze i macierz wynikowa zwracamy do zmiennej "answer"
                double **answer = subtractMatrix(new_matrixA, new_matrixB, row, col);

                // wyswietlamy wynik
                cout << "\n\nMACIERZ WYNIKOWA (A - B):\n\n";
                displayMatrix(answer, row, col);

                freeMatrix(new_matrixA, row);
                freeMatrix(new_matrixB, row);
            } else {

                // dla macierzy int
                int **new_matrixA = createMatrix(row, col);
                int **new_matrixB = createMatrix(row, col);
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "Wyplenij macierz B: \n\n";
                fillMatrix(new_matrixB, row, col);
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                cout << "\n\nMACIERZ B: \n\n";
                displayMatrix(new_matrixB, row, col);
                int **answer = subtractMatrix(new_matrixA, new_matrixB, row, col);

                cout << "\n\nMACIERZ WYNIKOWA (A - B):\n\n";
                displayMatrix(answer, row, col);

                freeMatrix(new_matrixA, row);
                freeMatrix(new_matrixB, row);
            }
        }
    } else if (!strcmp(argv[1], "multiplyMatrix")) { //                             MNOZENIE MACIERZY
        if (argc != 2) {
            err();
            return 0;
        } else {
            int rowA, colA, rowB, colB;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            if(!(cin >> type)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy A: \n";
            if(!(cin >> colA >> rowA)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy B: \n";
            if(!(cin >> colB >> rowB)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            if (type == 1) {
                // dla typu double
                // tworzymy macierze do mnozenia
                double **new_matrixA = createMatrix_double(rowA, colA);
                double **new_matrixB = createMatrix_double(rowB, colB);

                // wypelniamy macierze A i B
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, rowA, colA);
                cout << "Wyplenij macierz B: \n\n";
                fillMatrix(new_matrixB, rowB, colB);

                // wyswietlamy macierze A i B
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, rowA, colA);
                cout << "\n\nMACIERZ B: \n\n";
                displayMatrix(new_matrixB, rowB, colB);

                // mnozymy macierze i macierz wynikowa zwracamy do zmiennej "answer"
                double **answer = multiplyMatrix(new_matrixA, new_matrixB, rowA, colA, colB);

                // wyswietlamy wynik
                cout << "\n\nMACIERZ WYNIKOWA (A * B):\n\n";
                displayMatrix(answer, rowA, colB);

                freeMatrix(new_matrixA, rowA);
                freeMatrix(new_matrixB, rowB);
            } else {

                // dla macierzy int
                int **new_matrixA = createMatrix(rowA, colA);
                int **new_matrixB = createMatrix(rowB, colB);
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, rowA, colA);
                cout << "Wyplenij macierz B: \n\n";
                fillMatrix(new_matrixB, rowB, colB);
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, rowA, colA);
                cout << "\n\nMACIERZ B: \n\n";
                displayMatrix(new_matrixB, rowB, colB);
                int **answer = multiplyMatrix(new_matrixA, new_matrixB, rowA, colA, colB);
                cout << "\n\nMACIERZ WYNIKOWA (A * B):\n\n";
                displayMatrix(answer, rowA, colB);
                freeMatrix(new_matrixA, rowA);
                freeMatrix(new_matrixB, rowB);
            }
        }
    } else if (!strcmp(argv[1], "multiplyByScalar")) { //                       MNOZENIE MACIERZY PRZEZ SKALAR
        if (argc != 2) {
            err();
            return 0;
        } else {
            int row, col;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            if(!(cin >> type)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy: \n";
            if(!(cin >> col >> row)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            if (type == 1) {

                // tworzymy macierz
                double **new_matrixA = createMatrix_double(row, col);
                double scalar;

                // wypelniamy macierz A
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);

                // wczytujemy skalar przez ktory bedzie mnozona macierz
                cout << "Podaj skalar przez ktory bedzie mnozona macierz: \n\n";
                if(!(cin >> scalar)){
                    cout << "ERROR: nieodpowiedni znak.\n";
                    return 0;
                }

                // wyswietlamy macierz A
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);

                // macierz wynikowa zwracamy do zmiennej "answer"
                double **answer = multiplyByScalar(new_matrixA, row, col, scalar);

                // wyswietlamy wynik
                cout << "\n\nMACIERZ WYNIKOWA (x * A):\n\n";
                displayMatrix(answer, row, col);

                freeMatrix(new_matrixA, row);
            } else {
                // dla macierzy int
                int **new_matrixA = createMatrix(row, col);
                int scalar;
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "Podaj skalar przez ktory bedzie mnozona macierz: \n\n";
                if(!(cin >> scalar)){
                    cout << "ERROR: nieodpowiedni znak.\n";
                    return 0;
                }
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                int **answer = multiplyByScalar(new_matrixA, row, col, scalar);
                cout << "\n\nMACIERZ WYNIKOWA (x * A):\n\n";
                displayMatrix(answer, row, col);

                freeMatrix(new_matrixA, row);
            }
        }
    } else if (!strcmp(argv[1], "transpozeMatrix")) { //                            TRANSPONOWANIE MACIERZY
        if (argc != 2) {
            err();
            return 0;
        } else {
            int row, col;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            if(!(cin >> type)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy: \n";
            if(!(cin >> col >> row)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            if (type == 1) {

                // tworzymy macierz
                double **new_matrixA = createMatrix_double(row, col);

                // wypelniamy macierz A
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);

                // wyswietlam macierze A
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);

                // macierz wynikowa zwracamy do zmiennej "answer"
                double **answer = transpozeMatrix(new_matrixA, row, col);

                // wyswietlamy wynik
                cout << "\n\nMACIERZ TRANSPONOWANA:\n\n";
                displayMatrix(answer, row, col);

                freeMatrix(new_matrixA, row);
            } else {
                // dla macierzy int
                int **new_matrixA = createMatrix(row, col);
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                int **answer = transpozeMatrix(new_matrixA, row, col);
                cout << "\n\nMACIERZ TRANSPONOWANA:\n\n";
                displayMatrix(answer, row, col);
                freeMatrix(new_matrixA, row);
            }
        }
    } else if (!strcmp(argv[1], "powerMatrix")) { //                                 POTEGOWANIE MACIERZY
        if (argc != 3) {
            err();
            return 0;
        } else {
            int row, col;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            if(!(cin >> type)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy: \n";
            if(!(cin >> col >> row)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            if (type == 1) {

                // tworzymy macierz
                double **new_matrixA = createMatrix_double(row, col);

                // wypelniamy macierz A
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);

                // wyswietlamy macierz A
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                unsigned int pow = atoi(argv[2]);
                // macierz wynikowa zwracamy do zmiennej "answer", atoi skonwertuje zmienna w tablict argv do typu int
                double **answer = powerMatrix(new_matrixA, row, col, pow);

                // wyswietlamy wynik
                cout << "\n\nMACIERZ WYNIKOWA (A^" << pow << "):\n\n";
                displayMatrix(answer, row, col);

                freeMatrix(new_matrixA, row);
            } else {
                // dla macierzy int
                int **new_matrixA = createMatrix(row, col);
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                unsigned int pow = atoi(argv[2]);
                int **answer = powerMatrix(new_matrixA, row, col, pow);
                cout << "\n\nMACIERZ WYNIKOWA (A^" << pow << "):\n\n";
                displayMatrix(answer, row, col);
                freeMatrix(new_matrixA, row);
            }
        }
    } else if (!strcmp(argv[1], "determinantMatrix")) { //                               WYZNACZNIK MACIERZY
        if (argc != 2) {
            err();
            return 0;
        } else {
            int row, col;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            if(!(cin >> type)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy: \n";
            if(!(cin >> col >> row)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            if (type == 1) {

                // tworzymy macierz
                double **new_matrixA = createMatrix_double(row, col);

                // wypelniamy macierz A
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);

                // wyswietlam macierze A
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);

                // wynik zwracamy do zmiennej "answer"
                double answer = determinantMatrix(new_matrixA, row, col);

                // wyswietlamy wynik
                cout << "\n\nWYZNACZNIK MACIERZY A = " << answer << ".\n\n";

                freeMatrix(new_matrixA, row);
            } else {
                // dla macierzy int
                int **new_matrixA = createMatrix(row, col);
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                int answer = determinantMatrix(new_matrixA, row, col);
                cout << "\n\nWYZNACZNIK MACIERZY A = " << answer << ".\n\n";
                freeMatrix(new_matrixA, row);
            }
        }
    } else if (!strcmp(argv[1], "matrixIsDiagonal")) { //                           CZY MACIERZ JEST DIAGONALNA
        if (argc != 2) {
            err();
            return 0;
        } else {
            int row, col;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            if(!(cin >> type)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy: \n";
            if(!(cin >> col >> row)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            if (type == 1) {

                // tworzymy macierz
                double **new_matrixA = createMatrix_double(row, col);

                // wypelniamy macierz A
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);

                // wyswietlam macierze A
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);

                // wynik zwracamy do zmiennej "answer"
                bool answer = matrixIsDiagonal(new_matrixA, row, col);

                // wyswietlamy wynik
                if (answer)
                    cout << "\n\nMACIERZ A JEST DIAGONALNA.\n\n";
                else
                    cout << "\n\nMACIERZ A NIE JEST DIAGONALNA.\n\n";
                freeMatrix(new_matrixA, row);
            } else {
                // dla macierzy int
                int **new_matrixA = createMatrix(row, col);
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                bool answer = matrixIsDiagonal(new_matrixA, row, col);
                if (answer)
                    cout << "\n\nMACIERZ A JEST DIAGONALNA.\n\n";
                else
                    cout << "\n\nMACIERZ A NIE JEST DIAGONALNA.\n\n";
                freeMatrix(new_matrixA, row);
            }
        }
    } else if (!strcmp(argv[1], "sortRowsInMatrix")) { //                                    SORTOWANIE MACIERZY
        if (argc != 2) {
            err();
            return 0;
        } else {
            int row, col;
            int type;
            cout << "Jakiego rodzaju dane beda w macierzy 0 - int, 1 - double?\n";
            if(!(cin >> type)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            cout << "Podaj ilosc kolumn i wierszy w macierzy: \n";
            if(!(cin >> col >> row)){
                cout << "ERROR: nieodpowiedni znak.\n";
                return 0;
            }
            if (type == 1) {

                // tworzymy macierz
                double **new_matrixA = createMatrix_double(row, col);

                // wypelniamy macierz A
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);

                // wyswietlam macierze A
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);

                // wynik zwracamy do zmiennej "answer"
                double **answer = sortRowsInMatrix(new_matrixA, row, col);

                // wyswietlamy wynik
                cout << "\n\nMACIERZ POSORTOWANA:\n\n";
                displayMatrix(answer, row, col);

                freeMatrix(new_matrixA, row);
            } else {
                // dla macierzy int
                int **new_matrixA = createMatrix(row, col);
                cout << "Wyplenij macierz A: \n\n";
                fillMatrix(new_matrixA, row, col);
                cout << "MACIERZ A: \n\n";
                displayMatrix(new_matrixA, row, col);
                int **answer = sortRowsInMatrix(new_matrixA, row, col);
                cout << "\n\nMACIERZ POSORTOWANA:\n\n";
                displayMatrix(answer, row, col);
                freeMatrix(new_matrixA, row);
            }
        }
    }else if(!strcmp(argv[1], "help")){ //                                  HELP
        if (argc != 2) {
            err();
            return 0;
        } else{
            help();
        }
    } else {
        cout << "ERROR: Nie ma takiego dzialania!\n";
        help();
    }
    return 0;
}

