//https://cses.fi/problemset/task/1083

#include<iostream> 
#include <algorithm> 
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;

    ll arr[n+1] = {0};
    int numb;
    for(ll i = 0; i<n-1; i++) {
        cin >> numb;
        arr[numb] = 1;
    }
    
    for (ll i = 1; i <= n; i++)
    {
        if (arr[i] == 0){
            cout<<i<<endl;
        }
    }
    
    

    return 0;
}