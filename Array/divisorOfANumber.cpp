#include<iostream> 
#include <algorithm> 
using namespace std;



int main(){
    int n;
    cin>> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0){
            count++;
            //cout<<"Element: "<<i<<endl;
        }
    }
    cout<<count<<endl;
    int array[count];
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0){
            array[j] = i;
            j++;
        }
    }

    int length = sizeof(array)/sizeof(array[0]);

    
    for (int i = 0; i < length; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}