#include <iostream>
using namespace std;

// Global variable
int gnum = 100;

void showLocal() {
    int lnum = 50;  // Local variable
    cout << "\nLocal Variable = " << lnum << endl;
    cout << "Global Variable = " << gnum << endl;
}

void modifyGlobal() {
    gnum = gnum + 10;  // modifying global variable
    cout << "\nAfter Modify global Variable = " << gnum << endl;
}

int main() {
    cout << "In main() - global Varible = " << gnum << endl;

    showLocal();       // shows local and global
    modifyGlobal();    // modifies global

    cout << "\nBack in main() - global Varible = " << gnum << endl;

    
    // cout << localVar;

    return 0;
}

