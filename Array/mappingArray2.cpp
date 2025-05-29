//https://atcoder.jp/contests/abc236/tasks/abc236_b?lang=en

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[(n*4)+1] = {0};
    int num;
    for (int i = 0; i < 4 * n-1; i++)
    {
        
        cin>> num;
        arr[num]++;
    }

    for (int i = 1; i <= n*4; i++)
    {
        if (arr[i] == 3){
            cout<<i<<endl;
        }
    }


    
    return 0;
}
