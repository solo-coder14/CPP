#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int s = 1e7+123;
char c[s]; 

int main(){
    
    cin >> c;
    int arr[30] = {0};
    for (int i = 0; c[i] != 0; i++)
    {
        int u = c[i] - 'a';
        arr[u]++;
    }
    
    for (int i = 0; i < 26; i++){
        if (arr[i] > 0 ){
            char a = i + 'a';
            cout<<a<<" "<<":"<<" "<<arr[i]<<endl;
        }
    }
    
    
    return 0;
}