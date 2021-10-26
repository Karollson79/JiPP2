#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

#include "iostream"

using namespace std;

int **addMatrix(int **matrix_a, int **matrix_b, int rows, int columns);

double **addMatrix(double **matrix_a, doble **matrix_b, int rows, int columns);

int **subtractMatrix(int **matrix_a, int **matrix_b, int rows, int columns);

double **subtractMatrix(double **matrix_a, doble **matrix_b, int rows, int columns);

int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_first, int columns_first, int columns_second);

double **multiplyMatrix(double **matrix_a, double **matrix_b, int rows_first, int columns_first, int columns_second);

int **multiplyByScalar(int **matrix_a, int rows, int columns, double scalar);

double **multiplyByScalar(double **matrix_a, int rows, int columns, double scalar);

int **transpozeMatrix(int **matrix_a, int rows, int columns);

double **transpozeMatrix(double **matrix_a, int rows, int columns);

int **powerMatrix(int **matrix_a, int rows, int columns, unsigned int power);

double **powerMatrix(double **matrix_a, int rows, int columns, unsigned int power);

int determinantMatrix(int **matrix_a, int rows, int columns);

double determinantMatrix(double **matrix_a, int rows, int columns);

bool matrixIsDiagonal(int **matrix_a, int rows, int columns);

bool matrixIsDiagonal(double **matrix_a, int rows, int columns);

int **swap(int &a, int &b);

double **swap(double &a, double &b);

int **sortRow(int *row, int columns);

double **sortRow(double *row, int columns);

int **sortRowsInMatrix(int **matrix_a, int rows, int columns);

double **sortRowsInMatrix(double **matrix_a, int rows, int columns);

#endif //JIPP2_LIB_H