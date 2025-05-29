#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout << st.top() << endl;

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    cout << st.size() << endl;
    

    return 0;
}