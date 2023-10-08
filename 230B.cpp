#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int long long

const ll N = 1e7;

vector<bool> v(N, true);

void sieve()
{

    v[1] = false;

    for (int i = 2; i < N; i++)
    {
        if (v[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                v[j] = false;
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen(input.txt,r,stdin); put double comma
    // freopen(output.txt,w,stdout);

    int n;
    cin >> n;
    int arr[n];
    sieve();
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (auto it : arr)
    {
        int x = (int)sqrt(it);

        if (x * x == it)
        {
            if (v[x])
                cout << "YES" << endl;

            else
                cout << "NO" << endl;

        }
        else
            cout << "NO" << endl;
    }

    return 0;
}