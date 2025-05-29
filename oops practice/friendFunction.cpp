#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber()
    {
        cout << "Your complex: " << a << "+" << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setData(2, 4);
    c1.printNumber();

    c2.setData(3, 6);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}