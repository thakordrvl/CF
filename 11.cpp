#include <bits/stdc++.h>
using namespace std;
int prime(int m)
{
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, m, f;
    f = 1;
    cin >> n >> m;
    f = prime(m);
    // for (int i = 0; i < m; i)
    // {
    //     if (m % i == 0)
    //     {
    //         cout << "N0" << endl;
    //         return 0;
    //     }
    // }
    // if (f == 0)
    // {
    //     cout << "NO" << endl;
    //     return 0;
    // }
    // for (int x = n + 1; x < m; x++)
    // {
    //     if (prime(x))
    //     {
    //         cout << "NO" << endl;
    //         f = 0;
    //         break;
    //     }
    // }
    // if (f)
    // {
    //     cout << "YES" << endl;
    // }
    for (int x = n + 1; x < m; x++)
    {
        if (prime(x))
        {
            f = 0;
            break;
        }
    }
    cout << (f ? "YES" : "NO") << endl;

    return 0;
}