#include<iostream> 
using namespace std;

void swapPointer(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return ;
}

int main() {
    int a = 5, b = 4;
    swapPointer(&a, &b);
    cout << a << endl;  // Output: 4
    cout << b << endl;  // Output: 5
    return 0;
} 