#include <iostream>
using namespace std;
/*
	Write a C++ program that accepts user input for their name and age and then displays a personalized greeting. 
	Objective: Practice input/output operations using cin and cout. 

*/


int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}

