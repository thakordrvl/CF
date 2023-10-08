#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    // Your code goes here

    int n;
    cin >> n;
    char c;
    cin >> c;
    string str;
    cin >> str;
    int ind = 0;
    int check = 0;
    int check2 = 1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == c && n / (i + 1) <= 1)
        {
            ind = i + 1;
            check = 1;
        }
        if (str[i] != c)
        {
            check2 = 0;
        }
    }
    if (check2)
    {
        cout << "0" << endl;
        // continue;
        return;
    }
    if (check)
    {
        cout << "1" << endl;
        cout << ind << endl;
        return;
    }
    else
    {
        cout << "2" << endl;
        cout << n - 1 << " " << n << endl;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}