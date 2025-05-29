#include<iostream> 
using namespace std;

int main(){
    int arr[] = {24, 55, 66};
    int* p = arr;
    cout<< *p<<endl;
    cout<< *(p+1)<<endl;
    cout<< *(p+2)<<endl;
    for (auto u : arr){
        cout<< u <<" ";
    }
    return 0;
    
}