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

    ll t;
    cin >> t;
    while (t--)
    {

        ll a, b;
        ll n, m;
        cin >> a >> b;
        cin >> n >> m;

        ll count = 0;
        ll ans = 0;

        while (n >= count + m + 1)
        {

            if (a * m <= b * (m + 1))
            {
                ans += a * m;
                count += (m + 1);
            }

            else
            {
                ans += b * (m + 1);
                count += m + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}