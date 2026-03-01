#include <iostream>
using namespace std;
/*
	Write a program that prints a right-angled triangle using stars(*) with a nested loop.
	Objective: Learn nested control structures.
*/
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {       // Outer loop for rows
        for (int j = 1; j <= i; j++) {      // Inner loop for stars
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

