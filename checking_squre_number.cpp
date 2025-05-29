#include<iostream> 
#include <algorithm> 
#include <math.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int a = sqrt(n);
    if (a*a == n){
        cout<<true;
    } else {
        cout<<false;
    }
    return 0;
}