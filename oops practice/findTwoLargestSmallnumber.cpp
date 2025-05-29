#include <iostream>
using namespace std;
class large{
    public:
        int findLargest(int a, int b){
    if(a>b)
        return a;
    else
        return b;
    }
};

class small{
    public:
        int findSmalest(int a, int b){
    if(a<b)
        return a;
    else
        return b;
    }
};

int main(){
    large l;
    small s;

    int numOne, numTwo, larg, sm;
    cout<<"Enter the Two Numbers: ";
    cin>>numOne>>numTwo;

    larg = l.findLargest(numOne, numTwo);
    cout<<"\nLargest = "<<larg<<endl;

    sm = s.findSmalest(numOne, numTwo);
    cout<<"\nSmallest = "<<sm<<endl;

    return 0;
}