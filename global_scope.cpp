#include <iostream>
using namespace std;
int c=45;

int main(){
    int c=25;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of global c is "<<::c;
    return 0;
}