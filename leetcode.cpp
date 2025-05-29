#include<iostream> 
#include <algorithm> 
using namespace std;

bool isThree(int n){
    if (n == 3){
        return true;
    }
    return false;
}

int main(){
    int n, count = 0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0){
            count++;
            cout<<i;
        }
    }
    
    int res = isThree(count);

    if (res == 1){
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }

    return 0;
}