#include <bits/stdc++.h>
using namespace std;
typedef vector<int> V;
typedef long long ll;

#define f(i, a, b) for (int i = a; i < b; i++)
#define trav(a, x) for (auto &a : x)
#define all(x) x.begin(), x.end()
int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int ans = 0;
    for (auto i : m)
    {
        if (i.second > (n + 1) / 2)
        {
            ans++;
        }
    }
    if (ans == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}