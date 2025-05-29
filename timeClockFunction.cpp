#include <iostream>
#include<ctime>
#include<cstdio>
using namespace std;

int partition(int arr[], int low, int high)
{
    int privot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < privot)
        {
            i++;
            // swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = privot;
    arr[high] = temp;
    return i;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pidx = partition(arr, low, high);

        quickSort(arr, low, pidx - 1);
        quickSort(arr, pidx + 1, high);
    }
}

void bubbleSort(int array[], int size){
        for (int i=0; i<size-1; i++){
            for (int j=0; j<size-i-1; j++){
                if( array[j] > array[j+1] ){
                    int swap=array[j];
                    array[j]=array[j+1];
                    array[j+1]=swap;
                }
            }
        }
    }

void PrintArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    //quicksort time section
    int start_s=clock();
    quickSort(arr, 0, n - 1);
    int stop_s=clock();

    cout<<"\n\nAfter QuickSort the sorted elements are: \n";
    PrintArray(arr, n);
    cout << "time: " << (stop_s-start_s)<< endl;

    //bubbleSort time section
    int start_s1=clock();
    bubbleSort(arr, n);
    int stop_s1=clock();

    cout<<"\n\nAfter Bubble Sort: \n";
    PrintArray(arr, n);
    cout << "time: " << (stop_s1-start_s1)<< endl;
    return 0;
    
}