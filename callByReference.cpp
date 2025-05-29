#include <iostream>
using namespace std;

// Call by value
void callByValue(int x) {
    x = 20; // Modifying the local copy of x
}

// Call by reference
void callByReference(int &x) {
    x = 20; // Modifying the original value of x
}

// Call by pointer
void callByPointer(int *x) {
    *x = 20; // Modifying the value pointed to by x
}

int main() {
    int num1 = 10;
    int num2 = 10;
    int num3 = 10;

    // Call by value
    callByValue(num1);
    cout << "After call by value: " << num1 << endl; // Output: 10

    // Call by reference
    callByReference(num2);
    cout << "After call by reference: " << num2 << endl; // Output: 20

    // Call by pointer
    callByPointer(&num3);
    cout << "After call by pointer: " << num3 << endl; // Output: 20

    return 0;
}
