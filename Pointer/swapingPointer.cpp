#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 4;
    swap(a, b);
    cout << a << endl;  // Output: 4
    cout << b << endl;  // Output: 5
    return 0;
}
