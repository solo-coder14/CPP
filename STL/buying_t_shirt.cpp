#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    int n; 
    cin >> n;
    
    vector<int> pri(n), a1(n), a2(n);
    
    for (int i = 0; i < n; i++) {
        cin >> pri[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a2[i];
    }

    set <pair <int, int>> color[5];
    for (int i = 0; i < n; i++) {
        color[a1[i]].insert({pri[i], i});
        if (a1[i] != a2[i]){
            color[a2[i]].insert({pri[i], i});
        }
    }

    int m; cin >> m;
    vector<int> ans(m);

    for (int i = 0; i < m; i++)
    {
        int x; cin >> x;

        if (color[x].empty()){
            ans[i] = -1;
        } else {
            auto it = color[x].begin();
            int price = it -> first;
            int idx = it -> second;
            ans[i] = price;

            color[a1[idx]].erase({pri[idx], idx});
            if (a1[idx] != a2[idx]){
                color[a2[idx]].erase({pri[idx], idx});
            }
        }
    }

    for (auto u : ans){
        cout << u << " ";
    }
    cout << endl;


    return 0;
}