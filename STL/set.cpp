#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    set <int> s = {1, 1, 5, 2, 5, 2}; //unordered_set
    s.insert(3);
    s.erase(1);
    for (auto u : s){
        cout<< u <<" ";
    }
    cout<<endl;
    cout << s.count(4)<<endl; //log2(n)
    cout << *(++s.begin()) << endl;

    int p, c = 0;

    for (auto u : s){            //for selecting index value in set
        if ( c == 3) break;
        p = u;
        c++;
    }

    cout << p <<endl;

    // set <int, greater <int>> s;

    // s.insert(4);
    // s.insert(2);
    // s.insert(1);
    // s.insert(3);

    // for (auto u : s){
    //     cout<< u <<" ";
    // }

    // set <pair <int, int>, greater <pair <int, int>>> s1;

    // s1.insert({4, 5});
    // s1.insert({2, 1});
    // s1.insert({1, 3});
    // s1.insert({3, 4});

    // for (auto u : s1){
    //     cout<< u.first <<" "<<u.second<<endl;
    // }

    // if (s1.count({3, 4})) {
    //             cout << "Yes" <<endl;
    //         }else{
    //             cout << "No" <<endl;
    //         }

    return 0;
}