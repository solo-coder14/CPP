#include <iostream>
using namespace std;

int main(){
    //Type casting 1
    float numb=45.56;
    int x;
    x=int(numb);
    cout<<"Numb="<<numb<<endl;

    //Type casting 2
    double r=(int)485.4;
    cout<<r<<endl;

    //Type casting 3
    int a = 45;
    float b = 45.56;
    cout<<"The Value of a: "<< (float)a<<endl;
    cout<<"The Value of b: "<< (int)b;
    return 0;
}
