#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {  
        cin>> v[i];
    }
    int s = 0, d = 0, turn = 1;
    
    while (!v.empty()){
        if (turn == 1){
            if(v[0]> v.back()){
                s += v[0];
                v.erase(v.begin());
            } else {
                s += v.back();
                v.pop_back();
            }
            turn = 2;
        } else {
            if (turn == 2){
                if(v[0] > v.back()){
                    d += v[0];
                    v.erase(v.begin());
            } else {
                d += v.back();
                v.pop_back();
                }
            turn = 1;
            }
        }
    }
    cout << s <<" "<<d<<endl;
    return 0;
}