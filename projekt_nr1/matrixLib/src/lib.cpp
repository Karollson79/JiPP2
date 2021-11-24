#include "iostream"
#include "algorithm"
#include "../include/lib.h"

using namespace std;

void help() {
    cout << "\n\nKalkulator macierzy:" << endl;
    cout << "matrixApp [nazwa dzialania]"<< endl << endl;

    cout << "Dzialania:" << endl;

    cout << "addMatrix" << endl;
    cout << "\tdodanie macierzy A i B." << endl;
    cout << "subtractMatrix" << endl;
    cout << "\todejmowanie macierzy A i B." << endl;
    cout << "multiplyMatrix" << endl;
    cout << "\tmnozenie macierzy A i B." << endl;
    cout << "multiplyByScalar" << endl;
    cout << "\tmnozenie macierzy przez skalar."<<endl;
    cout << "transpozeMatrix"<<endl;
    cout << "\ttransponowanie macierzy." << endl;
    cout <<  "powerMatrix [pow]" << endl;
    cout << "\tpotegowanie macierzy, podnosznie macierzy do potegi [pow]." << endl;
    cout << "determinantMatrix" << endl;
    cout << "\tobliczanie wyznacznika macierzy." <<endl;
    cout << "matrixIsDiagonal" << endl;
    cout << "\tsprawdzenie, czy macierz jest diagonalna." << endl;
    cout <<"sortRowsInMatrix"<<endl;
    cout << "\tsortowanie wszystkich wierszy w macierzy rosnaco.";
    cout << "help" << endl;
    cout << "\twyswietla dokumentacje programu." << endl;
}

void err() {
    cout << "ERROR: zla liczba argumentow.\n\n";
    help();
}

void displayMatrix(int **matrix, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

void displayMatrix(double **matrix, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int **createMatrix(int row, int col) {
    int **new_matrix = new int *[row];
    for (int i = 0; i < row; ++i) {
        new_matrix[i] = new int[col];
    }
    return new_matrix;
}

double **createMatrix_double(int row, int col) {
    double **new_matrix = new double *[row];
    for (int i = 0; i < row; ++i) {
        new_matrix[i] = new double[col];
    }
    return new_matrix;
}

void freeMatrix(int **matrix, int row){
    for(int i = 0; i < row; ++i)
        delete []matrix[i];
    delete []matrix;
}

void freeMatrix(double **matrix, int row){
    for(int i = 0; i < row; ++i)
        delete []matrix[i];
    delete []matrix;
}

void fillMatrix(int **matrix, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "Podaj liczbe do komorki x = " << j + 1 << " i y = " << i + 1 << ":\n";
            if(!(cin >> matrix[i][j])){
                cout << "ERROR: nieodpowiedni znak.\n";
                freeMatrix(matrix, row);
                exit(1);
            }
        }
    }
}

void fillMatrix(double **matrix, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
        cout << "Podaj liczbe do komorki x = " << i + 1 << " i y = " << j + 1 << ":\n";
            if(!(cin >> matrix[i][j])){
                cout << "ERROR: nieodpowiedni znak.\n";
                freeMatrix(matrix, row);
                exit(1);
            }
        }
    }
}

int **addMatrix(int **matrix_a, int **matrix_b, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrix_a[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
    return matrix_a;
}

double **addMatrix(double **matrix_a, double **matrix_b, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrix_a[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
    return matrix_a;
}

int **subtractMatrix(int **matrix_a, int **matrix_b, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrix_a[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }
    }
    return matrix_a;
}

double **subtractMatrix(double **matrix_a, double **matrix_b, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrix_a[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }
    }
    return matrix_a;
}

int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_first, int columns_first, int columns_second) {
    int **answer = createMatrix(rows_first, columns_second);
    for (int i = 0; i < rows_first; ++i) {

    }
    for (int i = 0; i < rows_first; ++i) {
        for (int j = 0; j < columns_second; ++j) {
            int sum = 0;
            for (int k = 0; k < columns_first; ++k) {
                sum += matrix_a[i][k] * matrix_b[k][j];
            }
            answer[i][j] = sum;
        }
    }
    return answer;
}

