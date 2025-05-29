#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main(){
    optimize();

    string str;
    cin >> str;
    char c;
    string newStr;
    for (auto u : str){
        c = tolower (u);
        if (!isVowel(c)){
        newStr += '.';
        newStr += c ;
    }
    }
    
    cout<<newStr<<endl;
    
    return 0;
}