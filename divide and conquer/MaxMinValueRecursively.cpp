#include <iostream>
using namespace std;

void MaxMin(int arr[], int first, int last, int &Max, int &Min)
{

    if (first == last)
    {
        Max = Min = arr[first];
    }
    else if (last == 1)
    {
        if (arr[first] < arr[last])
        {
            Max = arr[last];
            Min = arr[first];
        }
        else
        {
            Min = arr[last];
            Max = arr[first];
        }
    }
    else
    {
        int mid = (first + last) / 2;
        int leftMin;
        int leftMax;
        int rightMin;
        int rightMax;

        MaxMin(arr, first, mid, leftMax, leftMin);
        MaxMin(arr, mid + 1, last, rightMax, rightMin);

        if (leftMin < rightMin)
            Min = leftMin;
        else
            Min = rightMin;

        if (leftMax > rightMax)
            Max = leftMax;
        else
            Max = rightMax;
    }
}

int main()
{
    cout << "Enter the size of the array : ";
    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Element(" << i << ") : ";
        cin >> arr[i];
    }
    int Max = arr[0];
    int Min = arr[0];

    MaxMin(arr, 0, n - 1, Max, Min);

    cout << "Largest element : " << Max << endl;
    cout << "Smallest element : " << Min << endl;
    return 0;
}