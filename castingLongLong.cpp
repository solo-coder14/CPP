#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    int arr[3] ={18468, 6335, 26501};
    ll res = static_cast<ll>(arr[0]) * arr[1] * arr[2]; // Cast arr[0] to long long
    cout << res << endl;
    return 0;
}
