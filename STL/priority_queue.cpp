#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    priority_queue <int> q;  //always gives priority to great number
    //priority_queue <int, vector<int>, greater<int>> q;  //always gives priority to small number

    q.push(1);
    q.push(4);
    q.push(2);
    q.push(3);

    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    cout << endl;
     while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
    return 0;
}