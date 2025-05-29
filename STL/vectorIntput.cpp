#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    vector<int> v;
    while(cin >> n){
        if (n == 0) break;
        v.push_back(n);
    }
    // for (int i = 0; i < n; i++)
    // {  
    //     cin>> v[i];
    // }
    cout<<v.size()<<endl;
    for (auto u : v ) cout<< u << " ";
    cout<<endl;
    return 0;
}