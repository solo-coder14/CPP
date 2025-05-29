#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    // pair <string , vector <int>> p;
    // p.first = "woafi";
    // p.second = {4, 5 };
    // cout << p.first << endl;
    // for (auto u : p.second )    cout<< u <<" ";

    pair <int, int> p1, p2;
    // p = make_pair (2, 3); // p = {2, 3};
    // p.first++;
    // cout<<p.first << " "<<p.second<<endl;
    // return 0;

    p1 = {2, 3};
    p2 = {4, 5};

    // if (p1 < p2) cout << "Yes\n";

    pair <int, int > p = min (p1, p2);

    cout << p.first << " " << p.second << endl;

}