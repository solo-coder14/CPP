#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>> t;
    while(t--){
        int b, p, f, h, c;
        cin>> b>>p>>f>>h>>c;

        int mxprice, mxPricePattiNum, mnprice, mnPricePattiNum;
        if (h > c){
            mxprice = h;
            mxPricePattiNum = p;

            mnprice = c;
            mnPricePattiNum = f;

        } else {
            mxprice = c;
            mxPricePattiNum = f;

            mnprice = h;
            mnPricePattiNum = p;
        }

        int burgerNum = b/2;
        int profit = 0;

        if (mxPricePattiNum >= burgerNum ){
            profit += burgerNum * mxprice;
            burgerNum = 0;
        } else {
            burgerNum -= mxPricePattiNum;
            profit += mxPricePattiNum * mxprice;
        }

        if (mnPricePattiNum >= burgerNum ){
            profit += burgerNum * mnprice;
            burgerNum = 0;
        } else {
            profit += mnprice * mnPricePattiNum;
        }

        cout<< profit<<endl;
    
    }
    return 0;
}