#include <iostream>
using namespace std;
/*
	Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle, and another using Object-Oriented Programming (OOP) with a class and object for the same task. 
	Objective: Highlight the difference between POP and OOP approaches.

*/


// Rectangle class
class Rectangle {
    int length, breadth;
public:
    void setData(int l, int b) {
        length = l;
        breadth = b;
    }

    int getArea() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    int l, b;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;

    rect.setData(l, b);
    cout << "Area of rectangle = " << rect.getArea() << endl;

    return 0;
}

