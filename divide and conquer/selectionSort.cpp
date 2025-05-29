#include <iostream>
using namespace std;

void selectionSort(int arr[], int length){
    for (int i=0; i<length-1; i++){
        int smallest = i;
        for (int j=i+1; j<length; j++){
            if (arr[smallest]>arr[j]){
                smallest = j;
            }
        }
        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
    for (int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={7,8,9,5,3,1,6};
    int length=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, length);
    return 0;
}