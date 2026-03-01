#include <iostream>
using namespace std;
/*
	Write a C++ program that takes a student's marks as input and calculates the grade based on if-else conditions.
	Objective: Practice conditional statements(if-else).

*/
int main() {
    int marks;
    cout << "Enter student's marks (0-100): ";
    Again_Marks:
    cin >> marks;
    
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered!" << endl;
        cout << "Again Please Enter student's marks (0-100): ";
        goto Again_Marks;
    }
    else if (marks >= 90) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 75) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 35) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

