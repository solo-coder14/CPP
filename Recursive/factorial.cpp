#include <iostream>
using namespace std;

void logic(int i, int x, int &fact)
{
    if (i == x)
    {
        fact *= i;
        // cout<<fact<<endl;
        return;
    }

    fact *= i;
    logic(i + 1, x, fact);
}

int main()
{
    cout << "Enter the number: ";
    int x;
    cin >> x;
    int fact = 1;
    logic(1, x, fact);
    cout << fact << endl;
    return 0;
}