#include <iostream>
using namespace std;

class pen{
    public:
    string color;
    string type;

    void displaydata();
    void colorprint();
    pen(){
        cout<<"auto"<<endl;
    }
                                // cant be cuz pen :: pen cant be overloaded
};
void pen :: colorprint(){
    cout<< color<<endl;
    cout<< type<<endl;
}
void pen :: displaydata(void){
    cout<<"Writing Something"<<endl;
}

int main(){
    pen pen1;
    pen1.color="Black";
    getline(cin, pen1.type);
    pen1.displaydata();
    pen1.colorprint();
    return 0;
}

