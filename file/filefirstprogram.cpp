#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string st;
    cout<<"Enter a Text: ";
    getline(cin, st);
    string st3;
    cout<<"Enter 2nd Text: ";
    getline(cin, st3);

    //opening files using constructor
    ofstream out("firstfileprogram.txt");
    //write operation
    out<<st;
    out<<"\n";
    out<<st3;

    /*string st2;
    //opening files using constructor
    ifstream in("firstfileprogram.txt");
    //read operation
    //in>>st2; for reading a first word from file
    getline(in, st2); //for firstline of file
    //getline(in, st2); //for 2nd line of file //after 2nd line of execution 1st line will be vanish
    cout<<st2;*/
    
    return 0;
}