#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    

    vector<long long> v = {2313213213, 2131231454234435334, 323142342543534563, 2131231454234435334, 2131231454234435334, 2313213213};
    map<long long, int> cnt;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cnt[v[i]]++;
    // }
    // cout<< cnt[2131231454234435334] <<endl;

    for (auto u : v){
        cnt[u]++;
    }

    for (auto u : cnt){
        cout << u.first <<" "<< u.second<<endl; 
    }

    cout<<endl<<cnt.size()<<endl;

    vector<map<string, int>> vs;
    map<string, int> c;
    c["as"] = 1;
    vs.push_back(c);
    cout << vs[0]["as"] << endl;
    
    return 0;
}