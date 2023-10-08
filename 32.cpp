#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n >> m;
    queue<pair<int, int>> p;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        p.push({a[i], i});
    }
    while (p.size() != 1)
    {
        if ((p.front()).first <= m)
        {
            p.pop();
        }
        else
        {
            p.push({(p.front()).first - m, (p.front()).second});
            p.pop();
        }
    }

    cout << (p.front()).second + 1;

    return 0;
}