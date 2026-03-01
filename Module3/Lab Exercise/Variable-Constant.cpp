#include <iostream>
using namespace std;
/*
	Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them. 
	Objective: Understand the difference between variables and constants. 

*/
int main() {
    // Constants (value cannot be changed)
    const double PI = 3.14;

    // Variables of different data types
    int age = 20;
    float height = 6.8;
    double radius = 8;
    char grade = 'A';
    string name = "Rahul";

    // Operations
    double area = PI * radius * radius;  // using constant
    age = age + 5;                       // modifying variable

    // Output
	cout << "Name: " << name <<"\n";
    cout << "Age after 5 years: " << age <<"\n";
    cout << "Height: " << height <<"\n";
    cout << "Grade: " << grade <<"\n";
    cout << "Circle Area with radius " << radius << " = " << area <<"\n";

    return 0;
}

