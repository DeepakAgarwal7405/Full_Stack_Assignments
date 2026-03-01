#include <iostream>
using namespace std;
/*
	Write a C++ program to display the multiplication table of a given number using a for loop.
	Objective: Practice using loops.
*/
int main() {
    int num;

    cout << "Enter a number to display its multiplication table:- ";
    cin >> num;

    cout << "Multiplication Table of " << num << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

