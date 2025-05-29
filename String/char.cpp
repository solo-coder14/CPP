#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();

    char a = 'A';
    bool fi = isupper(a); 
    bool fx = islower(a); //isspace()
    
    cout<< fx <<endl;
    a = tolower(a); //toupper
    cout<< a <<endl;
    return 0;
}