
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;
    if (n & 1 == 1)
    {

        if (k <= ((n / 2) + 1))
        {
            cout << 2 * (k - 1) + 1;
            return 0;
        }

        else
        {
            cout << 2 * (k - ((n / 2) + 1));
            return 0;
        }
    }
    else
    {
        if (k <= (n / 2))
        {
            ll ans = 2 * (k - 1) + 1;

            cout << ans;
            return 0;
        }

        else
        {
            if ((n / 2) == k)
                cout << "2";

            // cout<<"yes";
            ll ans = 2 * (k - (n / 2));
            cout << ans;
            return 0;
        }
    }

    return 0;
}