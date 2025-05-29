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

int find_min_oper(int n, int k){
	if(k == 1) return n;
	int ans = 0;
	while(n){
		ans += n % k;
		n /= k;
	}
	return ans;
}
 
int main()
{   
    optimize();
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << find_min_oper(n,k) << "\n";
	}
    return 0;
}