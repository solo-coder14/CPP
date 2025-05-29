#include <bits/stdc++.h>
using namespace std;

// Typedefs for common data types
typedef long long ll;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vpii;

typedef vector<int> :: iterator vit;
typedef set<int> :: iterator sit;

// Frequently used macros for loops
#define endl '\n'
#define SZ(x) (int)(x).size()
#define ALL(v) v.begin(), v.end()
#define F first
#define S second
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();

    string s = "woafi";
    
    char a = 'm';
   
    s[0] = toupper(s[0]);
    s += a;
    cout << s << endl;

    return 0;
}