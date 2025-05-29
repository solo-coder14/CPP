#include<iostream> 
#include <algorithm> 
using namespace std;



int main(){
    int n;
    cin>>n;
    long long min = 10000000123;
    long long sum = 0;
    long long max = -10000000123;
    long long a;
    while(n--){
        cin.ignore();
        cin>>a;
        if (a<min){
            min = a;
        }
        if (a>max){
            max = a;
        }
        sum += a;
    }
    cout<<min<<" "<<max<<" "<<sum<<endl;
    return 0;
}