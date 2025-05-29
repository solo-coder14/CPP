#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){
    optimize();

    vector<string> s = {"5", "2", "D"};
    for (auto u : s){
       if (isdigit(u[0])){
        cout << u << endl;
       }
    }
    
    return 0;
}