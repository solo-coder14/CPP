#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int nx = 123;
int x[nx], y[nx];
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x[i] >> y[i];
    }
    double maxDistance = 0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            int x1 = x[i];
            int y1 = y[i];

            int x2 = x[j];
            int y2 = y[j];
            double dist = sqrt (((x1 - x2) * (x1 - x2)) + ((y1-y2) * (y1-y2) ));
            if (dist > maxDistance)
            {
                maxDistance = dist;
            }
        }
        
        
    }
    printf("%.10lf\n", maxDistance);

    return 0;
}