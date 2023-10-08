#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    ll min = LONG_LONG_MAX, max = 0;
    vector<pair<ll, ll>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;

        if (v[i].first < min)
            min = v[i].first;
        if (v[i].second > max)
            max = v[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i].first == min and v[i].second == max)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1;

    return 0;
}