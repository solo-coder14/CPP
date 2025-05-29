#include <iostream>
using namespace std;
class IsPrime{
    private:
    int numb;

    public:
    void getNumb(){
        cout<<"Enter Number: ";
        cin>> numb;
    }
    void Isprime(){
        int index, check=0;
        for (index=2; index< numb; index++){
            if(numb % index==0){
                cout<<numb<<" number is not prime"<<endl;
                check++;
                break;
            }
        }
      if (check==0){
        cout<<numb<<"is prime"<<endl;
        }
    }

};

int main(){
    IsPrime p;
    p.getNumb();
    p.Isprime();
    return 0;
}