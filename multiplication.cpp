#include <iostream>
using namespace std;

int main(){
    cout<<"Input The Number: ";
    int x;
    cin>>x;
    for(int i=1; i<=10; i++){
        int multi= x*i;
        cout<< x <<" * "<<i<<"="<<" "<<multi<<endl;
    }
    return 0;
}