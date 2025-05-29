#include <iostream>
using namespace std;

int main()
{
    long long A, B, K;
    cin >> A >> B >> K;

    // // First, Takahashi eats his cookies
    // if (K <= A)
    // {
    //     A -= K;
    //     K = 0;
    // }
    // else
    // {
    //     K -= A;
    //     A = 0;
    // }

    // // Then, if there are remaining actions (K), Aoki eats his cookies
    // if (K > 0)
    // {
    //     if (K <= B)
    //     {
    //         B -= K;
    //         K = 0;
    //     }
    //     else
    //     {
    //         B = 0;
    //     }
    // }

    if (K <= A){
        A = A-K; 
    } else if (K < (A+B)) {
        B = ( A + B) - K;
        A = 0; 
    } else {
        A = 0;
        B = 0;
    }

    cout << A << " " << B << endl;
    return 0;
}