double **multiplyMatrix(double **matrix_a, double **matrix_b, int rows_first, int columns_first, int columns_second) {
    double **answer = createMatrix_double(rows_first, columns_second);
    for (int i = 0; i < rows_first; ++i) {
        for (int j = 0; j < columns_second; ++j) {
            int sum = 0;
            for (int k = 0; k < columns_first; ++k) {
                sum += matrix_a[i][k] * matrix_b[k][j];
            }
            answer[i][j] = sum;
        }
    }
    return answer;
}

int **multiplyByScalar(int **matrix_a, int rows, int columns, double scalar) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrix_a[i][j] = scalar * matrix_a[i][j];
        }
    }
    return matrix_a;
}

double **multiplyByScalar(double **matrix_a, int rows, int columns, double scalar) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrix_a[i][j] = scalar * matrix_a[i][j];
        }
    }
    return matrix_a;
}

int **transpozeMatrix(int **matrix_a, int rows, int columns) {
    int **answer = createMatrix(rows, columns);
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            answer[i][j] = matrix_a[j][i];
        }
    }
    return answer;
}

double **transpozeMatrix(double **matrix_a, int rows, int columns) {
    double **answer = createMatrix_double(rows, columns);
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            answer[i][j] = matrix_a[j][i];
        }
    }
    return answer;
}

int **powerMatrix(int **matrix_a, int rows, int columns, unsigned int power) {
    int **answer = matrix_a;
    while (--power) {
        answer = multiplyMatrix(answer, matrix_a, rows, columns, columns);
    }
    return answer;
}

double **powerMatrix(double **matrix_a, int rows, int columns, unsigned int power) {
    double **answer = matrix_a;
    while (--power) {
        answer = multiplyMatrix(answer, matrix_a, rows, columns, columns);
    }
    return answer;
}

void subMatrix(int **mat, int **temp, int p, int q, int n) {
    int i = 0, j = 0;
    // filling the sub matrix
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            // skipping if the current row or column is not equal to the current
            // element row and column
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int determinantMatrix(int **matrix, int rows, int columns) {
    int determinant = 0;
    if (rows == 1) {
        return matrix[0][0];
    }
    if (rows == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }
    int **temp = createMatrix(rows, rows), sign = 1;
    for (int i = 0; i < rows; i++) {
        subMatrix(matrix, temp, 0, i, rows);
        determinant += sign * matrix[0][i] * determinantMatrix(temp, rows - 1, columns);
        sign = -sign;
    }
    return determinant;
}

void subMatrix(double **mat, double **temp, int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

double determinantMatrix(double **matrix, int rows, int columns) {
    double determinant = 0;
    if (rows == 1) {
        return matrix[0][0];
    }
    if (rows == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }
    double **temp = createMatrix_double(rows, rows), sign = 1;
    for (int i = 0; i < rows; i++) {
        subMatrix(matrix, temp, 0, i, rows);
        determinant += sign * matrix[0][i] * determinantMatrix(temp, rows - 1, rows);
        sign = -sign;
    }
    return determinant;
}

bool matrixIsDiagonal(int **matrix_a, int rows, int columns) {
    bool ok = true;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i != j) {
                if (matrix_a[i][j] != 0) {
                    ok = false;
                    break;
                }
            }
        }
    }
    return ok;
}

bool matrixIsDiagonal(double **matrix_a, int rows, int columns) {
    bool ok = true;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i != j) {
                if (matrix_a[i][j] != 0) {
                    ok = false;
                    break;
                }
            }
        }
    }
    return ok;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(double &a, double &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int *sortRow(int *row, int columns) {
    int i, j;
    for (i = 0; i < columns - 1; i++) {
        for (j = 0; j < columns - i - 1; j++) {
            if (row[j] > row[j + 1])
                swap(row[j], row[j + 1]);
        }
    }
    return row;
}

double *sortRow(double *row, int columns) {
    int i, j;
    for (i = 0; i < columns - 1; i++) {
        for (j = 0; j < columns - i - 1; j++) {
            if (row[j] > row[j + 1])
                swap(row[j], row[j + 1]);
        }
    }
    return row;
}

int **sortRowsInMatrix(int **matrix_a, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        sortRow(matrix_a[i], columns);
    }
    return matrix_a;
}

double **sortRowsInMatrix(double **matrix_a, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        sortRow(matrix_a[i], columns);
    }
    return matrix_a;
}

