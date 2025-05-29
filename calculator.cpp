#include<iostream> 
#include <algorithm> 
using namespace std;



int main(){
    // int a,b;
    // char op;
    // int result;
    // while(1){
        
    //     cin>>a;
    //     cin.ignore();
    //     cin>>op; //operator
    //     cin.ignore();
    //     cin>>b;
    //     if (op == '?'){
    //         break;
    //     }
    //     if (op == '+' ){
    //         result = a+b;
    //         cout<<result<<endl;
    //     }
    //     if (op == '-'){
    //             result = a - b;
    //             cout<<result<<endl;
    //     }
    //     if (op == '*' ){
    //         result = a*b;
    //         cout<<result<<endl;
    //     }
    //     if (op == '/'){
    //             result = a / b;
    //             cout<<result<<endl;
    //     }
        
        
    // }
    int a, b;
    char op;
    
    while (true) {
        cin >> a >> op >> b;
        
        if (op == '?') {
            break;
        }
        
        switch (op) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                cout << a / b << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}