#include <iostream>
using namespace std;

const int MATRIX_SIZE = 2;

void multiplyMatrices(int matrixA[MATRIX_SIZE][MATRIX_SIZE], int matrixB[MATRIX_SIZE][MATRIX_SIZE], int result[MATRIX_SIZE][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < MATRIX_SIZE; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

int main() {
    int matrixA[MATRIX_SIZE][MATRIX_SIZE] = {{1, 2}, {3, 4}};
    int matrixB[MATRIX_SIZE][MATRIX_SIZE] = {{5, 6}, {7, 8}};
    int resultMatrix[MATRIX_SIZE][MATRIX_SIZE];

    multiplyMatrices(matrixA, matrixB, resultMatrix);

    cout << "矩阵相乘的结果：" << endl;
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
