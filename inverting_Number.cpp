#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    char arr[25];
    cin >> arr;
    int len = strlen(arr);

    char temp = arr[0];

    for (int i = 0; i < len; i++)
    {
        int n = arr[i] - '0';
        int c = 9 - n;
        if (c < n){
            arr[i] = c + '0';
        }
    }

    if (arr[0] == '0' ){
        arr[0] = temp;
    }

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    
    
    return 0;
}