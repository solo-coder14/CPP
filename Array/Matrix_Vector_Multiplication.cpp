#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n, m; cin>> n >> m;
    int arr1[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr1[i][j];
        }
        
    }

    int arr2[m];

    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }

    int c[n];

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
           sum += arr1[i][j] * arr2[j];
        }
        c[i] = sum;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<endl;
    }
    

    return 0;
}