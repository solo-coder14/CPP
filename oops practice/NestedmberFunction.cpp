#include<iostream> 
using namespace std;

class binary{
    string s;
    public:
    void read(void);
    void chk_bin(void);
};

void binary :: read(void){
    cout<<"ENTER A BINARY NUMBER: "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){

    read();

    for (int  i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        } else{
            cout<<"correct binary format"<<endl;
        }
    }
    
}

int main(){
    binary b;
    b.chk_bin();
    return 0;
}