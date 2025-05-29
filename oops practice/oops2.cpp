#include<iostream> 
using namespace std;

class book {
    private:
        string name;
        string genre;           //by default private
        int price;
    public:
        void setData(string name1, string genre1, int price1){
            name=name1;
            genre=genre1;
            price=price1;
        }
        void display();
};

void book :: display(){
    cout<<name<<endl;
    cout<<genre<<endl;
    cout<<price<<endl;
}

int main(){
    book b1;
    //b1.name="Woafi"; cannot be written like this because name variable is declared in private
    b1.setData("Great Expectation", "Genre", 832);
    b1.display();
    return 0;
}