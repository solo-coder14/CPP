#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n, m;
    cin >> n >> m;

    char grid[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    bool done =  false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.') {

                int x, y;
                x = i - 1;
                y = j - 1;
                bool isAns = false;
                if (grid[x][y] == 'x' && x >= 0 && x < n && y >=0 && y < m ){
                    isAns = true;
                }
                x = i - 1;
                y = j;
                if (grid[x][y] == 'x' && x >= 0 && x < n && y >=0 && y < m ){
                    isAns = true;
                }
                x = i - 1;
                y = j + 1;
                if (grid[x][y] == 'x' && x >= 0 && x < n && y >=0 && y < m ){
                    isAns = true;
                }
                x = i;
                y = j - 1;
                if (grid[x][y] == 'x' && x >= 0 && x < n && y >=0 && y < m ){
                    isAns = true;
                }
                
                x = i;
                y = j + 1;
                if (grid[x][y] == 'x' && x >= 0 && x < n && y >=0 && y < m ){
                    isAns = true;
                }
                x = i + 1;
                y = j - 1;
                if (grid[x][y] == 'x' && x >= 0 && x < n && y >=0 && y < m ){
                    isAns = true;
                }
                x = i + 1;
                y = j;
                if (grid[x][y] == 'x' && x >= 0 && x < n && y >=0 && y < m ){
                    isAns = true;
                }
                x = i + 1;
                y = j + 1;
                if (grid[x][y] == 'x' && x >= 0 && x < n && y >=0 && y < m ){
                    isAns = true;
                }
                if (isAns) {
                    cout<<"Yes"<<endl;
                    done = true;
                    break;
                }
        }
    }
    if (done) break;
    }
    if (!done) cout<<"No"<<endl;
    return 0;
}