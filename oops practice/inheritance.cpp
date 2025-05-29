#include <iostream>
using namespace std;

class area_cl
{
    public: double a,b;
        void get_data ()
        {
            cin>>a>>b;
        }
        virtual void area () = 0;
};

class Rectangle:public area_cl
{
    public: void area ()
    {
        cout<<"Area of rectangle "<<a*b<<endl;
    }
};

class isosceles:public area_cl
{
    public: void area ()
    {
        cout<<"Area of triangle "<<0.5*a*b<<endl;
    }
};

int main()
{
    isosceles t;
    area_cl *st = &t;
    cout<<"Enter width and height: ";
    st->get_data();
    st->area();

    Rectangle r;
    area_cl *sr = &r;
    cout<<"Enter height and width: ";
    sr->get_data();
    sr->area();

    return 0;
}
