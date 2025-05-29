#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

int main() {
    
    // Store the numbers in an array for easy sorting
    int arr[] = {3, 8, 6, 4, 9, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    // Sort the array
    sort(arr, arr+len);
    for (auto u: arr) cout<< u<< " ";
    cout<<endl;
    sort(arr, arr+len, greater<int>()); //for reversing array
    
    // Output the sorted numbers
    for (auto u: arr) cout<< u<< " ";
    
    return 0;
}