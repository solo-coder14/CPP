#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 1809;
    int reverse_numb = 0;
    int lastdigit;
    while (n != 0)
    {
        lastdigit = n % 10;
        n = n / 10;
        reverse_numb = (reverse_numb * 10) + (lastdigit);
    }
    cout << reverse_numb;
    return 0;
}