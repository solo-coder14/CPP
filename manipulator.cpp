#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a = 3, b = 78, c = 1234;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    cout << "**with setw**" << endl;
    cout << setw(4) << a << endl;
    cout << setw(4) << b << endl;
    cout << setw(4) << c << endl;

    cout << fixed << setprecision(2) << a << " " << b << " " << c << endl;
    cout << fixed << setprecision(3) << c << endl;

    return 0;
}