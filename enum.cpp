#include<iostream> 
using namespace std;

int main(){
    enum meal{ breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    meal m1 = breakfast;
    cout<<(m1==0)<<endl;
    return 0;
}