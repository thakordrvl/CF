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

    ll n;
    cin >> n;

    ll b[n];
    cin >> b[0];

    ll min = b[0];
    ll max = b[0];
    ll maxc = 1, minc = 1;

    ll c;
    for (ll i = 1; i < n; i++)
    {
        cin >> c;
        if (c < min)
        {
            minc = 1;
            min = c;
        }
        else if (c == min)
        {
            minc++;
        }

        if (c > max)
        {
            maxc = 1;
            max = c;
        }
        else if (c == max)
        {
            maxc++;
        }
    }

    ll ans1 = max - min;
    ll ans2 = maxc * minc;

    if (max == min)
        ans2 = (maxc*(maxc-1))/2;

    cout << ans1 << " " << ans2;

    return 0;
}