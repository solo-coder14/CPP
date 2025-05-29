#include<iostream>
using namespace std;
class factorial
{
	public:
	long long fact=1;
	long long num;
	void fact_function();
	void display();
	factorial(long long a);	
};
 
	//parametrized constructor 
	factorial::factorial(long long a)
	{
		num=a;
	}
 
	void factorial::fact_function()
	{
	
	for(long long i=1;i<=num;i++)
	{
	fact=fact*i;
	
	}
	}
 
	void factorial::display()
	{
	cout<<"Factorial of entered number is: "<<fact;
	}
 
int main()
{
	long long num;
	cout<<"Please enter a number: ";
	cin>>num;
	
	//calling parametrized constructor
	factorial object(num);
	
	object.fact_function();
	object.display();
    return 0;
}