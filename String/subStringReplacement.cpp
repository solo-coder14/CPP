#include <iostream>
#include <string>
using namespace std;

string replacetxt(const string& str, const string& subStr, const string& newSubstr){
    string modified = str;    
    size_t pos = modified.find(subStr);

    while (pos != string::npos)
    {
        modified.replace(pos, subStr.length(), newSubstr);
        pos =modified.find(subStr, pos+newSubstr.length());
    }
    return modified;

}


int main(){
    string str = "This is his last message";
    string subStr = "is";
    string newSubstr = "ABC";

    cout<<"Original txt: "<<str;

    string result = replacetxt(str, subStr, newSubstr);

    cout<<endl<<"After Replace: "<<result;



    return 0;
}