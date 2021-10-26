#include "lib.h"
#include "iostream"
#include "algorithm"

int **addMatrix(int **matrix_a, int **matrix_b, int rows, int columns) {
    int answer[rows][columns];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            answer[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
    return answer;
}

double **addMatrix(double **matrix_a, double **matrix_b, int rows, int columns) {
    double answer[rows][columns];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            answer[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
    return answer;
}

int **subtractMatrix(int **matrix_a, int **matrix_b, int rows, int columns) {
    int answer[rows][columns];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            answer[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }
    }
    return answer;
}

int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_first, int columns_first, int columns_second) {
    int answer[rows_first][columns_second];
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
    int answer[rows][columns];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            answer[i][j] = scalar * matrix_a[i][j];
        }
    }
    return answer;
}

int **transpozeMatrix(int **matrix_a, int rows, int columns) {
    int answer[columns][rows];
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            answer[i][j] = matrix_a[j][i];
        }
    }
    return answer;
}

int **powerMatrix(int **matrix_a, int rows, int columns, unsigned int power) {
    int **answer = matrix_a;
    while (power--) {
        tmp = multiplyMatrix(tmp, matrix_a, rows, columns, columns);
    }
    return answer;
}

int determinantMatrix(int **matrix_a, int rows, int columns) {
    //
}

bool matrixIsDiagonal(int **matrix_a, int rows, int columns) {
    bool ok = true;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i != j) {
                if (matrix_a[i][j] != 0){
                    ok = false;
                    break;
                }
            }
        }
    }
    return ok ? true : false;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int *sortRow(int *row, int columns) {
    int i, j;
    for (i = 0; i < columns - 1; i++) {
        for (j = 0; j < columns - i - 1; j++) {
            if (row[j] > arr[j + 1])
                swap(&row[j], &row[j + 1]);
        }
    }
    return row;
}

int **sortRowsInMatrix(int **matrix_a, int rows, int columns){
    for(int i = 0; i < rows; ++i){
        sortRow(matrix_a[i], columns);
    }
    return matrix_a;
}

