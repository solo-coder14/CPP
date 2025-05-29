#include <bits/stdc++.h>

using namespace std;

int main() {
    int L, R;
    string S;
    
    // Input L, R and string S
    cin >> L >> R >> S;
    
    // Convert to 0-based indexing
    L--; 
    R--;
    
    // Reverse the substring from L to R
    reverse(S.begin() + L, S.begin() + R + 1);
    
    // Output the modified string
    cout << S << endl;
    

    reverse(S.begin(), S.end());


    cout << S << endl; 
    

    return 0;
}
