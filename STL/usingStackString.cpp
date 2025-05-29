#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string removeDuplicates(string s) {
        stack <char> st;
        for (auto u : s){
            if (!st.empty()){
                if ( !st.empty() && st.top() == u ) st.pop();
                else st.push(u);
            }else {
            st.push(u);
        }
        }
        string newStr;
        while(!st.empty()){
            newStr += st.top();
            st.pop();
        }
        reverse ( newStr.begin(), newStr.end() );
        return newStr;
    }

int main(){
    optimize();

    string s = "abbaca";

    cout<< removeDuplicates(s) <<endl;
    
    return 0;
}