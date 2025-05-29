#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    string str, comStr;
    cin >> str;
    
    comStr = str;
    bool isEqual = true;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != comStr[i]){
            isEqual = false;
            break;
        }
    }

    if(isEqual){
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    
    

    return 0;
}