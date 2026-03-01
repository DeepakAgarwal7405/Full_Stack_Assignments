#include <iostream>
using namespace std;
/*
	Write a C++ program to perform matrix addition on two 2x2 matrices.
	Objective: Practice multi-dimensional arrays.
*/
int main() {
	int r=2,c=2;
    int A[r][c], B[r][c], C[r][c];

    cout << "Enter elements of first 2x2 matrix (A):\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second 2x2 matrix (B):\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix Addition
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display Result
    cout << "Resultant Matrix (A + B):\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

