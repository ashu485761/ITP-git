#include <iostream>
using namespace std;
const int SIZE = 3;

void inputMatrix(int matrix[SIZE][SIZE], const string& name) {

    cout << "Enter elements of " << name << " matrix (" << SIZE << "x" << SIZE << "):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void transposeMatrix(int input[SIZE][SIZE], int output[SIZE][SIZE]) {

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            output[j][i] = input[i][j];
        }
    }
}

int main() {

    int A[SIZE][SIZE], B[SIZE][SIZE], sum[SIZE][SIZE];
    int transposeA[SIZE][SIZE], transposeB[SIZE][SIZE], transposeSum[SIZE][SIZE];

    inputMatrix(A, "first");
    inputMatrix(B, "second");

    addMatrices(A, B, sum);

    transposeMatrix(A, transposeA);
    transposeMatrix(B, transposeB);

    addMatrices(transposeA, transposeB, transposeSum);

    cout << "\nSum of original matrices:\n";
    printMatrix(sum);

    cout << "\nSum of transposed matrices:\n";
    printMatrix(transposeSum);

    return 0;
}