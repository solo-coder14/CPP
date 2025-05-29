#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    // vector<int> v ;
    // v.push_back(2);
    // v.push_back(3);
    // v[0] = 10;
    // cout<<v[0]<<endl;
    // cout<<v.size()<<endl;

    //user input for vector;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cin>> a;
    //     v.push_back(a);
    // }
    // cout<<v[2]<<endl;
    // vector<int> v = {6, 4, 2, 5, 2};
    //  for (auto u : v ) cout<< u << " ";
    // cout<<endl;
    // cout<< v.back() <<endl;
    // v.pop_back();
    // cout<< v.back() <<endl;
    // cout<< *v.begin() <<endl;
    // v.erase (v.begin()+3);
    // for (auto u : v ) cout<< u << " ";
    // cout<<endl;

    
    // cout<<v[1]<<endl;
    // v.clear();
    // cout<<v.empty()<<endl; //empty boolean function 

    // v.resize(10, 5); //vector<int> v(10, 5)
    // v[5]=10;
    // cout<<v[0]<<endl;
    // vector <int> :: iterator it;
    // for (it = v.begin(); it != v.end(); it++){
    //     cout<<*it<<" ";
    // }
    // for (int u : v) { //int = auto for auto detechting
    //     cout<< u << " ";
    // } 
    // cout<<endl;
    // sort(v.rbegin(), v.rend());
    // reverse(v.begin(), v.end());
    // for (int u : v) { //int = auto for auto detechting
    //     cout<< u << " ";
    // }  
    vector <int> a = {6, 4, 2, 5, 2};
    // sort(a.begin(), a.end());
    // int n = unique( a.begin(), a.end() ) - a.begin();
    // cout<<"Unique: "<< n <<endl;
    // for (int i = 0; i < n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    a = { 2, 3, 1, 5 };
    cout << max_element( a.begin(), a.end() ) - a.begin() << endl; /// 3
    cout << *max_element( a.begin(), a.end() ) << endl; /// 5

    return 0;
}