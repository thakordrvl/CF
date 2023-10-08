#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen(input.txt,r,stdin); put double comma
    // freopen(output.txt,w,stdout);

    ll m;
    ll n;
    ll x;
    ll y;
    ll z;
    cin >> n;
    vector<ll> dp1(n);
    vector<ll> vv(n);
    vector<ll> dp2(n);
    vector<ll> v(n);
    vector<pair<ll, pair<ll, ll>>> p;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        vv[i] = v[i];
    }
    
    cin >> m;

    for (ll i = 0; i < m; i++)
    {
        cin >> x >> y >> z;
        p.push_back({x, {y, z}});
    }

    sort(vv.begin(), vv.end());
    dp1[0] = v[0];
    dp2[0] = vv[0];

    for (ll i = 1; i < n; i++)
    {
        dp1[i] = v[i] + dp1[i - 1];
        dp2[i] = vv[i] + dp2[i - 1];
    }

    for (auto it : p)
    {

        if (it.first == 1)
        {
            cout << dp1[it.second.second - 1] - dp1[it.second.first - 1] + v[it.second.first-1] << endl;
        }

        else
        {
            cout << dp2[it.second.second - 1] - dp2[it.second.first - 1] + vv[it.second.first-1] << endl;
        }
    }

    return 0;
}