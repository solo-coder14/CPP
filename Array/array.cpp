#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 2; // index of the element to be deleted
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // decrement the size of the array
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}