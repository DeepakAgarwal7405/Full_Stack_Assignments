#include <iostream>
#include <string>
using namespace std;
/*
	Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).
	Objective: Practice string operations
*/
int main() {
    string str, rev = "";
    cout << "Enter a string: ";
    cin >> str;

    // reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    // check palindrome
    if (str == rev) {
        cout << str << " is a Palindrome." << endl;
    } else {
        cout << str << " is NOT a Palindrome." << endl;
    }

    return 0;
}

