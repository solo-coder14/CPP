#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n; cin >> n;
    int arr[n];
    priority_queue <int> q;
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
        if (q.size() > 2 ){

            int one = q.top();
            q.pop();
            int two = q.top();
            q.pop();
            int three = q.top();
            q.pop();

            q.push(one);
            q.push(two);
            q.push(three);
            ll res =static_cast<ll> (one) * two * three;
            cout << res << endl;
        }else cout << -1 << endl;

    }
    return 0;
}