#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    // map < string, int > id;
    
    // id ["woafi"] = 1;
    // id [ "woafi"] = 6;
    // id [ "eulaa"] = 2;
    // id [ "fdni"] = 4;

    // cout<< id ["woafi"] <<endl;
    // map <string, string> s;

    // s [ "zhongli"] = "male";
    // s ["mona"] = "female";

    // cout<< s [ "zhongli"]<<" "<< s ["mona"]<<endl<<endl;

    // for (auto u : id) cout<< u.first << " " << u.second <<endl;

    map <int, int> list;
    list [0] = 1;
    list [1] = 2;
    list [2] = 3;
    
    
    auto it = list.find(0);
    if (it != list.end()) {
        cout << "Key found! Value: " << it->second << endl;
    } else {
        cout << "Key not found!" << endl;
    }
    return 0;
}