#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int h;
    int w;
    while (1)
    {
        cin >> h;
        cin >> w;

        if (h == 0 && w == 0)
        {
            break;
        }

        for (int i = 1; i <= 1; i++)
        {
            
                for (int j = 1; j <= w; j++)
                {
                    cout << "#";
                }
            cout<<endl;
        }
        for (int i = 2; i <= h-1; i++)
        {
            cout << "#";
            for (int j = 2; j <= (w - 1); j++)
            {
                cout << ".";
            }
            cout << "#"<<endl;
        }
        for (int i = h; i <= h; i++)
        {
            
                for (int j = 1; j <= w; j++)
                {
                    cout << "#";
                }
            
            cout<<endl<<endl;
        }
    }
    return 0;
}