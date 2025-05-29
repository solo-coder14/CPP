#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    string s1, s2, newS1, newS2;
    cin >> s1 >> s2;

    for (auto u : s1){
        char c = tolower(u);
        newS1 += c;
    }
    	
    
    for (auto u : s2){
        char c = tolower(u);
        newS2 += c;
    }
    

    // int n = newS1.compare(newS2);
    // cout<< n<<endl;

    if (newS1.compare(newS2) < 0 ) {
        cout << -1 << endl;
    } else if (newS1.compare(newS2) == 0 ){
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }

    // string str1, str2;
    
    // // Input the two strings
    // getline(cin, str1);
    // getline(cin, str2);
    
    // // Convert both strings to lowercase
    // transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    // transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
 
    // // Compare the two strings lexicographically
    // if (str1 < str2) {
    //     cout << "-1" << endl;
    // } else if (str1 > str2) {
    //     cout << "1" << endl;
    // } else {
    //     cout << "0" << endl;
    // }
 
    return 0;
}


    return 0;
}