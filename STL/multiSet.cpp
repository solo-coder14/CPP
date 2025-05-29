#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    multiset <int> m; //always maintain sort
    m.insert(1);
    m.insert(1);
    m.insert(6);
    m.insert(3);
    m.insert(2);
    m.insert(6);
    m.insert(3);
    m.insert(9);

    cout << m.size()<< endl;
    m.erase(6);
    cout << m.count(1)<<endl;
    for (auto u : m){
        cout << u <<" ";
    }
    cout<< endl;

    //for delecting single element

    auto it = m.find (9);
    m.erase (it);

    for (auto u : m){
        cout << u <<" ";
    }
    cout<< endl;

    return 0;
}