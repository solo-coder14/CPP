//CREATE A CLASS FLOAT THAT CONTAINS ONE FLOAT DATA MEMBER. OVERLOAD ALL THE FOUR ARITHMETIC OPERATORS SO THAT THEY OPERATE ON THE OBJECTS OF FLOAT

#include<iostream>
using namespace std;
class FLOAT
{
    float a;

    public:
            FLOAT(float a)
            {
                this->a=a;
            }

            float operator+(FLOAT F)
            {   
                return(a+F.a);
            }

            float operator-(FLOAT F)
            {
                return(a-F.a);
            }

            float operator*(FLOAT F)
            {
                return(a*F.a);
            }

            float operator/(FLOAT F)
            {
                return(a/F.a);
            }

};


int main()
{
    FLOAT f1(10.10),f2(20.20);
    
    cout<<"\n\n Operator + : "<<f1+f2;
    cout<<"\n\n Operator - : "<<f1-f2;
    cout<<"\n\n Operator * : "<<f1*f2;
    cout<<"\n\n Operator / : "<<f1/f2;

    return 0;
}