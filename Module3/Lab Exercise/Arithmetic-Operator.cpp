#include <iostream>
using namespace std;
/*
	Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). The main function should call these based on user input.
	Objective: Practice defining and using functions in C++.
*/

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (double)a / b;
}

int main() {
    int num1, num2, choice;

    cout << "Enter First numbers: ";
    cin >> num1;

	cout << "Enter Second numbers: ";
    cin >> num2;

    cout << "Choose operation:\n";
    choose:
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result of Addition: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result of Substraction: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result of Multiplication: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result of Division: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            cout << "Again Choose the operation:\n";
            goto choose;
    }

    return 0;
}

