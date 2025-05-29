#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    vector <pair <int, int>> v;

    v.push_back ({0, 5});
    v.push_back ({7, 3});
    v.push_back ({2, 2});
    v.push_back ({4, 3});
    v.push_back ({6, 1});
    v.push_back ({1, 5});


    cout<<v[1].first <<" "<<v[1].second<<endl<<endl;

    sort (v.begin(), v.end());
    
    for (auto u : v) cout << u.first << " " << u.second << endl;
    return 0;
}