#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int n = 1e5 + 123;
char str[n];

int main(){
    
    int t;
    cin >> t;
    while (t--){
     cin >> str;
    int len = strlen(str);
    bool isGood = false;
    for (int i = 2; i <len; i++){
        char s1 = str[i - 2];
        char s2 = str[i - 1];
        char s3 = str[i];
        if ((s1 == '0' && s2 == '1' && s3 == '0') || (s1 == '1' && s2 == '0' && s3 == '1')){
            isGood = true;
        }
    }
    if (isGood){
        cout << "Good" << endl;
    }else {
        cout << "Bad" << endl;
    }
    }
    return 0;
}