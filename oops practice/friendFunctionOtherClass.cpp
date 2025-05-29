#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};

class Complex
{
    int a;
    int b;
    // Individually
    // friend int Calculator :: sumComplex(Complex o1, Complex o2);
    // friend int Calculator :: sumComComplex(Complex o1, Complex o2);

    // Entire Calculator class as friend
    friend class Calculator;
public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNumber()
    {
        cout << "Your complex: " << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumComComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2, sum;

    c1.setData(2, 4);
    c1.printNumber();

    c2.setData(3, 6);
    c2.printNumber();

    Calculator calc;
    int result = calc.sumComplex(c1, c2);
    cout << "The sum of real part of o1 and o2 is " << result;
    int resultComplex = calc.sumComComplex(c1, c2);
    cout << "The sum of complex part of o1 and o2 is " << resultComplex;
    return 0;
}