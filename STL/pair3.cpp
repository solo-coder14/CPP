#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool cmp (const pair <int, int> &p1, const pair <int, int> &p2){
    if (p1.first > p2.first) return 1;
    else if (p1.first == p2.first) return (p1.second < p2.second);
    return 0;
}
int main(){
    optimize();

    vector <pair <int, int>> v;
    int t; cin >> t;
    int k; cin >> k;
    while (t--){
        int a, b; cin >> a >> b;
        v.push_back({a, b});
    }
   

    sort(v.begin(), v.end(), cmp);

    for (auto u : v){
        cout << u.first << " " << u.second << endl;
    }

    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[k-1] == v[i]){
            cnt++;
        }
    }
    cout << cnt << endl;
    
    return 0;
}