#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    // int t;
    // cin >> t;
    // while(t--){
    //     string str;
    //     char c;
    //     cin>>c;
    //     getline(cin, str);
    //     str = c + str;
    //     cout<<str<<'\n';
    // }
    string newStr = "fine go now";
    for (auto u : newStr ){
        cout<<u;
        if (isspace(u)){
            cout<<endl;
        }
    }
    return 0;
}