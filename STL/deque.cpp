#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    deque <int> dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(5);
    dq.push_back(3);
    dq.push_back(8);

    dq.pop_front();
    dq.pop_back();

    cout<< dq.front() << " " << dq.back() << endl;
    
    return 0;
}