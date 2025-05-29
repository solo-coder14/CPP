#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,s=0;
    cout<<"Test Case For inputting element in a array: ";
    cin>>x;
    cout<<"Test Case For showing index's value in a array: ";
    cin>>y;
    int* arr[x];
    while (x--){
        int n;
        cout<<"Enter Size of Element: ";
        cin>>n;
        arr[s] = new int[n];
        cout<<"Enter Element: ";
        for (int i = 0; i < n; i++)
        {
            cin>>arr[s][i];
        }
        s++;
    }
    while(y--){
        int a,b;
        cout<<"Enter Array Index: ";
        cin>>a>>b;
        cout<<"value at index: "<<arr[a][b]<<endl;
    }
    return 0;
}