#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isBalanced (char c1, char c2){
    return ((c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']'));
}

int main(){
        int t; cin >> t;
        while(t--){
            stack <char> st;
            string s;
            cin >> s;
            int n = s.size();
            bool flag = true;
            for (auto u : s)
            {
                if (u == '[' || u == '{' || u == '(') {
                    st.push(u);
                } else {
                    if (st.empty()){
                    flag = false;
                    break;
                    }else {
                        if (isBalanced(st.top(), u)){
                            st.pop();
                        }else {
                            flag = false;
                            break;
                        }

                    }
                }
            }

            if (!st.empty()) flag = false;

            if (flag == true){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
return 0;
}