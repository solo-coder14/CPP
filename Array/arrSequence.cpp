#include <iostream>
#include <algorithm>
using namespace std;

const int size = 100000000;
int freq[size];
int arr[100000000];

int main()
{
    cout << "Enter the numb of element: " << endl;
    int numOfElement;
    cin >> numOfElement;

    for (int i = 1; i <= numOfElement; i++)
    {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
    for (int i = 1; i <= numOfElement; i++)
    {
        freq[arr[i]]++;
    }
    cout << "Enter the test case: " << endl;
    int t;
    cin >> t;

    while (t--)
    {
        cout << "Enter the Value that you want to know: " << endl;
        int value;
        cin >> value;
        cout << freq[value] << endl;
    }

    return 0;
}