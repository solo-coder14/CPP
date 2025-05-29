#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int nx = 2e5 + 123;
int a[nx];

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        priority_queue<pair<int, int>> q;
        q.push({n, -1});

        int i = 1;
        while (!q.empty())
        {
            int l = q.top().second * -1;
            int len = q.top().first;
                 
            int r = l + len - 1;
            q.pop();
            int mid;
            if (len % 2 == 0)
            {
                mid = (l + r - 1) / 2;
            }
            else
            {
                mid = (l + r) / 2;
            }

            a[mid] = i;
            i++;

            int l1, r1, l2, r2;

            l1 = l;
            r1 = mid - 1;
        
            l2 = mid + 1;
            r2 = r;
            if (l1 <= r1)
            {
                q.push({r1 - l1 + 1, -l1});
            }

            if (l2 <= r2)
            {
                q.push({r2 - l2 + 1, -l2});
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// void call(int l, int r, int &i, int a[])
// {
//     if (l > r)
//         return;

//     int mid = (l + r) / 2;

//     a[mid] = i++;

//     // Recursively divide the left and right segments
//     call(l, mid - 1, i, a);
//     call(mid + 1, r, i, a);
// }

// const int nx = 2e5 + 123;
// int a[nx];

// int main()
// {
//     optimize();

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int i = 1; // Initialize i as 1 for each test case
//         call(1, n, i, a);

//         // Output the result
//         for (int i = 1; i <= n; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
