#include <iostream>
using namespace std;

class student
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this student is " << id << "and this is student number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "Value of Count: " << count << endl;
    }
};

int student :: count = 100; // default value = 0;

int main()
{

    student::getCount();
    student rohan, harry;

    harry.setData();
    harry.getData();
    student::getCount();

    rohan.setData();
    rohan.getData();
    student::getCount();
    return 0;
}