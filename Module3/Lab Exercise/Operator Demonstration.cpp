#include <iostream>
using namespace std;
/*
	Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results. 
	Objective: Reinforce understanding of different types of operators in C++. 
*/
int main() {
    int a = 10, b = 5;
    bool x = true, y = false;

    cout << "===== Arithmetic Operators =====" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "\n===== Relational Operators =====" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    cout << "\n===== Logical Operators =====" << endl;
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;
    cout << "!x     : " << (!x) << endl;

    cout << "\n===== Bitwise Operators =====" << endl;
    cout << "a & b  : " << (a & b) << endl;
    cout << "a | b  : " << (a | b) << endl;
    cout << "a ^ b  : " << (a ^ b) << endl;
    cout << "~a     : " << (~a) << endl;
    cout << "a << 1 : " << (a << 1) << endl;
    cout << "a >> 1 : " << (a >> 1) << endl;

    return 0;
}



