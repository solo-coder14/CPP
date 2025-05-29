#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    int n; cin >> n;

    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int a;  cin >> a;
        m[a]++;
    }
    int ans = 0;
    for (auto u : m){
        if (u.second >= u.first){
            ans += u.second - u.first;
        } else {
            ans += u.second;
        }
    }

    cout << ans << endl;
    
    return 0;
}