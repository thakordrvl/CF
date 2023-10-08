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

    int y, n, k;
    cin >> y >> k >> n;

    if (n / k > 1e5)
    {
        cout << -1 << endl;
        return 0;
    }

    if (y >= n)
    {
        cout << -1 << endl;
        return 0;
    }

    int maxx = n - y;
    int start = n - y % k;

    for (int i = 1; i <= maxx; i++)
    {

        if ((i + y) % k == 0)
            cout << i << " ";
    }

    return 0;
}