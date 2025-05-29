#include<iostream> 
using namespace std;

typedef struct employee
{
    int eID;
    char favChar;
    float salary;
} ep;

/*struct employee
{
    int eID;
    char favChar;
    float salary;
};*/

int main(){
    //struct employee Woafi;
    ep Woafi;
    Woafi.eID = 1;
    Woafi.favChar = 'w';
    Woafi.salary = 122;
    cout<<Woafi.salary<<endl;
    cout<<Woafi.favChar<<endl;
    return 0;
}