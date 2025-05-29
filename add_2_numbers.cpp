#include <iostream>
#include <climits>  // Include the header for INT_MAX and INT_MIN
using namespace std;

int main(){
    cout<<"Enter Numbers: ";
    long long int numb1, numb2;
    cin>>numb1>>numb2;
    
    long long int sum = numb1 + numb2;
    cout<<"The sum: "<< sum<< endl;

    int n = INT_MAX;
    int m = INT_MIN;

    return 0;
}