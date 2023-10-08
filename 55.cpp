#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     // freopen(input.txt,r,stdin); put double comma
//     // freopen(output.txt,w,stdout);
//     int n;
//     cin >> n;
//     int size = 2n + 1;

//     string s[size];

//     for (int i = 0; i < s[i].length(); i++)
//         s[i][i] = ' ';

//     for (int i = 0; i < n + 1; i++)
//     {
//         s[i][n] = i;
//         s[size - 1 - i][n] = i;
//     }

//     return 0;
// }

// Jam-Burger
#include <iostream>
int main()
{
    int n;
    cin >> n;
    for (int i = -n; i <=n; i++)
    {
        for (int j = -n; j <=n; j++)
        {
            int d= n - i - j;
            (d<0) ? cout << ' ' : cout << d;
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
