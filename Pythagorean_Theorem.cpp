#include <iostream>
using namespace std;

#define ll long long
const ll ax = 2e8+12;
bool arr[ax];
int main(){
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        arr[i * i] = 1;
    }
    ll cnt = 0;
    for (ll j = 1; j <= n; j++)
    {
        for (ll k = j; k <= n; k++){
            ll v = (j*j) + (k*k);
            if (arr[v]){
                cnt++;
            }
        }
    }
    cout<< cnt<<endl;

    return 0;
}   