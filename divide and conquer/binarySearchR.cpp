#include <iostream>
using namespace std;

void binarySearch(int arr[], int first, int last, int key)
{
    if (first == last)
    {
        if (key == arr[first])
        {
            cout << "Item is found at index: " << first;
            return;
        }
        else
        {
            cout << "Not found";
            return;
        }
    }

    int mid = (first + last) / 2;
    if (key == arr[mid])
    {
        cout << "Item is found at index: " << mid;
        return;
    }
    else
    {
        if (key < arr[mid])
        {
            binarySearch(arr, first, mid - 1, key);
        }
        else
        {
            binarySearch(arr, mid + 1, last, key);
        }
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 9};
    int key = 6;
    int length = sizeof(arr) / sizeof(arr[0]);
    binarySearch(arr, 0, length - 1, key);
    return 0;
}